/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataLakeAccessPropertiesOutput.h>
#include <aws/glue/model/IcebergOptimizationPropertiesOutput.h>
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
    AWS_GLUE_API CatalogPropertiesOutput() = default;
    AWS_GLUE_API CatalogPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CatalogPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>DataLakeAccessProperties</code> object with input properties to
     * configure data lake access for your catalog resource in the Glue Data
     * Catalog.</p>
     */
    inline const DataLakeAccessPropertiesOutput& GetDataLakeAccessProperties() const { return m_dataLakeAccessProperties; }
    inline bool DataLakeAccessPropertiesHasBeenSet() const { return m_dataLakeAccessPropertiesHasBeenSet; }
    template<typename DataLakeAccessPropertiesT = DataLakeAccessPropertiesOutput>
    void SetDataLakeAccessProperties(DataLakeAccessPropertiesT&& value) { m_dataLakeAccessPropertiesHasBeenSet = true; m_dataLakeAccessProperties = std::forward<DataLakeAccessPropertiesT>(value); }
    template<typename DataLakeAccessPropertiesT = DataLakeAccessPropertiesOutput>
    CatalogPropertiesOutput& WithDataLakeAccessProperties(DataLakeAccessPropertiesT&& value) { SetDataLakeAccessProperties(std::forward<DataLakeAccessPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>IcebergOptimizationPropertiesOutput</code> object that specifies
     * Iceberg table optimization settings for the catalog, including configurations
     * for compaction, retention, and orphan file deletion operations.</p>
     */
    inline const IcebergOptimizationPropertiesOutput& GetIcebergOptimizationProperties() const { return m_icebergOptimizationProperties; }
    inline bool IcebergOptimizationPropertiesHasBeenSet() const { return m_icebergOptimizationPropertiesHasBeenSet; }
    template<typename IcebergOptimizationPropertiesT = IcebergOptimizationPropertiesOutput>
    void SetIcebergOptimizationProperties(IcebergOptimizationPropertiesT&& value) { m_icebergOptimizationPropertiesHasBeenSet = true; m_icebergOptimizationProperties = std::forward<IcebergOptimizationPropertiesT>(value); }
    template<typename IcebergOptimizationPropertiesT = IcebergOptimizationPropertiesOutput>
    CatalogPropertiesOutput& WithIcebergOptimizationProperties(IcebergOptimizationPropertiesT&& value) { SetIcebergOptimizationProperties(std::forward<IcebergOptimizationPropertiesT>(value)); return *this;}
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
    CatalogPropertiesOutput& WithCustomProperties(CustomPropertiesT&& value) { SetCustomProperties(std::forward<CustomPropertiesT>(value)); return *this;}
    template<typename CustomPropertiesKeyT = Aws::String, typename CustomPropertiesValueT = Aws::String>
    CatalogPropertiesOutput& AddCustomProperties(CustomPropertiesKeyT&& key, CustomPropertiesValueT&& value) {
      m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::forward<CustomPropertiesKeyT>(key), std::forward<CustomPropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    DataLakeAccessPropertiesOutput m_dataLakeAccessProperties;
    bool m_dataLakeAccessPropertiesHasBeenSet = false;

    IcebergOptimizationPropertiesOutput m_icebergOptimizationProperties;
    bool m_icebergOptimizationPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customProperties;
    bool m_customPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
