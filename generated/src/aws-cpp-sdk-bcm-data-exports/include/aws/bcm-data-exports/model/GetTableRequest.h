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
    AWS_BCMDATAEXPORTS_API GetTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTable"; }

    AWS_BCMDATAEXPORTS_API Aws::String SerializePayload() const override;

    AWS_BCMDATAEXPORTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    GetTableRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTableProperties() const { return m_tableProperties; }
    inline bool TablePropertiesHasBeenSet() const { return m_tablePropertiesHasBeenSet; }
    template<typename TablePropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetTableProperties(TablePropertiesT&& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties = std::forward<TablePropertiesT>(value); }
    template<typename TablePropertiesT = Aws::Map<Aws::String, Aws::String>>
    GetTableRequest& WithTableProperties(TablePropertiesT&& value) { SetTableProperties(std::forward<TablePropertiesT>(value)); return *this;}
    template<typename TablePropertiesKeyT = Aws::String, typename TablePropertiesValueT = Aws::String>
    GetTableRequest& AddTableProperties(TablePropertiesKeyT&& key, TablePropertiesValueT&& value) {
      m_tablePropertiesHasBeenSet = true; m_tableProperties.emplace(std::forward<TablePropertiesKeyT>(key), std::forward<TablePropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tableProperties;
    bool m_tablePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
