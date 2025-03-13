/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class ListResourceScanResourcesRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListResourceScanResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceScanResources"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan.</p>
     */
    inline const Aws::String& GetResourceScanId() const { return m_resourceScanId; }
    inline bool ResourceScanIdHasBeenSet() const { return m_resourceScanIdHasBeenSet; }
    template<typename ResourceScanIdT = Aws::String>
    void SetResourceScanId(ResourceScanIdT&& value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId = std::forward<ResourceScanIdT>(value); }
    template<typename ResourceScanIdT = Aws::String>
    ListResourceScanResourcesRequest& WithResourceScanId(ResourceScanIdT&& value) { SetResourceScanId(std::forward<ResourceScanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the returned resources will have the specified resource
     * identifier (or one of them in the case where the resource has multiple
     * identifiers).</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    ListResourceScanResourcesRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the returned resources will be of any of the resource types
     * with the specified prefix.</p>
     */
    inline const Aws::String& GetResourceTypePrefix() const { return m_resourceTypePrefix; }
    inline bool ResourceTypePrefixHasBeenSet() const { return m_resourceTypePrefixHasBeenSet; }
    template<typename ResourceTypePrefixT = Aws::String>
    void SetResourceTypePrefix(ResourceTypePrefixT&& value) { m_resourceTypePrefixHasBeenSet = true; m_resourceTypePrefix = std::forward<ResourceTypePrefixT>(value); }
    template<typename ResourceTypePrefixT = Aws::String>
    ListResourceScanResourcesRequest& WithResourceTypePrefix(ResourceTypePrefixT&& value) { SetResourceTypePrefix(std::forward<ResourceTypePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the returned resources will have a matching tag key.</p>
     */
    inline const Aws::String& GetTagKey() const { return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    template<typename TagKeyT = Aws::String>
    void SetTagKey(TagKeyT&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::forward<TagKeyT>(value); }
    template<typename TagKeyT = Aws::String>
    ListResourceScanResourcesRequest& WithTagKey(TagKeyT&& value) { SetTagKey(std::forward<TagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the returned resources will have a matching tag value.</p>
     */
    inline const Aws::String& GetTagValue() const { return m_tagValue; }
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }
    template<typename TagValueT = Aws::String>
    void SetTagValue(TagValueT&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::forward<TagValueT>(value); }
    template<typename TagValueT = Aws::String>
    ListResourceScanResourcesRequest& WithTagValue(TagValueT&& value) { SetTagValue(std::forward<TagValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that identifies the next page of resource scan results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceScanResourcesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the number of available results exceeds this maximum, the response
     * includes a <code>NextToken</code> value that you can use for the
     * <code>NextToken</code> parameter to get the next set of results. By default the
     * <code>ListResourceScanResources</code> API action will return at most 100
     * results in each response. The maximum value is 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourceScanResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceScanId;
    bool m_resourceScanIdHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_resourceTypePrefix;
    bool m_resourceTypePrefixHasBeenSet = false;

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
