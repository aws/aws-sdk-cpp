/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/GlueDataCatalogConfigurationDescription.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>The configuration parameters for the default Amazon Glue database. You use
   * this database for Apache Flink SQL queries and table API transforms that you
   * write in a Managed Service for Apache Flink Studio notebook.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CatalogConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class CatalogConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API CatalogConfigurationDescription() = default;
    AWS_KINESISANALYTICSV2_API CatalogConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CatalogConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration parameters for the default Amazon Glue database. You use
     * this database for SQL queries that you write in a Managed Service for Apache
     * Flink Studio notebook.</p>
     */
    inline const GlueDataCatalogConfigurationDescription& GetGlueDataCatalogConfigurationDescription() const { return m_glueDataCatalogConfigurationDescription; }
    inline bool GlueDataCatalogConfigurationDescriptionHasBeenSet() const { return m_glueDataCatalogConfigurationDescriptionHasBeenSet; }
    template<typename GlueDataCatalogConfigurationDescriptionT = GlueDataCatalogConfigurationDescription>
    void SetGlueDataCatalogConfigurationDescription(GlueDataCatalogConfigurationDescriptionT&& value) { m_glueDataCatalogConfigurationDescriptionHasBeenSet = true; m_glueDataCatalogConfigurationDescription = std::forward<GlueDataCatalogConfigurationDescriptionT>(value); }
    template<typename GlueDataCatalogConfigurationDescriptionT = GlueDataCatalogConfigurationDescription>
    CatalogConfigurationDescription& WithGlueDataCatalogConfigurationDescription(GlueDataCatalogConfigurationDescriptionT&& value) { SetGlueDataCatalogConfigurationDescription(std::forward<GlueDataCatalogConfigurationDescriptionT>(value)); return *this;}
    ///@}
  private:

    GlueDataCatalogConfigurationDescription m_glueDataCatalogConfigurationDescription;
    bool m_glueDataCatalogConfigurationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
