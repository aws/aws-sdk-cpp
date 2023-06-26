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
   * <p>A database that points to an entity outside the Glue Data
   * Catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FederatedDatabase">AWS
   * API Reference</a></p>
   */
  class FederatedDatabase
  {
  public:
    AWS_GLUE_API FederatedDatabase();
    AWS_GLUE_API FederatedDatabase(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FederatedDatabase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the federated database.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>A unique identifier for the federated database.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>A unique identifier for the federated database.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>A unique identifier for the federated database.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>A unique identifier for the federated database.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>A unique identifier for the federated database.</p>
     */
    inline FederatedDatabase& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the federated database.</p>
     */
    inline FederatedDatabase& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the federated database.</p>
     */
    inline FederatedDatabase& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The name of the connection to the external metastore.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the connection to the external metastore.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The name of the connection to the external metastore.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the connection to the external metastore.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The name of the connection to the external metastore.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the connection to the external metastore.</p>
     */
    inline FederatedDatabase& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the connection to the external metastore.</p>
     */
    inline FederatedDatabase& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection to the external metastore.</p>
     */
    inline FederatedDatabase& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
