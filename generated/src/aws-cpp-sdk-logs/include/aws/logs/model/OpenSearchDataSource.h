/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/OpenSearchResourceStatus.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains information about the OpenSearch Service data source
   * used for this integration. This data source was created as part of the
   * integration setup. An OpenSearch Service data source defines the source and
   * destination for OpenSearch Service queries. It includes the role required to
   * execute queries and write to collections.</p> <p>For more information about
   * OpenSearch Service data sources , see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/direct-query-s3-creating.html">Creating
   * OpenSearch Service data source integrations with Amazon S3.</a> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/OpenSearchDataSource">AWS
   * API Reference</a></p>
   */
  class OpenSearchDataSource
  {
  public:
    AWS_CLOUDWATCHLOGS_API OpenSearchDataSource();
    AWS_CLOUDWATCHLOGS_API OpenSearchDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API OpenSearchDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the OpenSearch Service data source.</p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }
    inline OpenSearchDataSource& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}
    inline OpenSearchDataSource& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}
    inline OpenSearchDataSource& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the status of this OpenSearch
     * Service resource.</p>
     */
    inline const OpenSearchResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OpenSearchResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OpenSearchResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline OpenSearchDataSource& WithStatus(const OpenSearchResourceStatus& value) { SetStatus(value); return *this;}
    inline OpenSearchDataSource& WithStatus(OpenSearchResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet = false;

    OpenSearchResourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
