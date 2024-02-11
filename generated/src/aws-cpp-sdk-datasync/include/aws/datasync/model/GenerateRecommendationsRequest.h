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
    AWS_DATASYNC_API GenerateRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateRecommendations"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline const Aws::String& GetDiscoveryJobArn() const{ return m_discoveryJobArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline bool DiscoveryJobArnHasBeenSet() const { return m_discoveryJobArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline void SetDiscoveryJobArn(const Aws::String& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline void SetDiscoveryJobArn(Aws::String&& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline void SetDiscoveryJobArn(const char* value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline GenerateRecommendationsRequest& WithDiscoveryJobArn(const Aws::String& value) { SetDiscoveryJobArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline GenerateRecommendationsRequest& WithDiscoveryJobArn(Aws::String&& value) { SetDiscoveryJobArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that collects
     * information about your on-premises storage system.</p>
     */
    inline GenerateRecommendationsRequest& WithDiscoveryJobArn(const char* value) { SetDiscoveryJobArn(value); return *this;}


    /**
     * <p>Specifies the universally unique identifiers (UUIDs) of the resources in your
     * storage system that you want recommendations on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>Specifies the universally unique identifiers (UUIDs) of the resources in your
     * storage system that you want recommendations on.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>Specifies the universally unique identifiers (UUIDs) of the resources in your
     * storage system that you want recommendations on.</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>Specifies the universally unique identifiers (UUIDs) of the resources in your
     * storage system that you want recommendations on.</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>Specifies the universally unique identifiers (UUIDs) of the resources in your
     * storage system that you want recommendations on.</p>
     */
    inline GenerateRecommendationsRequest& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>Specifies the universally unique identifiers (UUIDs) of the resources in your
     * storage system that you want recommendations on.</p>
     */
    inline GenerateRecommendationsRequest& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>Specifies the universally unique identifiers (UUIDs) of the resources in your
     * storage system that you want recommendations on.</p>
     */
    inline GenerateRecommendationsRequest& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>Specifies the universally unique identifiers (UUIDs) of the resources in your
     * storage system that you want recommendations on.</p>
     */
    inline GenerateRecommendationsRequest& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the universally unique identifiers (UUIDs) of the resources in your
     * storage system that you want recommendations on.</p>
     */
    inline GenerateRecommendationsRequest& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }


    /**
     * <p>Specifies the type of resource in your storage system that you want
     * recommendations on.</p>
     */
    inline const DiscoveryResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Specifies the type of resource in your storage system that you want
     * recommendations on.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Specifies the type of resource in your storage system that you want
     * recommendations on.</p>
     */
    inline void SetResourceType(const DiscoveryResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Specifies the type of resource in your storage system that you want
     * recommendations on.</p>
     */
    inline void SetResourceType(DiscoveryResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Specifies the type of resource in your storage system that you want
     * recommendations on.</p>
     */
    inline GenerateRecommendationsRequest& WithResourceType(const DiscoveryResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Specifies the type of resource in your storage system that you want
     * recommendations on.</p>
     */
    inline GenerateRecommendationsRequest& WithResourceType(DiscoveryResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_discoveryJobArn;
    bool m_discoveryJobArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    DiscoveryResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
