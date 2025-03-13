/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeServiceUpdatesRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DescribeServiceUpdatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServiceUpdates"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const { return m_serviceUpdateName; }
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }
    template<typename ServiceUpdateNameT = Aws::String>
    void SetServiceUpdateName(ServiceUpdateNameT&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::forward<ServiceUpdateNameT>(value); }
    template<typename ServiceUpdateNameT = Aws::String>
    DescribeServiceUpdatesRequest& WithServiceUpdateName(ServiceUpdateNameT&& value) { SetServiceUpdateName(std::forward<ServiceUpdateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service update</p>
     */
    inline const Aws::Vector<ServiceUpdateStatus>& GetServiceUpdateStatus() const { return m_serviceUpdateStatus; }
    inline bool ServiceUpdateStatusHasBeenSet() const { return m_serviceUpdateStatusHasBeenSet; }
    template<typename ServiceUpdateStatusT = Aws::Vector<ServiceUpdateStatus>>
    void SetServiceUpdateStatus(ServiceUpdateStatusT&& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = std::forward<ServiceUpdateStatusT>(value); }
    template<typename ServiceUpdateStatusT = Aws::Vector<ServiceUpdateStatus>>
    DescribeServiceUpdatesRequest& WithServiceUpdateStatus(ServiceUpdateStatusT&& value) { SetServiceUpdateStatus(std::forward<ServiceUpdateStatusT>(value)); return *this;}
    inline DescribeServiceUpdatesRequest& AddServiceUpdateStatus(ServiceUpdateStatus value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeServiceUpdatesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeServiceUpdatesRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    Aws::Vector<ServiceUpdateStatus> m_serviceUpdateStatus;
    bool m_serviceUpdateStatusHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
