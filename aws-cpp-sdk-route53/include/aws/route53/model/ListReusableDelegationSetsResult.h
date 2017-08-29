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
#include <aws/route53/model/DelegationSet.h>
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
   * <p>A complex type that contains information about the reusable delegation sets
   * that are associated with the current AWS account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListReusableDelegationSetsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListReusableDelegationSetsResult
  {
  public:
    ListReusableDelegationSetsResult();
    ListReusableDelegationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListReusableDelegationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains one <code>DelegationSet</code> element for each
     * reusable delegation set that was created by the current AWS account.</p>
     */
    inline const Aws::Vector<DelegationSet>& GetDelegationSets() const{ return m_delegationSets; }

    /**
     * <p>A complex type that contains one <code>DelegationSet</code> element for each
     * reusable delegation set that was created by the current AWS account.</p>
     */
    inline void SetDelegationSets(const Aws::Vector<DelegationSet>& value) { m_delegationSets = value; }

    /**
     * <p>A complex type that contains one <code>DelegationSet</code> element for each
     * reusable delegation set that was created by the current AWS account.</p>
     */
    inline void SetDelegationSets(Aws::Vector<DelegationSet>&& value) { m_delegationSets = std::move(value); }

    /**
     * <p>A complex type that contains one <code>DelegationSet</code> element for each
     * reusable delegation set that was created by the current AWS account.</p>
     */
    inline ListReusableDelegationSetsResult& WithDelegationSets(const Aws::Vector<DelegationSet>& value) { SetDelegationSets(value); return *this;}

    /**
     * <p>A complex type that contains one <code>DelegationSet</code> element for each
     * reusable delegation set that was created by the current AWS account.</p>
     */
    inline ListReusableDelegationSetsResult& WithDelegationSets(Aws::Vector<DelegationSet>&& value) { SetDelegationSets(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains one <code>DelegationSet</code> element for each
     * reusable delegation set that was created by the current AWS account.</p>
     */
    inline ListReusableDelegationSetsResult& AddDelegationSets(const DelegationSet& value) { m_delegationSets.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one <code>DelegationSet</code> element for each
     * reusable delegation set that was created by the current AWS account.</p>
     */
    inline ListReusableDelegationSetsResult& AddDelegationSets(DelegationSet&& value) { m_delegationSets.push_back(std::move(value)); return *this; }


    /**
     * <p>For the second and subsequent calls to
     * <code>ListReusableDelegationSets</code>, <code>Marker</code> is the value that
     * you specified for the <code>marker</code> parameter in the request that produced
     * the current response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>For the second and subsequent calls to
     * <code>ListReusableDelegationSets</code>, <code>Marker</code> is the value that
     * you specified for the <code>marker</code> parameter in the request that produced
     * the current response.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>For the second and subsequent calls to
     * <code>ListReusableDelegationSets</code>, <code>Marker</code> is the value that
     * you specified for the <code>marker</code> parameter in the request that produced
     * the current response.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>For the second and subsequent calls to
     * <code>ListReusableDelegationSets</code>, <code>Marker</code> is the value that
     * you specified for the <code>marker</code> parameter in the request that produced
     * the current response.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>For the second and subsequent calls to
     * <code>ListReusableDelegationSets</code>, <code>Marker</code> is the value that
     * you specified for the <code>marker</code> parameter in the request that produced
     * the current response.</p>
     */
    inline ListReusableDelegationSetsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>For the second and subsequent calls to
     * <code>ListReusableDelegationSets</code>, <code>Marker</code> is the value that
     * you specified for the <code>marker</code> parameter in the request that produced
     * the current response.</p>
     */
    inline ListReusableDelegationSetsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>For the second and subsequent calls to
     * <code>ListReusableDelegationSets</code>, <code>Marker</code> is the value that
     * you specified for the <code>marker</code> parameter in the request that produced
     * the current response.</p>
     */
    inline ListReusableDelegationSetsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A flag that indicates whether there are more reusable delegation sets to be
     * listed.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more reusable delegation sets to be
     * listed.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more reusable delegation sets to be
     * listed.</p>
     */
    inline ListReusableDelegationSetsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the next reusable delegation set that Amazon
     * Route 53 will return if you submit another
     * <code>ListReusableDelegationSets</code> request and specify the value of
     * <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the next reusable delegation set that Amazon
     * Route 53 will return if you submit another
     * <code>ListReusableDelegationSets</code> request and specify the value of
     * <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the next reusable delegation set that Amazon
     * Route 53 will return if you submit another
     * <code>ListReusableDelegationSets</code> request and specify the value of
     * <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the next reusable delegation set that Amazon
     * Route 53 will return if you submit another
     * <code>ListReusableDelegationSets</code> request and specify the value of
     * <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the next reusable delegation set that Amazon
     * Route 53 will return if you submit another
     * <code>ListReusableDelegationSets</code> request and specify the value of
     * <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline ListReusableDelegationSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the next reusable delegation set that Amazon
     * Route 53 will return if you submit another
     * <code>ListReusableDelegationSets</code> request and specify the value of
     * <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline ListReusableDelegationSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the next reusable delegation set that Amazon
     * Route 53 will return if you submit another
     * <code>ListReusableDelegationSets</code> request and specify the value of
     * <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline ListReusableDelegationSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListReusableDelegationSets</code> that produced the current
     * response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListReusableDelegationSets</code> that produced the current
     * response.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListReusableDelegationSets</code> that produced the current
     * response.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = std::move(value); }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListReusableDelegationSets</code> that produced the current
     * response.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListReusableDelegationSets</code> that produced the current
     * response.</p>
     */
    inline ListReusableDelegationSetsResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListReusableDelegationSets</code> that produced the current
     * response.</p>
     */
    inline ListReusableDelegationSetsResult& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListReusableDelegationSets</code> that produced the current
     * response.</p>
     */
    inline ListReusableDelegationSetsResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::Vector<DelegationSet> m_delegationSets;

    Aws::String m_marker;

    bool m_isTruncated;

    Aws::String m_nextMarker;

    Aws::String m_maxItems;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
