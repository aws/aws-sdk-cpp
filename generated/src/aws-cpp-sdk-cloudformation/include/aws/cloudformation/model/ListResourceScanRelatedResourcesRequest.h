/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ScannedResourceIdentifier.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class ListResourceScanRelatedResourcesRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListResourceScanRelatedResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceScanRelatedResources"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan.</p>
     */
    inline const Aws::String& GetResourceScanId() const{ return m_resourceScanId; }
    inline bool ResourceScanIdHasBeenSet() const { return m_resourceScanIdHasBeenSet; }
    inline void SetResourceScanId(const Aws::String& value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId = value; }
    inline void SetResourceScanId(Aws::String&& value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId = std::move(value); }
    inline void SetResourceScanId(const char* value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId.assign(value); }
    inline ListResourceScanRelatedResourcesRequest& WithResourceScanId(const Aws::String& value) { SetResourceScanId(value); return *this;}
    inline ListResourceScanRelatedResourcesRequest& WithResourceScanId(Aws::String&& value) { SetResourceScanId(std::move(value)); return *this;}
    inline ListResourceScanRelatedResourcesRequest& WithResourceScanId(const char* value) { SetResourceScanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of resources for which you want to get the related resources. Up to
     * 100 resources can be provided.</p>
     */
    inline const Aws::Vector<ScannedResourceIdentifier>& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const Aws::Vector<ScannedResourceIdentifier>& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(Aws::Vector<ScannedResourceIdentifier>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline ListResourceScanRelatedResourcesRequest& WithResources(const Aws::Vector<ScannedResourceIdentifier>& value) { SetResources(value); return *this;}
    inline ListResourceScanRelatedResourcesRequest& WithResources(Aws::Vector<ScannedResourceIdentifier>&& value) { SetResources(std::move(value)); return *this;}
    inline ListResourceScanRelatedResourcesRequest& AddResources(const ScannedResourceIdentifier& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }
    inline ListResourceScanRelatedResourcesRequest& AddResources(ScannedResourceIdentifier&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that identifies the next page of resource scan results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListResourceScanRelatedResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceScanRelatedResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceScanRelatedResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the number of available results exceeds this maximum, the response
     * includes a <code>NextToken</code> value that you can use for the
     * <code>NextToken</code> parameter to get the next set of results. By default the
     * <code>ListResourceScanRelatedResources</code> API action will return up to 100
     * results in each response. The maximum value is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourceScanRelatedResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceScanId;
    bool m_resourceScanIdHasBeenSet = false;

    Aws::Vector<ScannedResourceIdentifier> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
