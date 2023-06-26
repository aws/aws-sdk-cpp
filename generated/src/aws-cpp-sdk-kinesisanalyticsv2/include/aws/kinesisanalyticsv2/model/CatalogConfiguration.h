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
   * this database for SQL queries that you write in a Kinesis Data Analytics Studio
   * notebook.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CatalogConfiguration">AWS
   * API Reference</a></p>
   */
  class CatalogConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API CatalogConfiguration();
    AWS_KINESISANALYTICSV2_API CatalogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CatalogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration parameters for the default Amazon Glue database. You use
     * this database for Apache Flink SQL queries and table API transforms that you
     * write in a Kinesis Data Analytics Studio notebook.</p>
     */
    inline const GlueDataCatalogConfiguration& GetGlueDataCatalogConfiguration() const{ return m_glueDataCatalogConfiguration; }

    /**
     * <p>The configuration parameters for the default Amazon Glue database. You use
     * this database for Apache Flink SQL queries and table API transforms that you
     * write in a Kinesis Data Analytics Studio notebook.</p>
     */
    inline bool GlueDataCatalogConfigurationHasBeenSet() const { return m_glueDataCatalogConfigurationHasBeenSet; }

    /**
     * <p>The configuration parameters for the default Amazon Glue database. You use
     * this database for Apache Flink SQL queries and table API transforms that you
     * write in a Kinesis Data Analytics Studio notebook.</p>
     */
    inline void SetGlueDataCatalogConfiguration(const GlueDataCatalogConfiguration& value) { m_glueDataCatalogConfigurationHasBeenSet = true; m_glueDataCatalogConfiguration = value; }

    /**
     * <p>The configuration parameters for the default Amazon Glue database. You use
     * this database for Apache Flink SQL queries and table API transforms that you
     * write in a Kinesis Data Analytics Studio notebook.</p>
     */
    inline void SetGlueDataCatalogConfiguration(GlueDataCatalogConfiguration&& value) { m_glueDataCatalogConfigurationHasBeenSet = true; m_glueDataCatalogConfiguration = std::move(value); }

    /**
     * <p>The configuration parameters for the default Amazon Glue database. You use
     * this database for Apache Flink SQL queries and table API transforms that you
     * write in a Kinesis Data Analytics Studio notebook.</p>
     */
    inline CatalogConfiguration& WithGlueDataCatalogConfiguration(const GlueDataCatalogConfiguration& value) { SetGlueDataCatalogConfiguration(value); return *this;}

    /**
     * <p>The configuration parameters for the default Amazon Glue database. You use
     * this database for Apache Flink SQL queries and table API transforms that you
     * write in a Kinesis Data Analytics Studio notebook.</p>
     */
    inline CatalogConfiguration& WithGlueDataCatalogConfiguration(GlueDataCatalogConfiguration&& value) { SetGlueDataCatalogConfiguration(std::move(value)); return *this;}

  private:

    GlueDataCatalogConfiguration m_glueDataCatalogConfiguration;
    bool m_glueDataCatalogConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
