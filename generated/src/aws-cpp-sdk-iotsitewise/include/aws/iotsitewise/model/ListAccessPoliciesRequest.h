/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/model/IdentityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class ListAccessPoliciesRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListAccessPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccessPolicies"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The type of identity (IAM Identity Center user, IAM Identity Center group, or
     * IAM user). This parameter is required if you specify
     * <code>identityId</code>.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>The type of identity (IAM Identity Center user, IAM Identity Center group, or
     * IAM user). This parameter is required if you specify
     * <code>identityId</code>.</p>
     */
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }

    /**
     * <p>The type of identity (IAM Identity Center user, IAM Identity Center group, or
     * IAM user). This parameter is required if you specify
     * <code>identityId</code>.</p>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>The type of identity (IAM Identity Center user, IAM Identity Center group, or
     * IAM user). This parameter is required if you specify
     * <code>identityId</code>.</p>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }

    /**
     * <p>The type of identity (IAM Identity Center user, IAM Identity Center group, or
     * IAM user). This parameter is required if you specify
     * <code>identityId</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>The type of identity (IAM Identity Center user, IAM Identity Center group, or
     * IAM user). This parameter is required if you specify
     * <code>identityId</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>The ID of the identity. This parameter is required if you specify
     * <code>USER</code> or <code>GROUP</code> for <code>identityType</code>.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>The ID of the identity. This parameter is required if you specify
     * <code>USER</code> or <code>GROUP</code> for <code>identityType</code>.</p>
     */
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }

    /**
     * <p>The ID of the identity. This parameter is required if you specify
     * <code>USER</code> or <code>GROUP</code> for <code>identityType</code>.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>The ID of the identity. This parameter is required if you specify
     * <code>USER</code> or <code>GROUP</code> for <code>identityType</code>.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }

    /**
     * <p>The ID of the identity. This parameter is required if you specify
     * <code>USER</code> or <code>GROUP</code> for <code>identityType</code>.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * <p>The ID of the identity. This parameter is required if you specify
     * <code>USER</code> or <code>GROUP</code> for <code>identityType</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>The ID of the identity. This parameter is required if you specify
     * <code>USER</code> or <code>GROUP</code> for <code>identityType</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the identity. This parameter is required if you specify
     * <code>USER</code> or <code>GROUP</code> for <code>identityType</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}


    /**
     * <p>The type of resource (portal or project). This parameter is required if you
     * specify <code>resourceId</code>.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource (portal or project). This parameter is required if you
     * specify <code>resourceId</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource (portal or project). This parameter is required if you
     * specify <code>resourceId</code>.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource (portal or project). This parameter is required if you
     * specify <code>resourceId</code>.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource (portal or project). This parameter is required if you
     * specify <code>resourceId</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource (portal or project). This parameter is required if you
     * specify <code>resourceId</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource. This parameter is required if you specify
     * <code>resourceType</code>.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource. This parameter is required if you specify
     * <code>resourceType</code>.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource. This parameter is required if you specify
     * <code>resourceType</code>.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource. This parameter is required if you specify
     * <code>resourceType</code>.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource. This parameter is required if you specify
     * <code>resourceType</code>.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource. This parameter is required if you specify
     * <code>resourceType</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource. This parameter is required if you specify
     * <code>resourceType</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource. This parameter is required if you specify
     * <code>resourceType</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The ARN of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>. This parameter is required if you specify
     * <code>IAM</code> for <code>identityType</code>.</p>
     */
    inline const Aws::String& GetIamArn() const{ return m_iamArn; }

    /**
     * <p>The ARN of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>. This parameter is required if you specify
     * <code>IAM</code> for <code>identityType</code>.</p>
     */
    inline bool IamArnHasBeenSet() const { return m_iamArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>. This parameter is required if you specify
     * <code>IAM</code> for <code>identityType</code>.</p>
     */
    inline void SetIamArn(const Aws::String& value) { m_iamArnHasBeenSet = true; m_iamArn = value; }

    /**
     * <p>The ARN of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>. This parameter is required if you specify
     * <code>IAM</code> for <code>identityType</code>.</p>
     */
    inline void SetIamArn(Aws::String&& value) { m_iamArnHasBeenSet = true; m_iamArn = std::move(value); }

    /**
     * <p>The ARN of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>. This parameter is required if you specify
     * <code>IAM</code> for <code>identityType</code>.</p>
     */
    inline void SetIamArn(const char* value) { m_iamArnHasBeenSet = true; m_iamArn.assign(value); }

    /**
     * <p>The ARN of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>. This parameter is required if you specify
     * <code>IAM</code> for <code>identityType</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithIamArn(const Aws::String& value) { SetIamArn(value); return *this;}

    /**
     * <p>The ARN of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>. This parameter is required if you specify
     * <code>IAM</code> for <code>identityType</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithIamArn(Aws::String&& value) { SetIamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>. This parameter is required if you specify
     * <code>IAM</code> for <code>identityType</code>.</p>
     */
    inline ListAccessPoliciesRequest& WithIamArn(const char* value) { SetIamArn(value); return *this;}


    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAccessPoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAccessPoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAccessPoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline ListAccessPoliciesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet = false;

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_iamArn;
    bool m_iamArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
