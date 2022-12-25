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
   * <p>The configuration of the Glue Data Catalog that you use for Apache Flink SQL
   * queries and table API transforms that you write in an application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/GlueDataCatalogConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class GlueDataCatalogConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API GlueDataCatalogConfigurationDescription();
    AWS_KINESISANALYTICSV2_API GlueDataCatalogConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API GlueDataCatalogConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline const Aws::String& GetDatabaseARN() const{ return m_databaseARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline bool DatabaseARNHasBeenSet() const { return m_databaseARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline void SetDatabaseARN(const Aws::String& value) { m_databaseARNHasBeenSet = true; m_databaseARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline void SetDatabaseARN(Aws::String&& value) { m_databaseARNHasBeenSet = true; m_databaseARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline void SetDatabaseARN(const char* value) { m_databaseARNHasBeenSet = true; m_databaseARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline GlueDataCatalogConfigurationDescription& WithDatabaseARN(const Aws::String& value) { SetDatabaseARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline GlueDataCatalogConfigurationDescription& WithDatabaseARN(Aws::String&& value) { SetDatabaseARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline GlueDataCatalogConfigurationDescription& WithDatabaseARN(const char* value) { SetDatabaseARN(value); return *this;}

  private:

    Aws::String m_databaseARN;
    bool m_databaseARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
