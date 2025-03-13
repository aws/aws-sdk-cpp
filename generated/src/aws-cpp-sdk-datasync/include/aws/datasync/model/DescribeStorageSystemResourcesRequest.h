/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/DiscoveryResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/datasync/model/DiscoveryResourceFilter.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class DescribeStorageSystemResourcesRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API DescribeStorageSystemResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStorageSystemResources"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that's
     * collecting data from your on-premises storage system.</p>
     */
    inline const Aws::String& GetDiscoveryJobArn() const { return m_discoveryJobArn; }
    inline bool DiscoveryJobArnHasBeenSet() const { return m_discoveryJobArnHasBeenSet; }
    template<typename DiscoveryJobArnT = Aws::String>
    void SetDiscoveryJobArn(DiscoveryJobArnT&& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = std::forward<DiscoveryJobArnT>(value); }
    template<typename DiscoveryJobArnT = Aws::String>
    DescribeStorageSystemResourcesRequest& WithDiscoveryJobArn(DiscoveryJobArnT&& value) { SetDiscoveryJobArn(std::forward<DiscoveryJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies what kind of storage system resources that you want information
     * about.</p>
     */
    inline DiscoveryResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(DiscoveryResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline DescribeStorageSystemResourcesRequest& WithResourceType(DiscoveryResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the universally unique identifiers (UUIDs) of the storage system
     * resources that you want information about. You can't use this parameter in
     * combination with the <code>Filter</code> parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const { return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    template<typename ResourceIdsT = Aws::Vector<Aws::String>>
    void SetResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::forward<ResourceIdsT>(value); }
    template<typename ResourceIdsT = Aws::Vector<Aws::String>>
    DescribeStorageSystemResourcesRequest& WithResourceIds(ResourceIdsT&& value) { SetResourceIds(std::forward<ResourceIdsT>(value)); return *this;}
    template<typename ResourceIdsT = Aws::String>
    DescribeStorageSystemResourcesRequest& AddResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the storage system resources that you want returned. For example,
     * this might be volumes associated with a specific storage virtual machine
     * (SVM).</p>
     */
    inline const Aws::Map<DiscoveryResourceFilter, Aws::Vector<Aws::String>>& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Map<DiscoveryResourceFilter, Aws::Vector<Aws::String>>>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Map<DiscoveryResourceFilter, Aws::Vector<Aws::String>>>
    DescribeStorageSystemResourcesRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    inline DescribeStorageSystemResourcesRequest& AddFilter(DiscoveryResourceFilter key, Aws::Vector<Aws::String> value) {
      m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of storage system resources that you want to
     * list in a response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeStorageSystemResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeStorageSystemResourcesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_discoveryJobArn;
    bool m_discoveryJobArnHasBeenSet = false;

    DiscoveryResourceType m_resourceType{DiscoveryResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    Aws::Map<DiscoveryResourceFilter, Aws::Vector<Aws::String>> m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
