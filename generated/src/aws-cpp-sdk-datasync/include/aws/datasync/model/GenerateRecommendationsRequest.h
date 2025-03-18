/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/DiscoveryResourceType.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class GenerateRecommendationsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API GenerateRecommendationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateRecommendations"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline const Aws::String& GetDiscoveryJobArn() const { return m_discoveryJobArn; }
    inline bool DiscoveryJobArnHasBeenSet() const { return m_discoveryJobArnHasBeenSet; }
    template<typename DiscoveryJobArnT = Aws::String>
    void SetDiscoveryJobArn(DiscoveryJobArnT&& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = std::forward<DiscoveryJobArnT>(value); }
    template<typename DiscoveryJobArnT = Aws::String>
    GenerateRecommendationsRequest& WithDiscoveryJobArn(DiscoveryJobArnT&& value) { SetDiscoveryJobArn(std::forward<DiscoveryJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the universally unique identifiers (UUIDs) of the resources in your
     * storage system that you want recommendations on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const { return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    template<typename ResourceIdsT = Aws::Vector<Aws::String>>
    void SetResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::forward<ResourceIdsT>(value); }
    template<typename ResourceIdsT = Aws::Vector<Aws::String>>
    GenerateRecommendationsRequest& WithResourceIds(ResourceIdsT&& value) { SetResourceIds(std::forward<ResourceIdsT>(value)); return *this;}
    template<typename ResourceIdsT = Aws::String>
    GenerateRecommendationsRequest& AddResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the type of resource in your storage system that you want
     * recommendations on.</p>
     */
    inline DiscoveryResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(DiscoveryResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline GenerateRecommendationsRequest& WithResourceType(DiscoveryResourceType value) { SetResourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_discoveryJobArn;
    bool m_discoveryJobArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    DiscoveryResourceType m_resourceType{DiscoveryResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
