/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/VPC.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response information for the request.</p>
   */
  class AWS_ROUTE53_API ListVPCAssociationAuthorizationsResult
  {
  public:
    ListVPCAssociationAuthorizationsResult();
    ListVPCAssociationAuthorizationsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListVPCAssociationAuthorizationsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The ID of the hosted zone that you can associate the listed VPCs with.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone that you can associate the listed VPCs with.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that you can associate the listed VPCs with.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that you can associate the listed VPCs with.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone that you can associate the listed VPCs with.</p>
     */
    inline ListVPCAssociationAuthorizationsResult& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that you can associate the listed VPCs with.</p>
     */
    inline ListVPCAssociationAuthorizationsResult& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that you can associate the listed VPCs with.</p>
     */
    inline ListVPCAssociationAuthorizationsResult& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>When the response includes a <code>NextToken</code> element, there are more
     * VPCs that can be associated with the specified hosted zone. To get the next page
     * of VPCs, submit another <code>ListVPCAssociationAuthorizations</code> request,
     * and include the value of the <code>NextToken</code> element from the response in
     * the <code>NextToken</code> request parameter:</p> <p>
     * <code>/2013-04-01/hostedzone/<i>hosted zone
     * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i>&amp;NextToken=<i/>
     * </code> </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the response includes a <code>NextToken</code> element, there are more
     * VPCs that can be associated with the specified hosted zone. To get the next page
     * of VPCs, submit another <code>ListVPCAssociationAuthorizations</code> request,
     * and include the value of the <code>NextToken</code> element from the response in
     * the <code>NextToken</code> request parameter:</p> <p>
     * <code>/2013-04-01/hostedzone/<i>hosted zone
     * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i>&amp;NextToken=<i/>
     * </code> </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When the response includes a <code>NextToken</code> element, there are more
     * VPCs that can be associated with the specified hosted zone. To get the next page
     * of VPCs, submit another <code>ListVPCAssociationAuthorizations</code> request,
     * and include the value of the <code>NextToken</code> element from the response in
     * the <code>NextToken</code> request parameter:</p> <p>
     * <code>/2013-04-01/hostedzone/<i>hosted zone
     * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i>&amp;NextToken=<i/>
     * </code> </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>When the response includes a <code>NextToken</code> element, there are more
     * VPCs that can be associated with the specified hosted zone. To get the next page
     * of VPCs, submit another <code>ListVPCAssociationAuthorizations</code> request,
     * and include the value of the <code>NextToken</code> element from the response in
     * the <code>NextToken</code> request parameter:</p> <p>
     * <code>/2013-04-01/hostedzone/<i>hosted zone
     * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i>&amp;NextToken=<i/>
     * </code> </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When the response includes a <code>NextToken</code> element, there are more
     * VPCs that can be associated with the specified hosted zone. To get the next page
     * of VPCs, submit another <code>ListVPCAssociationAuthorizations</code> request,
     * and include the value of the <code>NextToken</code> element from the response in
     * the <code>NextToken</code> request parameter:</p> <p>
     * <code>/2013-04-01/hostedzone/<i>hosted zone
     * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i>&amp;NextToken=<i/>
     * </code> </p>
     */
    inline ListVPCAssociationAuthorizationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the response includes a <code>NextToken</code> element, there are more
     * VPCs that can be associated with the specified hosted zone. To get the next page
     * of VPCs, submit another <code>ListVPCAssociationAuthorizations</code> request,
     * and include the value of the <code>NextToken</code> element from the response in
     * the <code>NextToken</code> request parameter:</p> <p>
     * <code>/2013-04-01/hostedzone/<i>hosted zone
     * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i>&amp;NextToken=<i/>
     * </code> </p>
     */
    inline ListVPCAssociationAuthorizationsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the response includes a <code>NextToken</code> element, there are more
     * VPCs that can be associated with the specified hosted zone. To get the next page
     * of VPCs, submit another <code>ListVPCAssociationAuthorizations</code> request,
     * and include the value of the <code>NextToken</code> element from the response in
     * the <code>NextToken</code> request parameter:</p> <p>
     * <code>/2013-04-01/hostedzone/<i>hosted zone
     * ID</i>/authorizevpcassociation?MaxItems=<i>VPCs per page</i>&amp;NextToken=<i/>
     * </code> </p>
     */
    inline ListVPCAssociationAuthorizationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The list of VPCs that are authorized to be associated with the specified
     * hosted zone.</p>
     */
    inline const Aws::Vector<VPC>& GetVPCs() const{ return m_vPCs; }

    /**
     * <p>The list of VPCs that are authorized to be associated with the specified
     * hosted zone.</p>
     */
    inline void SetVPCs(const Aws::Vector<VPC>& value) { m_vPCs = value; }

    /**
     * <p>The list of VPCs that are authorized to be associated with the specified
     * hosted zone.</p>
     */
    inline void SetVPCs(Aws::Vector<VPC>&& value) { m_vPCs = value; }

    /**
     * <p>The list of VPCs that are authorized to be associated with the specified
     * hosted zone.</p>
     */
    inline ListVPCAssociationAuthorizationsResult& WithVPCs(const Aws::Vector<VPC>& value) { SetVPCs(value); return *this;}

    /**
     * <p>The list of VPCs that are authorized to be associated with the specified
     * hosted zone.</p>
     */
    inline ListVPCAssociationAuthorizationsResult& WithVPCs(Aws::Vector<VPC>&& value) { SetVPCs(value); return *this;}

    /**
     * <p>The list of VPCs that are authorized to be associated with the specified
     * hosted zone.</p>
     */
    inline ListVPCAssociationAuthorizationsResult& AddVPCs(const VPC& value) { m_vPCs.push_back(value); return *this; }

    /**
     * <p>The list of VPCs that are authorized to be associated with the specified
     * hosted zone.</p>
     */
    inline ListVPCAssociationAuthorizationsResult& AddVPCs(VPC&& value) { m_vPCs.push_back(value); return *this; }

  private:
    Aws::String m_hostedZoneId;
    Aws::String m_nextToken;
    Aws::Vector<VPC> m_vPCs;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws