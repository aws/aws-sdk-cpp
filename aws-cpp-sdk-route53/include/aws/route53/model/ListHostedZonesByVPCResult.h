/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/HostedZoneSummary.h>
#include <utility>

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
  class ListHostedZonesByVPCResult
  {
  public:
    AWS_ROUTE53_API ListHostedZonesByVPCResult();
    AWS_ROUTE53_API ListHostedZonesByVPCResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListHostedZonesByVPCResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list that contains one <code>HostedZoneSummary</code> element for each
     * hosted zone that the specified Amazon VPC is associated with. Each
     * <code>HostedZoneSummary</code> element contains the hosted zone name and ID, and
     * information about who owns the hosted zone.</p>
     */
    inline const Aws::Vector<HostedZoneSummary>& GetHostedZoneSummaries() const{ return m_hostedZoneSummaries; }

    /**
     * <p>A list that contains one <code>HostedZoneSummary</code> element for each
     * hosted zone that the specified Amazon VPC is associated with. Each
     * <code>HostedZoneSummary</code> element contains the hosted zone name and ID, and
     * information about who owns the hosted zone.</p>
     */
    inline void SetHostedZoneSummaries(const Aws::Vector<HostedZoneSummary>& value) { m_hostedZoneSummaries = value; }

    /**
     * <p>A list that contains one <code>HostedZoneSummary</code> element for each
     * hosted zone that the specified Amazon VPC is associated with. Each
     * <code>HostedZoneSummary</code> element contains the hosted zone name and ID, and
     * information about who owns the hosted zone.</p>
     */
    inline void SetHostedZoneSummaries(Aws::Vector<HostedZoneSummary>&& value) { m_hostedZoneSummaries = std::move(value); }

    /**
     * <p>A list that contains one <code>HostedZoneSummary</code> element for each
     * hosted zone that the specified Amazon VPC is associated with. Each
     * <code>HostedZoneSummary</code> element contains the hosted zone name and ID, and
     * information about who owns the hosted zone.</p>
     */
    inline ListHostedZonesByVPCResult& WithHostedZoneSummaries(const Aws::Vector<HostedZoneSummary>& value) { SetHostedZoneSummaries(value); return *this;}

    /**
     * <p>A list that contains one <code>HostedZoneSummary</code> element for each
     * hosted zone that the specified Amazon VPC is associated with. Each
     * <code>HostedZoneSummary</code> element contains the hosted zone name and ID, and
     * information about who owns the hosted zone.</p>
     */
    inline ListHostedZonesByVPCResult& WithHostedZoneSummaries(Aws::Vector<HostedZoneSummary>&& value) { SetHostedZoneSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that contains one <code>HostedZoneSummary</code> element for each
     * hosted zone that the specified Amazon VPC is associated with. Each
     * <code>HostedZoneSummary</code> element contains the hosted zone name and ID, and
     * information about who owns the hosted zone.</p>
     */
    inline ListHostedZonesByVPCResult& AddHostedZoneSummaries(const HostedZoneSummary& value) { m_hostedZoneSummaries.push_back(value); return *this; }

    /**
     * <p>A list that contains one <code>HostedZoneSummary</code> element for each
     * hosted zone that the specified Amazon VPC is associated with. Each
     * <code>HostedZoneSummary</code> element contains the hosted zone name and ID, and
     * information about who owns the hosted zone.</p>
     */
    inline ListHostedZonesByVPCResult& AddHostedZoneSummaries(HostedZoneSummary&& value) { m_hostedZoneSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The value that you specified for <code>MaxItems</code> in the most recent
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The value that you specified for <code>MaxItems</code> in the most recent
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The value that you specified for <code>MaxItems</code> in the most recent
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = std::move(value); }

    /**
     * <p>The value that you specified for <code>MaxItems</code> in the most recent
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The value that you specified for <code>MaxItems</code> in the most recent
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline ListHostedZonesByVPCResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you specified for <code>MaxItems</code> in the most recent
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline ListHostedZonesByVPCResult& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The value that you specified for <code>MaxItems</code> in the most recent
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline ListHostedZonesByVPCResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}


    /**
     * <p>The value that you will use for <code>NextToken</code> in the next
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The value that you will use for <code>NextToken</code> in the next
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The value that you will use for <code>NextToken</code> in the next
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The value that you will use for <code>NextToken</code> in the next
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The value that you will use for <code>NextToken</code> in the next
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline ListHostedZonesByVPCResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The value that you will use for <code>NextToken</code> in the next
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline ListHostedZonesByVPCResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The value that you will use for <code>NextToken</code> in the next
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline ListHostedZonesByVPCResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<HostedZoneSummary> m_hostedZoneSummaries;

    Aws::String m_maxItems;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
