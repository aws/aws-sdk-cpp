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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about that can be associated with
   * your hosted zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListVPCAssociationAuthorizationsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListVPCAssociationAuthorizationsRequest : public Route53Request
  {
  public:
    ListVPCAssociationAuthorizationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVPCAssociationAuthorizations"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the hosted zone for which you want a list of VPCs that can be
     * associated with the hosted zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone for which you want a list of VPCs that can be
     * associated with the hosted zone.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>The ID of the hosted zone for which you want a list of VPCs that can be
     * associated with the hosted zone.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone for which you want a list of VPCs that can be
     * associated with the hosted zone.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>The ID of the hosted zone for which you want a list of VPCs that can be
     * associated with the hosted zone.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone for which you want a list of VPCs that can be
     * associated with the hosted zone.</p>
     */
    inline ListVPCAssociationAuthorizationsRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone for which you want a list of VPCs that can be
     * associated with the hosted zone.</p>
     */
    inline ListVPCAssociationAuthorizationsRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the hosted zone for which you want a list of VPCs that can be
     * associated with the hosted zone.</p>
     */
    inline ListVPCAssociationAuthorizationsRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p> <i>Optional</i>: If a response includes a <code>NextToken</code> element,
     * there are more VPCs that can be associated with the specified hosted zone. To
     * get the next page of results, submit another request, and include the value of
     * <code>NextToken</code> from the response in the <code>nexttoken</code> parameter
     * in another <code>ListVPCAssociationAuthorizations</code> request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> <i>Optional</i>: If a response includes a <code>NextToken</code> element,
     * there are more VPCs that can be associated with the specified hosted zone. To
     * get the next page of results, submit another request, and include the value of
     * <code>NextToken</code> from the response in the <code>nexttoken</code> parameter
     * in another <code>ListVPCAssociationAuthorizations</code> request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> <i>Optional</i>: If a response includes a <code>NextToken</code> element,
     * there are more VPCs that can be associated with the specified hosted zone. To
     * get the next page of results, submit another request, and include the value of
     * <code>NextToken</code> from the response in the <code>nexttoken</code> parameter
     * in another <code>ListVPCAssociationAuthorizations</code> request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> <i>Optional</i>: If a response includes a <code>NextToken</code> element,
     * there are more VPCs that can be associated with the specified hosted zone. To
     * get the next page of results, submit another request, and include the value of
     * <code>NextToken</code> from the response in the <code>nexttoken</code> parameter
     * in another <code>ListVPCAssociationAuthorizations</code> request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> <i>Optional</i>: If a response includes a <code>NextToken</code> element,
     * there are more VPCs that can be associated with the specified hosted zone. To
     * get the next page of results, submit another request, and include the value of
     * <code>NextToken</code> from the response in the <code>nexttoken</code> parameter
     * in another <code>ListVPCAssociationAuthorizations</code> request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> <i>Optional</i>: If a response includes a <code>NextToken</code> element,
     * there are more VPCs that can be associated with the specified hosted zone. To
     * get the next page of results, submit another request, and include the value of
     * <code>NextToken</code> from the response in the <code>nexttoken</code> parameter
     * in another <code>ListVPCAssociationAuthorizations</code> request.</p>
     */
    inline ListVPCAssociationAuthorizationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> <i>Optional</i>: If a response includes a <code>NextToken</code> element,
     * there are more VPCs that can be associated with the specified hosted zone. To
     * get the next page of results, submit another request, and include the value of
     * <code>NextToken</code> from the response in the <code>nexttoken</code> parameter
     * in another <code>ListVPCAssociationAuthorizations</code> request.</p>
     */
    inline ListVPCAssociationAuthorizationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> <i>Optional</i>: If a response includes a <code>NextToken</code> element,
     * there are more VPCs that can be associated with the specified hosted zone. To
     * get the next page of results, submit another request, and include the value of
     * <code>NextToken</code> from the response in the <code>nexttoken</code> parameter
     * in another <code>ListVPCAssociationAuthorizations</code> request.</p>
     */
    inline ListVPCAssociationAuthorizationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> <i>Optional</i>: An integer that specifies the maximum number of VPCs that
     * you want Amazon Route 53 to return. If you don't specify a value for
     * <code>MaxResults</code>, Route 53 returns up to 50 VPCs per page.</p>
     */
    inline const Aws::String& GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> <i>Optional</i>: An integer that specifies the maximum number of VPCs that
     * you want Amazon Route 53 to return. If you don't specify a value for
     * <code>MaxResults</code>, Route 53 returns up to 50 VPCs per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> <i>Optional</i>: An integer that specifies the maximum number of VPCs that
     * you want Amazon Route 53 to return. If you don't specify a value for
     * <code>MaxResults</code>, Route 53 returns up to 50 VPCs per page.</p>
     */
    inline void SetMaxResults(const Aws::String& value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> <i>Optional</i>: An integer that specifies the maximum number of VPCs that
     * you want Amazon Route 53 to return. If you don't specify a value for
     * <code>MaxResults</code>, Route 53 returns up to 50 VPCs per page.</p>
     */
    inline void SetMaxResults(Aws::String&& value) { m_maxResultsHasBeenSet = true; m_maxResults = std::move(value); }

    /**
     * <p> <i>Optional</i>: An integer that specifies the maximum number of VPCs that
     * you want Amazon Route 53 to return. If you don't specify a value for
     * <code>MaxResults</code>, Route 53 returns up to 50 VPCs per page.</p>
     */
    inline void SetMaxResults(const char* value) { m_maxResultsHasBeenSet = true; m_maxResults.assign(value); }

    /**
     * <p> <i>Optional</i>: An integer that specifies the maximum number of VPCs that
     * you want Amazon Route 53 to return. If you don't specify a value for
     * <code>MaxResults</code>, Route 53 returns up to 50 VPCs per page.</p>
     */
    inline ListVPCAssociationAuthorizationsRequest& WithMaxResults(const Aws::String& value) { SetMaxResults(value); return *this;}

    /**
     * <p> <i>Optional</i>: An integer that specifies the maximum number of VPCs that
     * you want Amazon Route 53 to return. If you don't specify a value for
     * <code>MaxResults</code>, Route 53 returns up to 50 VPCs per page.</p>
     */
    inline ListVPCAssociationAuthorizationsRequest& WithMaxResults(Aws::String&& value) { SetMaxResults(std::move(value)); return *this;}

    /**
     * <p> <i>Optional</i>: An integer that specifies the maximum number of VPCs that
     * you want Amazon Route 53 to return. If you don't specify a value for
     * <code>MaxResults</code>, Route 53 returns up to 50 VPCs per page.</p>
     */
    inline ListVPCAssociationAuthorizationsRequest& WithMaxResults(const char* value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
