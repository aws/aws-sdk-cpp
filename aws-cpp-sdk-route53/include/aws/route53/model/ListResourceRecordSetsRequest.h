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
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>

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
   * <p>The input for a ListResourceRecordSets request.</p>
   */
  class AWS_ROUTE53_API ListResourceRecordSetsRequest : public Route53Request
  {
  public:
    ListResourceRecordSetsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to get.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to get.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to get.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to get.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to get.</p>
     */
    inline ListResourceRecordSetsRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to get.</p>
     */
    inline ListResourceRecordSetsRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to get.</p>
     */
    inline ListResourceRecordSetsRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListResourceRecordSets</code> request to list.</p>
     */
    inline const Aws::String& GetStartRecordName() const{ return m_startRecordName; }

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListResourceRecordSets</code> request to list.</p>
     */
    inline void SetStartRecordName(const Aws::String& value) { m_startRecordNameHasBeenSet = true; m_startRecordName = value; }

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListResourceRecordSets</code> request to list.</p>
     */
    inline void SetStartRecordName(Aws::String&& value) { m_startRecordNameHasBeenSet = true; m_startRecordName = value; }

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListResourceRecordSets</code> request to list.</p>
     */
    inline void SetStartRecordName(const char* value) { m_startRecordNameHasBeenSet = true; m_startRecordName.assign(value); }

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListResourceRecordSets</code> request to list.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordName(const Aws::String& value) { SetStartRecordName(value); return *this;}

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListResourceRecordSets</code> request to list.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordName(Aws::String&& value) { SetStartRecordName(value); return *this;}

    /**
     * <p>The first name in the lexicographic ordering of domain names that you want
     * the <code>ListResourceRecordSets</code> request to list.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordName(const char* value) { SetStartRecordName(value); return *this;}

    /**
     * <p>The DNS type at which to begin the listing of resource record sets. </p>
     * <p>Valid values: <code>A</code> | <code>AAAA</code> | <code>CNAME</code> |
     * <code>MX</code> | <code>NS</code> | <code>PTR</code> | <code>SOA</code> |
     * <code>SPF</code> | <code>SRV</code> | <code>TXT</code></p> <p>Values for
     * Weighted Resource Record Sets: <code>A</code> | <code>AAAA</code> |
     * <code>CNAME</code> | <code>TXT</code></p> <p>Values for Regional Resource Record
     * Sets: <code>A</code> | <code>AAAA</code> | <code>CNAME</code> |
     * <code>TXT</code></p> <p>Values for Alias Resource Record Sets: <code>A</code> |
     * <code>AAAA</code></p> <p>Constraint: Specifying <code>type</code> without
     * specifying <code>name</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline const RRType& GetStartRecordType() const{ return m_startRecordType; }

    /**
     * <p>The DNS type at which to begin the listing of resource record sets. </p>
     * <p>Valid values: <code>A</code> | <code>AAAA</code> | <code>CNAME</code> |
     * <code>MX</code> | <code>NS</code> | <code>PTR</code> | <code>SOA</code> |
     * <code>SPF</code> | <code>SRV</code> | <code>TXT</code></p> <p>Values for
     * Weighted Resource Record Sets: <code>A</code> | <code>AAAA</code> |
     * <code>CNAME</code> | <code>TXT</code></p> <p>Values for Regional Resource Record
     * Sets: <code>A</code> | <code>AAAA</code> | <code>CNAME</code> |
     * <code>TXT</code></p> <p>Values for Alias Resource Record Sets: <code>A</code> |
     * <code>AAAA</code></p> <p>Constraint: Specifying <code>type</code> without
     * specifying <code>name</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline void SetStartRecordType(const RRType& value) { m_startRecordTypeHasBeenSet = true; m_startRecordType = value; }

    /**
     * <p>The DNS type at which to begin the listing of resource record sets. </p>
     * <p>Valid values: <code>A</code> | <code>AAAA</code> | <code>CNAME</code> |
     * <code>MX</code> | <code>NS</code> | <code>PTR</code> | <code>SOA</code> |
     * <code>SPF</code> | <code>SRV</code> | <code>TXT</code></p> <p>Values for
     * Weighted Resource Record Sets: <code>A</code> | <code>AAAA</code> |
     * <code>CNAME</code> | <code>TXT</code></p> <p>Values for Regional Resource Record
     * Sets: <code>A</code> | <code>AAAA</code> | <code>CNAME</code> |
     * <code>TXT</code></p> <p>Values for Alias Resource Record Sets: <code>A</code> |
     * <code>AAAA</code></p> <p>Constraint: Specifying <code>type</code> without
     * specifying <code>name</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline void SetStartRecordType(RRType&& value) { m_startRecordTypeHasBeenSet = true; m_startRecordType = value; }

    /**
     * <p>The DNS type at which to begin the listing of resource record sets. </p>
     * <p>Valid values: <code>A</code> | <code>AAAA</code> | <code>CNAME</code> |
     * <code>MX</code> | <code>NS</code> | <code>PTR</code> | <code>SOA</code> |
     * <code>SPF</code> | <code>SRV</code> | <code>TXT</code></p> <p>Values for
     * Weighted Resource Record Sets: <code>A</code> | <code>AAAA</code> |
     * <code>CNAME</code> | <code>TXT</code></p> <p>Values for Regional Resource Record
     * Sets: <code>A</code> | <code>AAAA</code> | <code>CNAME</code> |
     * <code>TXT</code></p> <p>Values for Alias Resource Record Sets: <code>A</code> |
     * <code>AAAA</code></p> <p>Constraint: Specifying <code>type</code> without
     * specifying <code>name</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordType(const RRType& value) { SetStartRecordType(value); return *this;}

    /**
     * <p>The DNS type at which to begin the listing of resource record sets. </p>
     * <p>Valid values: <code>A</code> | <code>AAAA</code> | <code>CNAME</code> |
     * <code>MX</code> | <code>NS</code> | <code>PTR</code> | <code>SOA</code> |
     * <code>SPF</code> | <code>SRV</code> | <code>TXT</code></p> <p>Values for
     * Weighted Resource Record Sets: <code>A</code> | <code>AAAA</code> |
     * <code>CNAME</code> | <code>TXT</code></p> <p>Values for Regional Resource Record
     * Sets: <code>A</code> | <code>AAAA</code> | <code>CNAME</code> |
     * <code>TXT</code></p> <p>Values for Alias Resource Record Sets: <code>A</code> |
     * <code>AAAA</code></p> <p>Constraint: Specifying <code>type</code> without
     * specifying <code>name</code> returns an <a>InvalidInput</a> error.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordType(RRType&& value) { SetStartRecordType(value); return *this;}

    /**
     * <p><i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of
     * <code>ListResourceRecordSetsResponse$NextRecordIdentifier</code> from the
     * previous response to get the next resource record set that has the current DNS
     * name and type.</p>
     */
    inline const Aws::String& GetStartRecordIdentifier() const{ return m_startRecordIdentifier; }

    /**
     * <p><i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of
     * <code>ListResourceRecordSetsResponse$NextRecordIdentifier</code> from the
     * previous response to get the next resource record set that has the current DNS
     * name and type.</p>
     */
    inline void SetStartRecordIdentifier(const Aws::String& value) { m_startRecordIdentifierHasBeenSet = true; m_startRecordIdentifier = value; }

    /**
     * <p><i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of
     * <code>ListResourceRecordSetsResponse$NextRecordIdentifier</code> from the
     * previous response to get the next resource record set that has the current DNS
     * name and type.</p>
     */
    inline void SetStartRecordIdentifier(Aws::String&& value) { m_startRecordIdentifierHasBeenSet = true; m_startRecordIdentifier = value; }

    /**
     * <p><i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of
     * <code>ListResourceRecordSetsResponse$NextRecordIdentifier</code> from the
     * previous response to get the next resource record set that has the current DNS
     * name and type.</p>
     */
    inline void SetStartRecordIdentifier(const char* value) { m_startRecordIdentifierHasBeenSet = true; m_startRecordIdentifier.assign(value); }

    /**
     * <p><i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of
     * <code>ListResourceRecordSetsResponse$NextRecordIdentifier</code> from the
     * previous response to get the next resource record set that has the current DNS
     * name and type.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordIdentifier(const Aws::String& value) { SetStartRecordIdentifier(value); return *this;}

    /**
     * <p><i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of
     * <code>ListResourceRecordSetsResponse$NextRecordIdentifier</code> from the
     * previous response to get the next resource record set that has the current DNS
     * name and type.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordIdentifier(Aws::String&& value) { SetStartRecordIdentifier(value); return *this;}

    /**
     * <p><i>Weighted resource record sets only:</i> If results were truncated for a
     * given DNS name and type, specify the value of
     * <code>ListResourceRecordSetsResponse$NextRecordIdentifier</code> from the
     * previous response to get the next resource record set that has the current DNS
     * name and type.</p>
     */
    inline ListResourceRecordSetsRequest& WithStartRecordIdentifier(const char* value) { SetStartRecordIdentifier(value); return *this;}

    /**
     * <p>The maximum number of records you want in the response body.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of records you want in the response body.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of records you want in the response body.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of records you want in the response body.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of records you want in the response body.</p>
     */
    inline ListResourceRecordSetsRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of records you want in the response body.</p>
     */
    inline ListResourceRecordSetsRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of records you want in the response body.</p>
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
