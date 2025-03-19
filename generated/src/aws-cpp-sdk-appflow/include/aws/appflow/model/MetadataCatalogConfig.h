/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/GlueDataCatalogConfig.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs your
   * data. When Amazon AppFlow catalogs your data, it stores metadata in a data
   * catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/MetadataCatalogConfig">AWS
   * API Reference</a></p>
   */
  class MetadataCatalogConfig
  {
  public:
    AWS_APPFLOW_API MetadataCatalogConfig() = default;
    AWS_APPFLOW_API MetadataCatalogConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API MetadataCatalogConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs your
     * data with the Glue Data Catalog.</p>
     */
    inline const GlueDataCatalogConfig& GetGlueDataCatalog() const { return m_glueDataCatalog; }
    inline bool GlueDataCatalogHasBeenSet() const { return m_glueDataCatalogHasBeenSet; }
    template<typename GlueDataCatalogT = GlueDataCatalogConfig>
    void SetGlueDataCatalog(GlueDataCatalogT&& value) { m_glueDataCatalogHasBeenSet = true; m_glueDataCatalog = std::forward<GlueDataCatalogT>(value); }
    template<typename GlueDataCatalogT = GlueDataCatalogConfig>
    MetadataCatalogConfig& WithGlueDataCatalog(GlueDataCatalogT&& value) { SetGlueDataCatalog(std::forward<GlueDataCatalogT>(value)); return *this;}
    ///@}
  private:

    GlueDataCatalogConfig m_glueDataCatalog;
    bool m_glueDataCatalogHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
