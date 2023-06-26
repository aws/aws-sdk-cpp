/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Maps a particular data source sync job to a particular data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DataSourceSyncJobMetricTarget">AWS
   * API Reference</a></p>
   */
  class DataSourceSyncJobMetricTarget
  {
  public:
    AWS_KENDRA_API DataSourceSyncJobMetricTarget();
    AWS_KENDRA_API DataSourceSyncJobMetricTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DataSourceSyncJobMetricTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the data source that is running the sync job.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The ID of the data source that is running the sync job.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The ID of the data source that is running the sync job.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The ID of the data source that is running the sync job.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The ID of the data source that is running the sync job.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The ID of the data source that is running the sync job.</p>
     */
    inline DataSourceSyncJobMetricTarget& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The ID of the data source that is running the sync job.</p>
     */
    inline DataSourceSyncJobMetricTarget& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data source that is running the sync job.</p>
     */
    inline DataSourceSyncJobMetricTarget& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The ID of the sync job that is running on the data source.</p> <p>If the ID
     * of a sync job is not provided and there is a sync job running, then the ID of
     * this sync job is used and metrics are generated for this sync job.</p> <p>If the
     * ID of a sync job is not provided and there is no sync job running, then no
     * metrics are generated and documents are indexed/deleted at the index level
     * without sync job metrics included.</p>
     */
    inline const Aws::String& GetDataSourceSyncJobId() const{ return m_dataSourceSyncJobId; }

    /**
     * <p>The ID of the sync job that is running on the data source.</p> <p>If the ID
     * of a sync job is not provided and there is a sync job running, then the ID of
     * this sync job is used and metrics are generated for this sync job.</p> <p>If the
     * ID of a sync job is not provided and there is no sync job running, then no
     * metrics are generated and documents are indexed/deleted at the index level
     * without sync job metrics included.</p>
     */
    inline bool DataSourceSyncJobIdHasBeenSet() const { return m_dataSourceSyncJobIdHasBeenSet; }

    /**
     * <p>The ID of the sync job that is running on the data source.</p> <p>If the ID
     * of a sync job is not provided and there is a sync job running, then the ID of
     * this sync job is used and metrics are generated for this sync job.</p> <p>If the
     * ID of a sync job is not provided and there is no sync job running, then no
     * metrics are generated and documents are indexed/deleted at the index level
     * without sync job metrics included.</p>
     */
    inline void SetDataSourceSyncJobId(const Aws::String& value) { m_dataSourceSyncJobIdHasBeenSet = true; m_dataSourceSyncJobId = value; }

    /**
     * <p>The ID of the sync job that is running on the data source.</p> <p>If the ID
     * of a sync job is not provided and there is a sync job running, then the ID of
     * this sync job is used and metrics are generated for this sync job.</p> <p>If the
     * ID of a sync job is not provided and there is no sync job running, then no
     * metrics are generated and documents are indexed/deleted at the index level
     * without sync job metrics included.</p>
     */
    inline void SetDataSourceSyncJobId(Aws::String&& value) { m_dataSourceSyncJobIdHasBeenSet = true; m_dataSourceSyncJobId = std::move(value); }

    /**
     * <p>The ID of the sync job that is running on the data source.</p> <p>If the ID
     * of a sync job is not provided and there is a sync job running, then the ID of
     * this sync job is used and metrics are generated for this sync job.</p> <p>If the
     * ID of a sync job is not provided and there is no sync job running, then no
     * metrics are generated and documents are indexed/deleted at the index level
     * without sync job metrics included.</p>
     */
    inline void SetDataSourceSyncJobId(const char* value) { m_dataSourceSyncJobIdHasBeenSet = true; m_dataSourceSyncJobId.assign(value); }

    /**
     * <p>The ID of the sync job that is running on the data source.</p> <p>If the ID
     * of a sync job is not provided and there is a sync job running, then the ID of
     * this sync job is used and metrics are generated for this sync job.</p> <p>If the
     * ID of a sync job is not provided and there is no sync job running, then no
     * metrics are generated and documents are indexed/deleted at the index level
     * without sync job metrics included.</p>
     */
    inline DataSourceSyncJobMetricTarget& WithDataSourceSyncJobId(const Aws::String& value) { SetDataSourceSyncJobId(value); return *this;}

    /**
     * <p>The ID of the sync job that is running on the data source.</p> <p>If the ID
     * of a sync job is not provided and there is a sync job running, then the ID of
     * this sync job is used and metrics are generated for this sync job.</p> <p>If the
     * ID of a sync job is not provided and there is no sync job running, then no
     * metrics are generated and documents are indexed/deleted at the index level
     * without sync job metrics included.</p>
     */
    inline DataSourceSyncJobMetricTarget& WithDataSourceSyncJobId(Aws::String&& value) { SetDataSourceSyncJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the sync job that is running on the data source.</p> <p>If the ID
     * of a sync job is not provided and there is a sync job running, then the ID of
     * this sync job is used and metrics are generated for this sync job.</p> <p>If the
     * ID of a sync job is not provided and there is no sync job running, then no
     * metrics are generated and documents are indexed/deleted at the index level
     * without sync job metrics included.</p>
     */
    inline DataSourceSyncJobMetricTarget& WithDataSourceSyncJobId(const char* value) { SetDataSourceSyncJobId(value); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_dataSourceSyncJobId;
    bool m_dataSourceSyncJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
