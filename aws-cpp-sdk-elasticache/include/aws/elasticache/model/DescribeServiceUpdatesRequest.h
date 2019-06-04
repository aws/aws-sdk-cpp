/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ServiceUpdateStatus.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class AWS_ELASTICACHE_API DescribeServiceUpdatesRequest : public ElastiCacheRequest
  {
  public:
    DescribeServiceUpdatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServiceUpdates"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const{ return m_serviceUpdateName; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const Aws::String& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = value; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(Aws::String&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::move(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const char* value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName.assign(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline DescribeServiceUpdatesRequest& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline DescribeServiceUpdatesRequest& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline DescribeServiceUpdatesRequest& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}


    /**
     * <p>The status of the service update</p>
     */
    inline const Aws::Vector<ServiceUpdateStatus>& GetServiceUpdateStatus() const{ return m_serviceUpdateStatus; }

    /**
     * <p>The status of the service update</p>
     */
    inline bool ServiceUpdateStatusHasBeenSet() const { return m_serviceUpdateStatusHasBeenSet; }

    /**
     * <p>The status of the service update</p>
     */
    inline void SetServiceUpdateStatus(const Aws::Vector<ServiceUpdateStatus>& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = value; }

    /**
     * <p>The status of the service update</p>
     */
    inline void SetServiceUpdateStatus(Aws::Vector<ServiceUpdateStatus>&& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = std::move(value); }

    /**
     * <p>The status of the service update</p>
     */
    inline DescribeServiceUpdatesRequest& WithServiceUpdateStatus(const Aws::Vector<ServiceUpdateStatus>& value) { SetServiceUpdateStatus(value); return *this;}

    /**
     * <p>The status of the service update</p>
     */
    inline DescribeServiceUpdatesRequest& WithServiceUpdateStatus(Aws::Vector<ServiceUpdateStatus>&& value) { SetServiceUpdateStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the service update</p>
     */
    inline DescribeServiceUpdatesRequest& AddServiceUpdateStatus(const ServiceUpdateStatus& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus.push_back(value); return *this; }

    /**
     * <p>The status of the service update</p>
     */
    inline DescribeServiceUpdatesRequest& AddServiceUpdateStatus(ServiceUpdateStatus&& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of records to include in the response</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response</p>
     */
    inline DescribeServiceUpdatesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeServiceUpdatesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeServiceUpdatesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeServiceUpdatesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet;

    Aws::Vector<ServiceUpdateStatus> m_serviceUpdateStatus;
    bool m_serviceUpdateStatusHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
