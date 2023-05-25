/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Updates to the configuration of the Glue Data Catalog that you use for SQL
   * queries that you write in a Kinesis Data Analytics Studio
   * notebook.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/GlueDataCatalogConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class GlueDataCatalogConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API GlueDataCatalogConfigurationUpdate();
    AWS_KINESISANALYTICSV2_API GlueDataCatalogConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API GlueDataCatalogConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The updated Amazon Resource Name (ARN) of the database.</p>
     */
    inline const Aws::String& GetDatabaseARNUpdate() const{ return m_databaseARNUpdate; }

    /**
     * <p>The updated Amazon Resource Name (ARN) of the database.</p>
     */
    inline bool DatabaseARNUpdateHasBeenSet() const { return m_databaseARNUpdateHasBeenSet; }

    /**
     * <p>The updated Amazon Resource Name (ARN) of the database.</p>
     */
    inline void SetDatabaseARNUpdate(const Aws::String& value) { m_databaseARNUpdateHasBeenSet = true; m_databaseARNUpdate = value; }

    /**
     * <p>The updated Amazon Resource Name (ARN) of the database.</p>
     */
    inline void SetDatabaseARNUpdate(Aws::String&& value) { m_databaseARNUpdateHasBeenSet = true; m_databaseARNUpdate = std::move(value); }

    /**
     * <p>The updated Amazon Resource Name (ARN) of the database.</p>
     */
    inline void SetDatabaseARNUpdate(const char* value) { m_databaseARNUpdateHasBeenSet = true; m_databaseARNUpdate.assign(value); }

    /**
     * <p>The updated Amazon Resource Name (ARN) of the database.</p>
     */
    inline GlueDataCatalogConfigurationUpdate& WithDatabaseARNUpdate(const Aws::String& value) { SetDatabaseARNUpdate(value); return *this;}

    /**
     * <p>The updated Amazon Resource Name (ARN) of the database.</p>
     */
    inline GlueDataCatalogConfigurationUpdate& WithDatabaseARNUpdate(Aws::String&& value) { SetDatabaseARNUpdate(std::move(value)); return *this;}

    /**
     * <p>The updated Amazon Resource Name (ARN) of the database.</p>
     */
    inline GlueDataCatalogConfigurationUpdate& WithDatabaseARNUpdate(const char* value) { SetDatabaseARNUpdate(value); return *this;}

  private:

    Aws::String m_databaseARNUpdate;
    bool m_databaseARNUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
