/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>A table that points to an entity outside the Glue Data Catalog.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FederatedTable">AWS
   * API Reference</a></p>
   */
  class FederatedTable
  {
  public:
    AWS_GLUE_API FederatedTable() = default;
    AWS_GLUE_API FederatedTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FederatedTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the federated table.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    FederatedTable& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the federated database.</p>
     */
    inline const Aws::String& GetDatabaseIdentifier() const { return m_databaseIdentifier; }
    inline bool DatabaseIdentifierHasBeenSet() const { return m_databaseIdentifierHasBeenSet; }
    template<typename DatabaseIdentifierT = Aws::String>
    void SetDatabaseIdentifier(DatabaseIdentifierT&& value) { m_databaseIdentifierHasBeenSet = true; m_databaseIdentifier = std::forward<DatabaseIdentifierT>(value); }
    template<typename DatabaseIdentifierT = Aws::String>
    FederatedTable& WithDatabaseIdentifier(DatabaseIdentifierT&& value) { SetDatabaseIdentifier(std::forward<DatabaseIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection to the external metastore.</p>
     */
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    FederatedTable& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connection used to access the federated table, specifying the
     * protocol or method for connecting to the external data source.</p>
     */
    inline const Aws::String& GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    template<typename ConnectionTypeT = Aws::String>
    void SetConnectionType(ConnectionTypeT&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::forward<ConnectionTypeT>(value); }
    template<typename ConnectionTypeT = Aws::String>
    FederatedTable& WithConnectionType(ConnectionTypeT&& value) { SetConnectionType(std::forward<ConnectionTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_databaseIdentifier;
    bool m_databaseIdentifierHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_connectionType;
    bool m_connectionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
