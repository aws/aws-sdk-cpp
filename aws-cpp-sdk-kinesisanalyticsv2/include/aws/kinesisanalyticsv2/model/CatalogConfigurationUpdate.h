/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/GlueDataCatalogConfigurationUpdate.h>
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
   * <p>Updates to the configuration parameters for the default Amazon Glue database.
   * You use this database for SQL queries that you write in a Kinesis Data Analytics
   * Studio notebook.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CatalogConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class CatalogConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API CatalogConfigurationUpdate();
    AWS_KINESISANALYTICSV2_API CatalogConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CatalogConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Updates to the configuration parameters for the default Amazon Glue database.
     * You use this database for SQL queries that you write in a Kinesis Data Analytics
     * Studio notebook.</p>
     */
    inline const GlueDataCatalogConfigurationUpdate& GetGlueDataCatalogConfigurationUpdate() const{ return m_glueDataCatalogConfigurationUpdate; }

    /**
     * <p>Updates to the configuration parameters for the default Amazon Glue database.
     * You use this database for SQL queries that you write in a Kinesis Data Analytics
     * Studio notebook.</p>
     */
    inline bool GlueDataCatalogConfigurationUpdateHasBeenSet() const { return m_glueDataCatalogConfigurationUpdateHasBeenSet; }

    /**
     * <p>Updates to the configuration parameters for the default Amazon Glue database.
     * You use this database for SQL queries that you write in a Kinesis Data Analytics
     * Studio notebook.</p>
     */
    inline void SetGlueDataCatalogConfigurationUpdate(const GlueDataCatalogConfigurationUpdate& value) { m_glueDataCatalogConfigurationUpdateHasBeenSet = true; m_glueDataCatalogConfigurationUpdate = value; }

    /**
     * <p>Updates to the configuration parameters for the default Amazon Glue database.
     * You use this database for SQL queries that you write in a Kinesis Data Analytics
     * Studio notebook.</p>
     */
    inline void SetGlueDataCatalogConfigurationUpdate(GlueDataCatalogConfigurationUpdate&& value) { m_glueDataCatalogConfigurationUpdateHasBeenSet = true; m_glueDataCatalogConfigurationUpdate = std::move(value); }

    /**
     * <p>Updates to the configuration parameters for the default Amazon Glue database.
     * You use this database for SQL queries that you write in a Kinesis Data Analytics
     * Studio notebook.</p>
     */
    inline CatalogConfigurationUpdate& WithGlueDataCatalogConfigurationUpdate(const GlueDataCatalogConfigurationUpdate& value) { SetGlueDataCatalogConfigurationUpdate(value); return *this;}

    /**
     * <p>Updates to the configuration parameters for the default Amazon Glue database.
     * You use this database for SQL queries that you write in a Kinesis Data Analytics
     * Studio notebook.</p>
     */
    inline CatalogConfigurationUpdate& WithGlueDataCatalogConfigurationUpdate(GlueDataCatalogConfigurationUpdate&& value) { SetGlueDataCatalogConfigurationUpdate(std::move(value)); return *this;}

  private:

    GlueDataCatalogConfigurationUpdate m_glueDataCatalogConfigurationUpdate;
    bool m_glueDataCatalogConfigurationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
