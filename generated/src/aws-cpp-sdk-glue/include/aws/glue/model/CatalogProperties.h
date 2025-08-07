/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataLakeAccessProperties.h>
#include <aws/glue/model/IcebergOptimizationProperties.h>
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
    AWS_GLUE_API CatalogProperties() = default;
    AWS_GLUE_API CatalogProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CatalogProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>DataLakeAccessProperties</code> object that specifies properties to
     * configure data lake access for your catalog resource in the Glue Data
     * Catalog.</p>
     */
    inline const DataLakeAccessProperties& GetDataLakeAccessProperties() const { return m_dataLakeAccessProperties; }
    inline bool DataLakeAccessPropertiesHasBeenSet() const { return m_dataLakeAccessPropertiesHasBeenSet; }
    template<typename DataLakeAccessPropertiesT = DataLakeAccessProperties>
    void SetDataLakeAccessProperties(DataLakeAccessPropertiesT&& value) { m_dataLakeAccessPropertiesHasBeenSet = true; m_dataLakeAccessProperties = std::forward<DataLakeAccessPropertiesT>(value); }
    template<typename DataLakeAccessPropertiesT = DataLakeAccessProperties>
    CatalogProperties& WithDataLakeAccessProperties(DataLakeAccessPropertiesT&& value) { SetDataLakeAccessProperties(std::forward<DataLakeAccessPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that specifies Iceberg table optimization properties for the
     * catalog. This includes configuration for compaction, retention, and orphan file
     * deletion operations that can be applied to Iceberg tables in this catalog.</p>
     */
    inline const IcebergOptimizationProperties& GetIcebergOptimizationProperties() const { return m_icebergOptimizationProperties; }
    inline bool IcebergOptimizationPropertiesHasBeenSet() const { return m_icebergOptimizationPropertiesHasBeenSet; }
    template<typename IcebergOptimizationPropertiesT = IcebergOptimizationProperties>
    void SetIcebergOptimizationProperties(IcebergOptimizationPropertiesT&& value) { m_icebergOptimizationPropertiesHasBeenSet = true; m_icebergOptimizationProperties = std::forward<IcebergOptimizationPropertiesT>(value); }
    template<typename IcebergOptimizationPropertiesT = IcebergOptimizationProperties>
    CatalogProperties& WithIcebergOptimizationProperties(IcebergOptimizationPropertiesT&& value) { SetIcebergOptimizationProperties(std::forward<IcebergOptimizationPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional key-value properties for the catalog, such as column statistics
     * optimizations.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomProperties() const { return m_customProperties; }
    inline bool CustomPropertiesHasBeenSet() const { return m_customPropertiesHasBeenSet; }
    template<typename CustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomProperties(CustomPropertiesT&& value) { m_customPropertiesHasBeenSet = true; m_customProperties = std::forward<CustomPropertiesT>(value); }
    template<typename CustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    CatalogProperties& WithCustomProperties(CustomPropertiesT&& value) { SetCustomProperties(std::forward<CustomPropertiesT>(value)); return *this;}
    template<typename CustomPropertiesKeyT = Aws::String, typename CustomPropertiesValueT = Aws::String>
    CatalogProperties& AddCustomProperties(CustomPropertiesKeyT&& key, CustomPropertiesValueT&& value) {
      m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::forward<CustomPropertiesKeyT>(key), std::forward<CustomPropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    DataLakeAccessProperties m_dataLakeAccessProperties;
    bool m_dataLakeAccessPropertiesHasBeenSet = false;

    IcebergOptimizationProperties m_icebergOptimizationProperties;
    bool m_icebergOptimizationPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customProperties;
    bool m_customPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
