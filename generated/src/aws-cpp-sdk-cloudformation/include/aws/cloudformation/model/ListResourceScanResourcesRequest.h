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
    AWS_CLOUDFORMATION_API ListResourceScanResourcesRequest();

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
    inline const Aws::String& GetResourceScanId() const{ return m_resourceScanId; }
    inline bool ResourceScanIdHasBeenSet() const { return m_resourceScanIdHasBeenSet; }
    inline void SetResourceScanId(const Aws::String& value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId = value; }
    inline void SetResourceScanId(Aws::String&& value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId = std::move(value); }
    inline void SetResourceScanId(const char* value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId.assign(value); }
    inline ListResourceScanResourcesRequest& WithResourceScanId(const Aws::String& value) { SetResourceScanId(value); return *this;}
    inline ListResourceScanResourcesRequest& WithResourceScanId(Aws::String&& value) { SetResourceScanId(std::move(value)); return *this;}
    inline ListResourceScanResourcesRequest& WithResourceScanId(const char* value) { SetResourceScanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the returned resources will have the specified resource
     * identifier (or one of them in the case where the resource has multiple
     * identifiers).</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline ListResourceScanResourcesRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline ListResourceScanResourcesRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline ListResourceScanResourcesRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the returned resources will be of any of the resource types
     * with the specified prefix.</p>
     */
    inline const Aws::String& GetResourceTypePrefix() const{ return m_resourceTypePrefix; }
    inline bool ResourceTypePrefixHasBeenSet() const { return m_resourceTypePrefixHasBeenSet; }
    inline void SetResourceTypePrefix(const Aws::String& value) { m_resourceTypePrefixHasBeenSet = true; m_resourceTypePrefix = value; }
    inline void SetResourceTypePrefix(Aws::String&& value) { m_resourceTypePrefixHasBeenSet = true; m_resourceTypePrefix = std::move(value); }
    inline void SetResourceTypePrefix(const char* value) { m_resourceTypePrefixHasBeenSet = true; m_resourceTypePrefix.assign(value); }
    inline ListResourceScanResourcesRequest& WithResourceTypePrefix(const Aws::String& value) { SetResourceTypePrefix(value); return *this;}
    inline ListResourceScanResourcesRequest& WithResourceTypePrefix(Aws::String&& value) { SetResourceTypePrefix(std::move(value)); return *this;}
    inline ListResourceScanResourcesRequest& WithResourceTypePrefix(const char* value) { SetResourceTypePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the returned resources will have a matching tag key.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }
    inline ListResourceScanResourcesRequest& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}
    inline ListResourceScanResourcesRequest& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}
    inline ListResourceScanResourcesRequest& WithTagKey(const char* value) { SetTagKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the returned resources will have a matching tag value.</p>
     */
    inline const Aws::String& GetTagValue() const{ return m_tagValue; }
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }
    inline void SetTagValue(const Aws::String& value) { m_tagValueHasBeenSet = true; m_tagValue = value; }
    inline void SetTagValue(Aws::String&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::move(value); }
    inline void SetTagValue(const char* value) { m_tagValueHasBeenSet = true; m_tagValue.assign(value); }
    inline ListResourceScanResourcesRequest& WithTagValue(const Aws::String& value) { SetTagValue(value); return *this;}
    inline ListResourceScanResourcesRequest& WithTagValue(Aws::String&& value) { SetTagValue(std::move(value)); return *this;}
    inline ListResourceScanResourcesRequest& WithTagValue(const char* value) { SetTagValue(value); return *this;}
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
    inline ListResourceScanResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceScanResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceScanResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the number of available results exceeds this maximum, the response
     * includes a <code>NextToken</code> value that you can use for the
     * <code>NextToken</code> parameter to get the next set of results. By default the
     * <code>ListResourceScanResources</code> API action will return at most 100
     * results in each response. The maximum value is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
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

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
