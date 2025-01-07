/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataLakeAccessProperties.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>A structure that specifies data lake access properties and other custom
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CatalogProperties">AWS
   * API Reference</a></p>
   */
  class CatalogProperties
  {
  public:
    AWS_GLUE_API CatalogProperties();
    AWS_GLUE_API CatalogProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CatalogProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>DataLakeAccessProperties</code> object that specifies properties to
     * configure data lake access for your catalog resource in the Glue Data
     * Catalog.</p>
     */
    inline const DataLakeAccessProperties& GetDataLakeAccessProperties() const{ return m_dataLakeAccessProperties; }
    inline bool DataLakeAccessPropertiesHasBeenSet() const { return m_dataLakeAccessPropertiesHasBeenSet; }
    inline void SetDataLakeAccessProperties(const DataLakeAccessProperties& value) { m_dataLakeAccessPropertiesHasBeenSet = true; m_dataLakeAccessProperties = value; }
    inline void SetDataLakeAccessProperties(DataLakeAccessProperties&& value) { m_dataLakeAccessPropertiesHasBeenSet = true; m_dataLakeAccessProperties = std::move(value); }
    inline CatalogProperties& WithDataLakeAccessProperties(const DataLakeAccessProperties& value) { SetDataLakeAccessProperties(value); return *this;}
    inline CatalogProperties& WithDataLakeAccessProperties(DataLakeAccessProperties&& value) { SetDataLakeAccessProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional key-value properties for the catalog, such as column statistics
     * optimizations.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomProperties() const{ return m_customProperties; }
    inline bool CustomPropertiesHasBeenSet() const { return m_customPropertiesHasBeenSet; }
    inline void SetCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_customPropertiesHasBeenSet = true; m_customProperties = value; }
    inline void SetCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_customPropertiesHasBeenSet = true; m_customProperties = std::move(value); }
    inline CatalogProperties& WithCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomProperties(value); return *this;}
    inline CatalogProperties& WithCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomProperties(std::move(value)); return *this;}
    inline CatalogProperties& AddCustomProperties(const Aws::String& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }
    inline CatalogProperties& AddCustomProperties(Aws::String&& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }
    inline CatalogProperties& AddCustomProperties(const Aws::String& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }
    inline CatalogProperties& AddCustomProperties(Aws::String&& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline CatalogProperties& AddCustomProperties(const char* key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }
    inline CatalogProperties& AddCustomProperties(Aws::String&& key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }
    inline CatalogProperties& AddCustomProperties(const char* key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }
    ///@}
  private:

    DataLakeAccessProperties m_dataLakeAccessProperties;
    bool m_dataLakeAccessPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customProperties;
    bool m_customPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
