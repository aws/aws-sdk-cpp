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
#include <aws/route53/model/RRType.h>
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
   * <p>A request for the resource record sets that are associated with a specified
   * hosted zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListResourceRecordSetsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListResourceRecordSetsRequest : public Route53Request
  {
  public:
    ListResourceRecordSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceRecordSets"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to list.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to list.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to list.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to list.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to list.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to list.</p>
     */
    inline ListResourceRecordSetsRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to list.</p>
     */
    inline ListResourceRecordSetsRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to list.</p>
     */
    inline ListResourceRecordSetsRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>The first name in the lexicographic ordering of resource record sets that you
     * want to list.</p>
     */
    inline const Aws::String& GetStartRecordName() const{ return m_startRecordName; }

    /**
     * <p>The first name in the lexicographic ordering of resource record sets that you
     * want to list.</p>
     */
    inline bool StartRecordNameHasBeenSet() const { return m_startRecordNameHasBeenSet; }

    /**
     * <p>The first name in the lexicographic ordering of resource record sets that you
     * want to list.</p>
     */
    inline void SetStartRecordName(const Aws::String& value) { m_startRecordNameHasBeenSet = true; m_startRecordName = value; }

    /**
     * <p>The first name in the lexicographic ordering of resource record sets that you
     * want to list.</p>
     */
    inline void SetStartRecordName(Aws::String&& value) { m_startRecordNameHasBeenSet = true; m_startRecordName = std::move(value); }

    /**
     * <p>The first name in the lexicographic ordering of resource record sets that you
     * want to list.</p>
     */
    inline void SetStartRecordName(const char* value) { m_startRecordNameHasBeenSet = true; m_startRecordName.assign(value); }

    /**
     * <p>The first name in the lexicographic ordering of resource record sets that you
     * want to list.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordName(const Aws::String& value) { SetStartRecordName(value); return *this;}

    /**
     * <p>The first name in the lexicographic ordering of resource record sets that you
     * want to list.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordName(Aws::String&& value) { SetStartRecordName(std::move(value)); return *this;}

    /**
     * <p>The first name in the lexicographic ordering of resource record sets that you
     * want to list.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordName(const char* value) { SetStartRecordName(value); return *this;}


    /**
     * <p>The type of resource record set to begin the record listing from.</p>
     * <p>Valid values for basic resource record sets: <code>A</code> |
     * <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> | <code>MX</code> |
     * <code>NAPTR</code> | <code>NS</code> | <code>PTR</code> | <code>SOA</code> |
     * <code>SPF</code> | <code>SRV</code> | <code>TXT</code> </p> <p>Values for
     * weighted, latency, geolocation, and failover resource record sets:
     * <code>A</code> | <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> |
     * <code>MX</code> | <code>NAPTR</code> | <code>PTR</code> | <code>SPF</code> |
     * <code>SRV</code> | <code>TXT</code> </p> <p>Values for alias resource record
     * sets: </p> <ul> <li> <p> <b>API Gateway custom regional API or edge-optimized
     * API</b>: A</p> </li> <li> <p> <b>CloudFront distribution</b>: A or AAAA</p>
     * </li> <li> <p> <b>Elastic Beanstalk environment that has a regionalized
     * subdomain</b>: A</p> </li> <li> <p> <b>Elastic Load Balancing load balancer</b>:
     * A | AAAA</p> </li> <li> <p> <b>Amazon S3 bucket</b>: A</p> </li> <li> <p>
     * <b>Amazon VPC interface VPC endpoint</b>: A</p> </li> <li> <p> <b>Another
     * resource record set in this hosted zone:</b> The type of the resource record set
     * that the alias references.</p> </li> </ul> <p>Constraint: Specifying
     * <code>type</code> without specifying <code>name</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline const RRType& GetStartRecordType() const{ return m_startRecordType; }

    /**
     * <p>The type of resource record set to begin the record listing from.</p>
     * <p>Valid values for basic resource record sets: <code>A</code> |
     * <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> | <code>MX</code> |
     * <code>NAPTR</code> | <code>NS</code> | <code>PTR</code> | <code>SOA</code> |
     * <code>SPF</code> | <code>SRV</code> | <code>TXT</code> </p> <p>Values for
     * weighted, latency, geolocation, and failover resource record sets:
     * <code>A</code> | <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> |
     * <code>MX</code> | <code>NAPTR</code> | <code>PTR</code> | <code>SPF</code> |
     * <code>SRV</code> | <code>TXT</code> </p> <p>Values for alias resource record
     * sets: </p> <ul> <li> <p> <b>API Gateway custom regional API or edge-optimized
     * API</b>: A</p> </li> <li> <p> <b>CloudFront distribution</b>: A or AAAA</p>
     * </li> <li> <p> <b>Elastic Beanstalk environment that has a regionalized
     * subdomain</b>: A</p> </li> <li> <p> <b>Elastic Load Balancing load balancer</b>:
     * A | AAAA</p> </li> <li> <p> <b>Amazon S3 bucket</b>: A</p> </li> <li> <p>
     * <b>Amazon VPC interface VPC endpoint</b>: A</p> </li> <li> <p> <b>Another
     * resource record set in this hosted zone:</b> The type of the resource record set
     * that the alias references.</p> </li> </ul> <p>Constraint: Specifying
     * <code>type</code> without specifying <code>name</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline bool StartRecordTypeHasBeenSet() const { return m_startRecordTypeHasBeenSet; }

    /**
     * <p>The type of resource record set to begin the record listing from.</p>
     * <p>Valid values for basic resource record sets: <code>A</code> |
     * <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> | <code>MX</code> |
     * <code>NAPTR</code> | <code>NS</code> | <code>PTR</code> | <code>SOA</code> |
     * <code>SPF</code> | <code>SRV</code> | <code>TXT</code> </p> <p>Values for
     * weighted, latency, geolocation, and failover resource record sets:
     * <code>A</code> | <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> |
     * <code>MX</code> | <code>NAPTR</code> | <code>PTR</code> | <code>SPF</code> |
     * <code>SRV</code> | <code>TXT</code> </p> <p>Values for alias resource record
     * sets: </p> <ul> <li> <p> <b>API Gateway custom regional API or edge-optimized
     * API</b>: A</p> </li> <li> <p> <b>CloudFront distribution</b>: A or AAAA</p>
     * </li> <li> <p> <b>Elastic Beanstalk environment that has a regionalized
     * subdomain</b>: A</p> </li> <li> <p> <b>Elastic Load Balancing load balancer</b>:
     * A | AAAA</p> </li> <li> <p> <b>Amazon S3 bucket</b>: A</p> </li> <li> <p>
     * <b>Amazon VPC interface VPC endpoint</b>: A</p> </li> <li> <p> <b>Another
     * resource record set in this hosted zone:</b> The type of the resource record set
     * that the alias references.</p> </li> </ul> <p>Constraint: Specifying
     * <code>type</code> without specifying <code>name</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline void SetStartRecordType(const RRType& value) { m_startRecordTypeHasBeenSet = true; m_startRecordType = value; }

    /**
     * <p>The type of resource record set to begin the record listing from.</p>
     * <p>Valid values for basic resource record sets: <code>A</code> |
     * <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> | <code>MX</code> |
     * <code>NAPTR</code> | <code>NS</code> | <code>PTR</code> | <code>SOA</code> |
     * <code>SPF</code> | <code>SRV</code> | <code>TXT</code> </p> <p>Values for
     * weighted, latency, geolocation, and failover resource record sets:
     * <code>A</code> | <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> |
     * <code>MX</code> | <code>NAPTR</code> | <code>PTR</code> | <code>SPF</code> |
     * <code>SRV</code> | <code>TXT</code> </p> <p>Values for alias resource record
     * sets: </p> <ul> <li> <p> <b>API Gateway custom regional API or edge-optimized
     * API</b>: A</p> </li> <li> <p> <b>CloudFront distribution</b>: A or AAAA</p>
     * </li> <li> <p> <b>Elastic Beanstalk environment that has a regionalized
     * subdomain</b>: A</p> </li> <li> <p> <b>Elastic Load Balancing load balancer</b>:
     * A | AAAA</p> </li> <li> <p> <b>Amazon S3 bucket</b>: A</p> </li> <li> <p>
     * <b>Amazon VPC interface VPC endpoint</b>: A</p> </li> <li> <p> <b>Another
     * resource record set in this hosted zone:</b> The type of the resource record set
     * that the alias references.</p> </li> </ul> <p>Constraint: Specifying
     * <code>type</code> without specifying <code>name</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline void SetStartRecordType(RRType&& value) { m_startRecordTypeHasBeenSet = true; m_startRecordType = std::move(value); }

    /**
     * <p>The type of resource record set to begin the record listing from.</p>
     * <p>Valid values for basic resource record sets: <code>A</code> |
     * <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> | <code>MX</code> |
     * <code>NAPTR</code> | <code>NS</code> | <code>PTR</code> | <code>SOA</code> |
     * <code>SPF</code> | <code>SRV</code> | <code>TXT</code> </p> <p>Values for
     * weighted, latency, geolocation, and failover resource record sets:
     * <code>A</code> | <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> |
     * <code>MX</code> | <code>NAPTR</code> | <code>PTR</code> | <code>SPF</code> |
     * <code>SRV</code> | <code>TXT</code> </p> <p>Values for alias resource record
     * sets: </p> <ul> <li> <p> <b>API Gateway custom regional API or edge-optimized
     * API</b>: A</p> </li> <li> <p> <b>CloudFront distribution</b>: A or AAAA</p>
     * </li> <li> <p> <b>Elastic Beanstalk environment that has a regionalized
     * subdomain</b>: A</p> </li> <li> <p> <b>Elastic Load Balancing load balancer</b>:
     * A | AAAA</p> </li> <li> <p> <b>Amazon S3 bucket</b>: A</p> </li> <li> <p>
     * <b>Amazon VPC interface VPC endpoint</b>: A</p> </li> <li> <p> <b>Another
     * resource record set in this hosted zone:</b> The type of the resource record set
     * that the alias references.</p> </li> </ul> <p>Constraint: Specifying
     * <code>type</code> without specifying <code>name</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordType(const RRType& value) { SetStartRecordType(value); return *this;}

    /**
     * <p>The type of resource record set to begin the record listing from.</p>
     * <p>Valid values for basic resource record sets: <code>A</code> |
     * <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> | <code>MX</code> |
     * <code>NAPTR</code> | <code>NS</code> | <code>PTR</code> | <code>SOA</code> |
     * <code>SPF</code> | <code>SRV</code> | <code>TXT</code> </p> <p>Values for
     * weighted, latency, geolocation, and failover resource record sets:
     * <code>A</code> | <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> |
     * <code>MX</code> | <code>NAPTR</code> | <code>PTR</code> | <code>SPF</code> |
     * <code>SRV</code> | <code>TXT</code> </p> <p>Values for alias resource record
     * sets: </p> <ul> <li> <p> <b>API Gateway custom regional API or edge-optimized
     * API</b>: A</p> </li> <li> <p> <b>CloudFront distribution</b>: A or AAAA</p>
     * </li> <li> <p> <b>Elastic Beanstalk environment that has a regionalized
     * subdomain</b>: A</p> </li> <li> <p> <b>Elastic Load Balancing load balancer</b>:
     * A | AAAA</p> </li> <li> <p> <b>Amazon S3 bucket</b>: A</p> </li> <li> <p>
     * <b>Amazon VPC interface VPC endpoint</b>: A</p> </li> <li> <p> <b>Another
     * resource record set in this hosted zone:</b> The type of the resource record set
     * that the alias references.</p> </li> </ul> <p>Constraint: Specifying
     * <code>type</code> without specifying <code>name</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordType(RRType&& value) { SetStartRecordType(std::move(value)); return *this;}


    /**
     * <p> <i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of <code>NextRecordIdentifier</code>
     * from the previous response to get the next resource record set that has the
     * current DNS name and type.</p>
     */
    inline const Aws::String& GetStartRecordIdentifier() const{ return m_startRecordIdentifier; }

    /**
     * <p> <i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of <code>NextRecordIdentifier</code>
     * from the previous response to get the next resource record set that has the
     * current DNS name and type.</p>
     */
    inline bool StartRecordIdentifierHasBeenSet() const { return m_startRecordIdentifierHasBeenSet; }

    /**
     * <p> <i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of <code>NextRecordIdentifier</code>
     * from the previous response to get the next resource record set that has the
     * current DNS name and type.</p>
     */
    inline void SetStartRecordIdentifier(const Aws::String& value) { m_startRecordIdentifierHasBeenSet = true; m_startRecordIdentifier = value; }

    /**
     * <p> <i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of <code>NextRecordIdentifier</code>
     * from the previous response to get the next resource record set that has the
     * current DNS name and type.</p>
     */
    inline void SetStartRecordIdentifier(Aws::String&& value) { m_startRecordIdentifierHasBeenSet = true; m_startRecordIdentifier = std::move(value); }

    /**
     * <p> <i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of <code>NextRecordIdentifier</code>
     * from the previous response to get the next resource record set that has the
     * current DNS name and type.</p>
     */
    inline void SetStartRecordIdentifier(const char* value) { m_startRecordIdentifierHasBeenSet = true; m_startRecordIdentifier.assign(value); }

    /**
     * <p> <i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of <code>NextRecordIdentifier</code>
     * from the previous response to get the next resource record set that has the
     * current DNS name and type.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordIdentifier(const Aws::String& value) { SetStartRecordIdentifier(value); return *this;}

    /**
     * <p> <i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of <code>NextRecordIdentifier</code>
     * from the previous response to get the next resource record set that has the
     * current DNS name and type.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordIdentifier(Aws::String&& value) { SetStartRecordIdentifier(std::move(value)); return *this;}

    /**
     * <p> <i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of <code>NextRecordIdentifier</code>
     * from the previous response to get the next resource record set that has the
     * current DNS name and type.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordIdentifier(const char* value) { SetStartRecordIdentifier(value); return *this;}


    /**
     * <p>(Optional) The maximum number of resource records sets to include in the
     * response body for this request. If the response includes more than
     * <code>maxitems</code> resource record sets, the value of the
     * <code>IsTruncated</code> element in the response is <code>true</code>, and the
     * values of the <code>NextRecordName</code> and <code>NextRecordType</code>
     * elements in the response identify the first resource record set in the next
     * group of <code>maxitems</code> resource record sets.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>(Optional) The maximum number of resource records sets to include in the
     * response body for this request. If the response includes more than
     * <code>maxitems</code> resource record sets, the value of the
     * <code>IsTruncated</code> element in the response is <code>true</code>, and the
     * values of the <code>NextRecordName</code> and <code>NextRecordType</code>
     * elements in the response identify the first resource record set in the next
     * group of <code>maxitems</code> resource record sets.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>(Optional) The maximum number of resource records sets to include in the
     * response body for this request. If the response includes more than
     * <code>maxitems</code> resource record sets, the value of the
     * <code>IsTruncated</code> element in the response is <code>true</code>, and the
     * values of the <code>NextRecordName</code> and <code>NextRecordType</code>
     * elements in the response identify the first resource record set in the next
     * group of <code>maxitems</code> resource record sets.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) The maximum number of resource records sets to include in the
     * response body for this request. If the response includes more than
     * <code>maxitems</code> resource record sets, the value of the
     * <code>IsTruncated</code> element in the response is <code>true</code>, and the
     * values of the <code>NextRecordName</code> and <code>NextRecordType</code>
     * elements in the response identify the first resource record set in the next
     * group of <code>maxitems</code> resource record sets.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>(Optional) The maximum number of resource records sets to include in the
     * response body for this request. If the response includes more than
     * <code>maxitems</code> resource record sets, the value of the
     * <code>IsTruncated</code> element in the response is <code>true</code>, and the
     * values of the <code>NextRecordName</code> and <code>NextRecordType</code>
     * elements in the response identify the first resource record set in the next
     * group of <code>maxitems</code> resource record sets.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>(Optional) The maximum number of resource records sets to include in the
     * response body for this request. If the response includes more than
     * <code>maxitems</code> resource record sets, the value of the
     * <code>IsTruncated</code> element in the response is <code>true</code>, and the
     * values of the <code>NextRecordName</code> and <code>NextRecordType</code>
     * elements in the response identify the first resource record set in the next
     * group of <code>maxitems</code> resource record sets.</p>
     */
    inline ListResourceRecordSetsRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>(Optional) The maximum number of resource records sets to include in the
     * response body for this request. If the response includes more than
     * <code>maxitems</code> resource record sets, the value of the
     * <code>IsTruncated</code> element in the response is <code>true</code>, and the
     * values of the <code>NextRecordName</code> and <code>NextRecordType</code>
     * elements in the response identify the first resource record set in the next
     * group of <code>maxitems</code> resource record sets.</p>
     */
    inline ListResourceRecordSetsRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>(Optional) The maximum number of resource records sets to include in the
     * response body for this request. If the response includes more than
     * <code>maxitems</code> resource record sets, the value of the
     * <code>IsTruncated</code> element in the response is <code>true</code>, and the
     * values of the <code>NextRecordName</code> and <code>NextRecordType</code>
     * elements in the response identify the first resource record set in the next
     * group of <code>maxitems</code> resource record sets.</p>
     */
    inline ListResourceRecordSetsRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;

    Aws::String m_startRecordName;
    bool m_startRecordNameHasBeenSet;

    RRType m_startRecordType;
    bool m_startRecordTypeHasBeenSet;

    Aws::String m_startRecordIdentifier;
    bool m_startRecordIdentifierHasBeenSet;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
