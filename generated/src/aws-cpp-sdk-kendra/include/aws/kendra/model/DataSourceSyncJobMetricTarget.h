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
    AWS_KENDRA_API DataSourceSyncJobMetricTarget() = default;
    AWS_KENDRA_API DataSourceSyncJobMetricTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DataSourceSyncJobMetricTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the data source that is running the sync job.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    DataSourceSyncJobMetricTarget& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the sync job that is running on the data source.</p> <p>If the ID
     * of a sync job is not provided and there is a sync job running, then the ID of
     * this sync job is used and metrics are generated for this sync job.</p> <p>If the
     * ID of a sync job is not provided and there is no sync job running, then no
     * metrics are generated and documents are indexed/deleted at the index level
     * without sync job metrics included.</p>
     */
    inline const Aws::String& GetDataSourceSyncJobId() const { return m_dataSourceSyncJobId; }
    inline bool DataSourceSyncJobIdHasBeenSet() const { return m_dataSourceSyncJobIdHasBeenSet; }
    template<typename DataSourceSyncJobIdT = Aws::String>
    void SetDataSourceSyncJobId(DataSourceSyncJobIdT&& value) { m_dataSourceSyncJobIdHasBeenSet = true; m_dataSourceSyncJobId = std::forward<DataSourceSyncJobIdT>(value); }
    template<typename DataSourceSyncJobIdT = Aws::String>
    DataSourceSyncJobMetricTarget& WithDataSourceSyncJobId(DataSourceSyncJobIdT&& value) { SetDataSourceSyncJobId(std::forward<DataSourceSyncJobIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_dataSourceSyncJobId;
    bool m_dataSourceSyncJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
