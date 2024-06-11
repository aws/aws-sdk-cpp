﻿/**
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
    AWS_GLUE_API FederatedTable();
    AWS_GLUE_API FederatedTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FederatedTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the federated table.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline FederatedTable& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline FederatedTable& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline FederatedTable& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the federated database.</p>
     */
    inline const Aws::String& GetDatabaseIdentifier() const{ return m_databaseIdentifier; }
    inline bool DatabaseIdentifierHasBeenSet() const { return m_databaseIdentifierHasBeenSet; }
    inline void SetDatabaseIdentifier(const Aws::String& value) { m_databaseIdentifierHasBeenSet = true; m_databaseIdentifier = value; }
    inline void SetDatabaseIdentifier(Aws::String&& value) { m_databaseIdentifierHasBeenSet = true; m_databaseIdentifier = std::move(value); }
    inline void SetDatabaseIdentifier(const char* value) { m_databaseIdentifierHasBeenSet = true; m_databaseIdentifier.assign(value); }
    inline FederatedTable& WithDatabaseIdentifier(const Aws::String& value) { SetDatabaseIdentifier(value); return *this;}
    inline FederatedTable& WithDatabaseIdentifier(Aws::String&& value) { SetDatabaseIdentifier(std::move(value)); return *this;}
    inline FederatedTable& WithDatabaseIdentifier(const char* value) { SetDatabaseIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection to the external metastore.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline FederatedTable& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline FederatedTable& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline FederatedTable& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_databaseIdentifier;
    bool m_databaseIdentifierHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
