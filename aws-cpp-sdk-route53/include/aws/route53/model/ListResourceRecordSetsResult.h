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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
#include <aws/route53/model/ResourceRecordSet.h>
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
  /**
   * <p>A complex type that contains list information for the resource record
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListResourceRecordSetsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListResourceRecordSetsResult
  {
  public:
    ListResourceRecordSetsResult();
    ListResourceRecordSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListResourceRecordSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about multiple resource record sets.</p>
     */
    inline const Aws::Vector<ResourceRecordSet>& GetResourceRecordSets() const{ return m_resourceRecordSets; }

    /**
     * <p>Information about multiple resource record sets.</p>
     */
    inline void SetResourceRecordSets(const Aws::Vector<ResourceRecordSet>& value) { m_resourceRecordSets = value; }

    /**
     * <p>Information about multiple resource record sets.</p>
     */
    inline void SetResourceRecordSets(Aws::Vector<ResourceRecordSet>&& value) { m_resourceRecordSets = std::move(value); }

    /**
     * <p>Information about multiple resource record sets.</p>
     */
    inline ListResourceRecordSetsResult& WithResourceRecordSets(const Aws::Vector<ResourceRecordSet>& value) { SetResourceRecordSets(value); return *this;}

    /**
     * <p>Information about multiple resource record sets.</p>
     */
    inline ListResourceRecordSetsResult& WithResourceRecordSets(Aws::Vector<ResourceRecordSet>&& value) { SetResourceRecordSets(std::move(value)); return *this;}

    /**
     * <p>Information about multiple resource record sets.</p>
     */
    inline ListResourceRecordSetsResult& AddResourceRecordSets(const ResourceRecordSet& value) { m_resourceRecordSets.push_back(value); return *this; }

    /**
     * <p>Information about multiple resource record sets.</p>
     */
    inline ListResourceRecordSetsResult& AddResourceRecordSets(ResourceRecordSet&& value) { m_resourceRecordSets.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag that indicates whether more resource record sets remain to be listed.
     * If your results were truncated, you can make a follow-up pagination request by
     * using the <code>NextRecordName</code> element.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether more resource record sets remain to be listed.
     * If your results were truncated, you can make a follow-up pagination request by
     * using the <code>NextRecordName</code> element.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether more resource record sets remain to be listed.
     * If your results were truncated, you can make a follow-up pagination request by
     * using the <code>NextRecordName</code> element.</p>
     */
    inline ListResourceRecordSetsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>If the results were truncated, the name of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline const Aws::String& GetNextRecordName() const{ return m_nextRecordName; }

    /**
     * <p>If the results were truncated, the name of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline void SetNextRecordName(const Aws::String& value) { m_nextRecordName = value; }

    /**
     * <p>If the results were truncated, the name of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline void SetNextRecordName(Aws::String&& value) { m_nextRecordName = std::move(value); }

    /**
     * <p>If the results were truncated, the name of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline void SetNextRecordName(const char* value) { m_nextRecordName.assign(value); }

    /**
     * <p>If the results were truncated, the name of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline ListResourceRecordSetsResult& WithNextRecordName(const Aws::String& value) { SetNextRecordName(value); return *this;}

    /**
     * <p>If the results were truncated, the name of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline ListResourceRecordSetsResult& WithNextRecordName(Aws::String&& value) { SetNextRecordName(std::move(value)); return *this;}

    /**
     * <p>If the results were truncated, the name of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline ListResourceRecordSetsResult& WithNextRecordName(const char* value) { SetNextRecordName(value); return *this;}


    /**
     * <p>If the results were truncated, the type of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline const RRType& GetNextRecordType() const{ return m_nextRecordType; }

    /**
     * <p>If the results were truncated, the type of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline void SetNextRecordType(const RRType& value) { m_nextRecordType = value; }

    /**
     * <p>If the results were truncated, the type of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline void SetNextRecordType(RRType&& value) { m_nextRecordType = std::move(value); }

    /**
     * <p>If the results were truncated, the type of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline ListResourceRecordSetsResult& WithNextRecordType(const RRType& value) { SetNextRecordType(value); return *this;}

    /**
     * <p>If the results were truncated, the type of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline ListResourceRecordSetsResult& WithNextRecordType(RRType&& value) { SetNextRecordType(std::move(value)); return *this;}


    /**
     * <p> <i>Resource record sets that have a routing policy other than simple:</i> If
     * results were truncated for a given DNS name and type, the value of
     * <code>SetIdentifier</code> for the next resource record set that has the current
     * DNS name and type.</p> <p>For information about routing policies, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html">Choosing
     * a Routing Policy</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetNextRecordIdentifier() const{ return m_nextRecordIdentifier; }

    /**
     * <p> <i>Resource record sets that have a routing policy other than simple:</i> If
     * results were truncated for a given DNS name and type, the value of
     * <code>SetIdentifier</code> for the next resource record set that has the current
     * DNS name and type.</p> <p>For information about routing policies, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html">Choosing
     * a Routing Policy</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     */
    inline void SetNextRecordIdentifier(const Aws::String& value) { m_nextRecordIdentifier = value; }

    /**
     * <p> <i>Resource record sets that have a routing policy other than simple:</i> If
     * results were truncated for a given DNS name and type, the value of
     * <code>SetIdentifier</code> for the next resource record set that has the current
     * DNS name and type.</p> <p>For information about routing policies, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html">Choosing
     * a Routing Policy</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     */
    inline void SetNextRecordIdentifier(Aws::String&& value) { m_nextRecordIdentifier = std::move(value); }

    /**
     * <p> <i>Resource record sets that have a routing policy other than simple:</i> If
     * results were truncated for a given DNS name and type, the value of
     * <code>SetIdentifier</code> for the next resource record set that has the current
     * DNS name and type.</p> <p>For information about routing policies, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html">Choosing
     * a Routing Policy</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     */
    inline void SetNextRecordIdentifier(const char* value) { m_nextRecordIdentifier.assign(value); }

    /**
     * <p> <i>Resource record sets that have a routing policy other than simple:</i> If
     * results were truncated for a given DNS name and type, the value of
     * <code>SetIdentifier</code> for the next resource record set that has the current
     * DNS name and type.</p> <p>For information about routing policies, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html">Choosing
     * a Routing Policy</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     */
    inline ListResourceRecordSetsResult& WithNextRecordIdentifier(const Aws::String& value) { SetNextRecordIdentifier(value); return *this;}

    /**
     * <p> <i>Resource record sets that have a routing policy other than simple:</i> If
     * results were truncated for a given DNS name and type, the value of
     * <code>SetIdentifier</code> for the next resource record set that has the current
     * DNS name and type.</p> <p>For information about routing policies, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html">Choosing
     * a Routing Policy</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     */
    inline ListResourceRecordSetsResult& WithNextRecordIdentifier(Aws::String&& value) { SetNextRecordIdentifier(std::move(value)); return *this;}

    /**
     * <p> <i>Resource record sets that have a routing policy other than simple:</i> If
     * results were truncated for a given DNS name and type, the value of
     * <code>SetIdentifier</code> for the next resource record set that has the current
     * DNS name and type.</p> <p>For information about routing policies, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html">Choosing
     * a Routing Policy</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     */
    inline ListResourceRecordSetsResult& WithNextRecordIdentifier(const char* value) { SetNextRecordIdentifier(value); return *this;}


    /**
     * <p>The maximum number of records you requested.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of records you requested.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The maximum number of records you requested.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = std::move(value); }

    /**
     * <p>The maximum number of records you requested.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The maximum number of records you requested.</p>
     */
    inline ListResourceRecordSetsResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of records you requested.</p>
     */
    inline ListResourceRecordSetsResult& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The maximum number of records you requested.</p>
     */
    inline ListResourceRecordSetsResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::Vector<ResourceRecordSet> m_resourceRecordSets;

    bool m_isTruncated;

    Aws::String m_nextRecordName;

    RRType m_nextRecordType;

    Aws::String m_nextRecordIdentifier;

    Aws::String m_maxItems;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
