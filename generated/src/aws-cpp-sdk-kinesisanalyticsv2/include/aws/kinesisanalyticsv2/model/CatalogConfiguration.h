/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/GlueDataCatalogConfiguration.h>
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
   * this database for SQL queries that you write in a Managed Service for Apache
   * Flink Studio notebook.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CatalogConfiguration">AWS
   * API Reference</a></p>
   */
  class CatalogConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API CatalogConfiguration() = default;
    AWS_KINESISANALYTICSV2_API CatalogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CatalogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration parameters for the default Amazon Glue database. You use
     * this database for Apache Flink SQL queries and table API transforms that you
     * write in a Managed Service for Apache Flink Studio notebook.</p>
     */
    inline const GlueDataCatalogConfiguration& GetGlueDataCatalogConfiguration() const { return m_glueDataCatalogConfiguration; }
    inline bool GlueDataCatalogConfigurationHasBeenSet() const { return m_glueDataCatalogConfigurationHasBeenSet; }
    template<typename GlueDataCatalogConfigurationT = GlueDataCatalogConfiguration>
    void SetGlueDataCatalogConfiguration(GlueDataCatalogConfigurationT&& value) { m_glueDataCatalogConfigurationHasBeenSet = true; m_glueDataCatalogConfiguration = std::forward<GlueDataCatalogConfigurationT>(value); }
    template<typename GlueDataCatalogConfigurationT = GlueDataCatalogConfiguration>
    CatalogConfiguration& WithGlueDataCatalogConfiguration(GlueDataCatalogConfigurationT&& value) { SetGlueDataCatalogConfiguration(std::forward<GlueDataCatalogConfigurationT>(value)); return *this;}
    ///@}
  private:

    GlueDataCatalogConfiguration m_glueDataCatalogConfiguration;
    bool m_glueDataCatalogConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
