/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/BCMDataExportsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

  /**
   */
  class GetTableRequest : public BCMDataExportsRequest
  {
  public:
    AWS_BCMDATAEXPORTS_API GetTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTable"; }

    AWS_BCMDATAEXPORTS_API Aws::String SerializePayload() const override;

    AWS_BCMDATAEXPORTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline GetTableRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline GetTableRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline GetTableRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTableProperties() const{ return m_tableProperties; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline bool TablePropertiesHasBeenSet() const { return m_tablePropertiesHasBeenSet; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline void SetTableProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties = value; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline void SetTableProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties = std::move(value); }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableRequest& WithTableProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetTableProperties(value); return *this;}

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableRequest& WithTableProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetTableProperties(std::move(value)); return *this;}

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableRequest& AddTableProperties(const Aws::String& key, const Aws::String& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties.emplace(key, value); return *this; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableRequest& AddTableProperties(Aws::String&& key, const Aws::String& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableRequest& AddTableProperties(const Aws::String& key, Aws::String&& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableRequest& AddTableProperties(Aws::String&& key, Aws::String&& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableRequest& AddTableProperties(const char* key, Aws::String&& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableRequest& AddTableProperties(Aws::String&& key, const char* value) { m_tablePropertiesHasBeenSet = true; m_tableProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableRequest& AddTableProperties(const char* key, const char* value) { m_tablePropertiesHasBeenSet = true; m_tableProperties.emplace(key, value); return *this; }

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tableProperties;
    bool m_tablePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
