/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/ram/model/ResourceOwner.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListResourcesRequest : public RAMRequest
  {
  public:
    AWS_RAM_API ListResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResources"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies that you want to list only the resource shares that match the
     * following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> – resources that your
     * account shares with other accounts</p> </li> <li> <p> <b>
     * <code>OTHER-ACCOUNTS</code> </b> – resources that other accounts share with your
     * account</p> </li> </ul>
     */
    inline const ResourceOwner& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p>Specifies that you want to list only the resource shares that match the
     * following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> – resources that your
     * account shares with other accounts</p> </li> <li> <p> <b>
     * <code>OTHER-ACCOUNTS</code> </b> – resources that other accounts share with your
     * account</p> </li> </ul>
     */
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }

    /**
     * <p>Specifies that you want to list only the resource shares that match the
     * following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> – resources that your
     * account shares with other accounts</p> </li> <li> <p> <b>
     * <code>OTHER-ACCOUNTS</code> </b> – resources that other accounts share with your
     * account</p> </li> </ul>
     */
    inline void SetResourceOwner(const ResourceOwner& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p>Specifies that you want to list only the resource shares that match the
     * following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> – resources that your
     * account shares with other accounts</p> </li> <li> <p> <b>
     * <code>OTHER-ACCOUNTS</code> </b> – resources that other accounts share with your
     * account</p> </li> </ul>
     */
    inline void SetResourceOwner(ResourceOwner&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }

    /**
     * <p>Specifies that you want to list only the resource shares that match the
     * following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> – resources that your
     * account shares with other accounts</p> </li> <li> <p> <b>
     * <code>OTHER-ACCOUNTS</code> </b> – resources that other accounts share with your
     * account</p> </li> </ul>
     */
    inline ListResourcesRequest& WithResourceOwner(const ResourceOwner& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>Specifies that you want to list only the resource shares that match the
     * following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> – resources that your
     * account shares with other accounts</p> </li> <li> <p> <b>
     * <code>OTHER-ACCOUNTS</code> </b> – resources that other accounts share with your
     * account</p> </li> </ul>
     */
    inline ListResourcesRequest& WithResourceOwner(ResourceOwner&& value) { SetResourceOwner(std::move(value)); return *this;}


    /**
     * <p>Specifies that you want to list only the resource shares that are associated
     * with the specified principal.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>Specifies that you want to list only the resource shares that are associated
     * with the specified principal.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>Specifies that you want to list only the resource shares that are associated
     * with the specified principal.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>Specifies that you want to list only the resource shares that are associated
     * with the specified principal.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>Specifies that you want to list only the resource shares that are associated
     * with the specified principal.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>Specifies that you want to list only the resource shares that are associated
     * with the specified principal.</p>
     */
    inline ListResourcesRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>Specifies that you want to list only the resource shares that are associated
     * with the specified principal.</p>
     */
    inline ListResourcesRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to list only the resource shares that are associated
     * with the specified principal.</p>
     */
    inline ListResourcesRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources of the specified resource type.</p> <p>For valid values, query the
     * <a>ListResourceTypes</a> operation.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources of the specified resource type.</p> <p>For valid values, query the
     * <a>ListResourceTypes</a> operation.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources of the specified resource type.</p> <p>For valid values, query the
     * <a>ListResourceTypes</a> operation.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources of the specified resource type.</p> <p>For valid values, query the
     * <a>ListResourceTypes</a> operation.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources of the specified resource type.</p> <p>For valid values, query the
     * <a>ListResourceTypes</a> operation.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources of the specified resource type.</p> <p>For valid values, query the
     * <a>ListResourceTypes</a> operation.</p>
     */
    inline ListResourcesRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources of the specified resource type.</p> <p>For valid values, query the
     * <a>ListResourceTypes</a> operation.</p>
     */
    inline ListResourcesRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources of the specified resource type.</p> <p>For valid values, query the
     * <a>ListResourceTypes</a> operation.</p>
     */
    inline ListResourcesRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListResourcesRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListResourcesRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListResourcesRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListResourcesRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies that you want to list only the resource shares that include
     * resources with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListResourcesRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>Specifies that you want to list only resources in the resource shares
     * identified by the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceShareArns() const{ return m_resourceShareArns; }

    /**
     * <p>Specifies that you want to list only resources in the resource shares
     * identified by the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline bool ResourceShareArnsHasBeenSet() const { return m_resourceShareArnsHasBeenSet; }

    /**
     * <p>Specifies that you want to list only resources in the resource shares
     * identified by the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline void SetResourceShareArns(const Aws::Vector<Aws::String>& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = value; }

    /**
     * <p>Specifies that you want to list only resources in the resource shares
     * identified by the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline void SetResourceShareArns(Aws::Vector<Aws::String>&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = std::move(value); }

    /**
     * <p>Specifies that you want to list only resources in the resource shares
     * identified by the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListResourcesRequest& WithResourceShareArns(const Aws::Vector<Aws::String>& value) { SetResourceShareArns(value); return *this;}

    /**
     * <p>Specifies that you want to list only resources in the resource shares
     * identified by the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListResourcesRequest& WithResourceShareArns(Aws::Vector<Aws::String>&& value) { SetResourceShareArns(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to list only resources in the resource shares
     * identified by the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListResourcesRequest& AddResourceShareArns(const Aws::String& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(value); return *this; }

    /**
     * <p>Specifies that you want to list only resources in the resource shares
     * identified by the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListResourcesRequest& AddResourceShareArns(Aws::String&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies that you want to list only resources in the resource shares
     * identified by the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListResourcesRequest& AddResourceShareArns(const char* value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(value); return *this; }


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
    inline ListResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListResourcesRequest& WithResourceRegionScope(const ResourceRegionScopeFilter& value) { SetResourceRegionScope(value); return *this;}

    /**
     * <p>Specifies that you want the results to include only resources that have the
     * specified scope.</p> <ul> <li> <p> <code>ALL</code> – the results include both
     * global and regional resources or resource types.</p> </li> <li> <p>
     * <code>GLOBAL</code> – the results include only global resources or resource
     * types.</p> </li> <li> <p> <code>REGIONAL</code> – the results include only
     * regional resources or resource types.</p> </li> </ul> <p>The default value is
     * <code>ALL</code>.</p>
     */
    inline ListResourcesRequest& WithResourceRegionScope(ResourceRegionScopeFilter&& value) { SetResourceRegionScope(std::move(value)); return *this;}

  private:

    ResourceOwner m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceShareArns;
    bool m_resourceShareArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ResourceRegionScopeFilter m_resourceRegionScope;
    bool m_resourceRegionScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
