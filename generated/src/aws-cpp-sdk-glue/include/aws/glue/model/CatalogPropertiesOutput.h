/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataLakeAccessPropertiesOutput.h>
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
   * <p>Property attributes that include configuration properties for the catalog
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CatalogPropertiesOutput">AWS
   * API Reference</a></p>
   */
  class CatalogPropertiesOutput
  {
  public:
    AWS_GLUE_API CatalogPropertiesOutput();
    AWS_GLUE_API CatalogPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CatalogPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>DataLakeAccessProperties</code> object with input properties to
     * configure data lake access for your catalog resource in the Glue Data
     * Catalog.</p>
     */
    inline const DataLakeAccessPropertiesOutput& GetDataLakeAccessProperties() const{ return m_dataLakeAccessProperties; }
    inline bool DataLakeAccessPropertiesHasBeenSet() const { return m_dataLakeAccessPropertiesHasBeenSet; }
    inline void SetDataLakeAccessProperties(const DataLakeAccessPropertiesOutput& value) { m_dataLakeAccessPropertiesHasBeenSet = true; m_dataLakeAccessProperties = value; }
    inline void SetDataLakeAccessProperties(DataLakeAccessPropertiesOutput&& value) { m_dataLakeAccessPropertiesHasBeenSet = true; m_dataLakeAccessProperties = std::move(value); }
    inline CatalogPropertiesOutput& WithDataLakeAccessProperties(const DataLakeAccessPropertiesOutput& value) { SetDataLakeAccessProperties(value); return *this;}
    inline CatalogPropertiesOutput& WithDataLakeAccessProperties(DataLakeAccessPropertiesOutput&& value) { SetDataLakeAccessProperties(std::move(value)); return *this;}
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
    inline CatalogPropertiesOutput& WithCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomProperties(value); return *this;}
    inline CatalogPropertiesOutput& WithCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomProperties(std::move(value)); return *this;}
    inline CatalogPropertiesOutput& AddCustomProperties(const Aws::String& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }
    inline CatalogPropertiesOutput& AddCustomProperties(Aws::String&& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }
    inline CatalogPropertiesOutput& AddCustomProperties(const Aws::String& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }
    inline CatalogPropertiesOutput& AddCustomProperties(Aws::String&& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline CatalogPropertiesOutput& AddCustomProperties(const char* key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }
    inline CatalogPropertiesOutput& AddCustomProperties(Aws::String&& key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }
    inline CatalogPropertiesOutput& AddCustomProperties(const char* key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }
    ///@}
  private:

    DataLakeAccessPropertiesOutput m_dataLakeAccessProperties;
    bool m_dataLakeAccessPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customProperties;
    bool m_customPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
