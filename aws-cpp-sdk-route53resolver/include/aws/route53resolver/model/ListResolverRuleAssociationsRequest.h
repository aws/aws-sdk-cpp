/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/Filter.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RESOLVER_API ListResolverRuleAssociationsRequest : public Route53ResolverRequest
  {
  public:
    ListResolverRuleAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResolverRuleAssociations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of rule associations that you want to return in the
     * response to a <code>ListResolverRuleAssociations</code> request. If you don't
     * specify a value for <code>MaxResults</code>, Resolver returns up to 100 rule
     * associations. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of rule associations that you want to return in the
     * response to a <code>ListResolverRuleAssociations</code> request. If you don't
     * specify a value for <code>MaxResults</code>, Resolver returns up to 100 rule
     * associations. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of rule associations that you want to return in the
     * response to a <code>ListResolverRuleAssociations</code> request. If you don't
     * specify a value for <code>MaxResults</code>, Resolver returns up to 100 rule
     * associations. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of rule associations that you want to return in the
     * response to a <code>ListResolverRuleAssociations</code> request. If you don't
     * specify a value for <code>MaxResults</code>, Resolver returns up to 100 rule
     * associations. </p>
     */
    inline ListResolverRuleAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>For the first <code>ListResolverRuleAssociation</code> request, omit this
     * value.</p> <p>If you have more than <code>MaxResults</code> rule associations,
     * you can submit another <code>ListResolverRuleAssociation</code> request to get
     * the next group of rule associations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For the first <code>ListResolverRuleAssociation</code> request, omit this
     * value.</p> <p>If you have more than <code>MaxResults</code> rule associations,
     * you can submit another <code>ListResolverRuleAssociation</code> request to get
     * the next group of rule associations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For the first <code>ListResolverRuleAssociation</code> request, omit this
     * value.</p> <p>If you have more than <code>MaxResults</code> rule associations,
     * you can submit another <code>ListResolverRuleAssociation</code> request to get
     * the next group of rule associations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For the first <code>ListResolverRuleAssociation</code> request, omit this
     * value.</p> <p>If you have more than <code>MaxResults</code> rule associations,
     * you can submit another <code>ListResolverRuleAssociation</code> request to get
     * the next group of rule associations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For the first <code>ListResolverRuleAssociation</code> request, omit this
     * value.</p> <p>If you have more than <code>MaxResults</code> rule associations,
     * you can submit another <code>ListResolverRuleAssociation</code> request to get
     * the next group of rule associations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For the first <code>ListResolverRuleAssociation</code> request, omit this
     * value.</p> <p>If you have more than <code>MaxResults</code> rule associations,
     * you can submit another <code>ListResolverRuleAssociation</code> request to get
     * the next group of rule associations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverRuleAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For the first <code>ListResolverRuleAssociation</code> request, omit this
     * value.</p> <p>If you have more than <code>MaxResults</code> rule associations,
     * you can submit another <code>ListResolverRuleAssociation</code> request to get
     * the next group of rule associations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverRuleAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For the first <code>ListResolverRuleAssociation</code> request, omit this
     * value.</p> <p>If you have more than <code>MaxResults</code> rule associations,
     * you can submit another <code>ListResolverRuleAssociation</code> request to get
     * the next group of rule associations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverRuleAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An optional specification to return a subset of resolver rules, such as
     * resolver rules that are associated with the same VPC ID.</p> <note> <p>If you
     * submit a second or subsequent <code>ListResolverRuleAssociations</code> request
     * and specify the <code>NextToken</code> parameter, you must use the same values
     * for <code>Filters</code>, if any, as in the previous request.</p> </note>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An optional specification to return a subset of resolver rules, such as
     * resolver rules that are associated with the same VPC ID.</p> <note> <p>If you
     * submit a second or subsequent <code>ListResolverRuleAssociations</code> request
     * and specify the <code>NextToken</code> parameter, you must use the same values
     * for <code>Filters</code>, if any, as in the previous request.</p> </note>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An optional specification to return a subset of resolver rules, such as
     * resolver rules that are associated with the same VPC ID.</p> <note> <p>If you
     * submit a second or subsequent <code>ListResolverRuleAssociations</code> request
     * and specify the <code>NextToken</code> parameter, you must use the same values
     * for <code>Filters</code>, if any, as in the previous request.</p> </note>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An optional specification to return a subset of resolver rules, such as
     * resolver rules that are associated with the same VPC ID.</p> <note> <p>If you
     * submit a second or subsequent <code>ListResolverRuleAssociations</code> request
     * and specify the <code>NextToken</code> parameter, you must use the same values
     * for <code>Filters</code>, if any, as in the previous request.</p> </note>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An optional specification to return a subset of resolver rules, such as
     * resolver rules that are associated with the same VPC ID.</p> <note> <p>If you
     * submit a second or subsequent <code>ListResolverRuleAssociations</code> request
     * and specify the <code>NextToken</code> parameter, you must use the same values
     * for <code>Filters</code>, if any, as in the previous request.</p> </note>
     */
    inline ListResolverRuleAssociationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An optional specification to return a subset of resolver rules, such as
     * resolver rules that are associated with the same VPC ID.</p> <note> <p>If you
     * submit a second or subsequent <code>ListResolverRuleAssociations</code> request
     * and specify the <code>NextToken</code> parameter, you must use the same values
     * for <code>Filters</code>, if any, as in the previous request.</p> </note>
     */
    inline ListResolverRuleAssociationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An optional specification to return a subset of resolver rules, such as
     * resolver rules that are associated with the same VPC ID.</p> <note> <p>If you
     * submit a second or subsequent <code>ListResolverRuleAssociations</code> request
     * and specify the <code>NextToken</code> parameter, you must use the same values
     * for <code>Filters</code>, if any, as in the previous request.</p> </note>
     */
    inline ListResolverRuleAssociationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An optional specification to return a subset of resolver rules, such as
     * resolver rules that are associated with the same VPC ID.</p> <note> <p>If you
     * submit a second or subsequent <code>ListResolverRuleAssociations</code> request
     * and specify the <code>NextToken</code> parameter, you must use the same values
     * for <code>Filters</code>, if any, as in the previous request.</p> </note>
     */
    inline ListResolverRuleAssociationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
