﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceRegionScopeFilter.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class AWS_RAM_API ListPendingInvitationResourcesRequest : public RAMRequest
  {
  public:
    ListPendingInvitationResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPendingInvitationResources"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation. You can use
     * <a>GetResourceShareInvitations</a> to find the ARN of the invitation.</p>
     */
    inline const Aws::String& GetResourceShareInvitationArn() const{ return m_resourceShareInvitationArn; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation. You can use
     * <a>GetResourceShareInvitations</a> to find the ARN of the invitation.</p>
     */
    inline bool ResourceShareInvitationArnHasBeenSet() const { return m_resourceShareInvitationArnHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation. You can use
     * <a>GetResourceShareInvitations</a> to find the ARN of the invitation.</p>
     */
    inline void SetResourceShareInvitationArn(const Aws::String& value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation. You can use
     * <a>GetResourceShareInvitations</a> to find the ARN of the invitation.</p>
     */
    inline void SetResourceShareInvitationArn(Aws::String&& value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation. You can use
     * <a>GetResourceShareInvitations</a> to find the ARN of the invitation.</p>
     */
    inline void SetResourceShareInvitationArn(const char* value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn.assign(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation. You can use
     * <a>GetResourceShareInvitations</a> to find the ARN of the invitation.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithResourceShareInvitationArn(const Aws::String& value) { SetResourceShareInvitationArn(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation. You can use
     * <a>GetResourceShareInvitations</a> to find the ARN of the invitation.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithResourceShareInvitationArn(Aws::String&& value) { SetResourceShareInvitationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation. You can use
     * <a>GetResourceShareInvitations</a> to find the ARN of the invitation.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithResourceShareInvitationArn(const char* value) { SetResourceShareInvitationArn(value); return *this;}


    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline const ResourceRegionScopeFilter& GetResourceRegionScope() const{ return m_resourceRegionScope; }

    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline bool ResourceRegionScopeHasBeenSet() const { return m_resourceRegionScopeHasBeenSet; }

    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline void SetResourceRegionScope(const ResourceRegionScopeFilter& value) { m_resourceRegionScopeHasBeenSet = true; m_resourceRegionScope = value; }

    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline void SetResourceRegionScope(ResourceRegionScopeFilter&& value) { m_resourceRegionScopeHasBeenSet = true; m_resourceRegionScope = std::move(value); }

    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithResourceRegionScope(const ResourceRegionScopeFilter& value) { SetResourceRegionScope(value); return *this;}

    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline ListPendingInvitationResourcesRequest& WithResourceRegionScope(ResourceRegionScopeFilter&& value) { SetResourceRegionScope(std::move(value)); return *this;}

  private:

    Aws::String m_resourceShareInvitationArn;
    bool m_resourceShareInvitationArnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    ResourceRegionScopeFilter m_resourceRegionScope;
    bool m_resourceRegionScopeHasBeenSet;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
