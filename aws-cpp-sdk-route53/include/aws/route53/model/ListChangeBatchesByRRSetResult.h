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
#include <aws/route53/model/ChangeBatchRecord.h>

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
   * <p>The input for a ListChangeBatchesByRRSet request.</p>
   */
  class AWS_ROUTE53_API ListChangeBatchesByRRSetResult
  {
  public:
    ListChangeBatchesByRRSetResult();
    ListChangeBatchesByRRSetResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListChangeBatchesByRRSetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = value; }

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline ListChangeBatchesByRRSetResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline ListChangeBatchesByRRSetResult& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of items on a page.</p>
     */
    inline ListChangeBatchesByRRSetResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

    /**
     * <p>The page marker.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The page marker.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The page marker.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = value; }

    /**
     * <p>The page marker.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The page marker.</p>
     */
    inline ListChangeBatchesByRRSetResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The page marker.</p>
     */
    inline ListChangeBatchesByRRSetResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>The page marker.</p>
     */
    inline ListChangeBatchesByRRSetResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>A flag that indicates if there are more change batches to list.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates if there are more change batches to list.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates if there are more change batches to list.</p>
     */
    inline ListChangeBatchesByRRSetResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    /**
     * <p>The change batches within the given hosted zone and time period. </p>
     */
    inline const Aws::Vector<ChangeBatchRecord>& GetChangeBatchRecords() const{ return m_changeBatchRecords; }

    /**
     * <p>The change batches within the given hosted zone and time period. </p>
     */
    inline void SetChangeBatchRecords(const Aws::Vector<ChangeBatchRecord>& value) { m_changeBatchRecords = value; }

    /**
     * <p>The change batches within the given hosted zone and time period. </p>
     */
    inline void SetChangeBatchRecords(Aws::Vector<ChangeBatchRecord>&& value) { m_changeBatchRecords = value; }

    /**
     * <p>The change batches within the given hosted zone and time period. </p>
     */
    inline ListChangeBatchesByRRSetResult& WithChangeBatchRecords(const Aws::Vector<ChangeBatchRecord>& value) { SetChangeBatchRecords(value); return *this;}

    /**
     * <p>The change batches within the given hosted zone and time period. </p>
     */
    inline ListChangeBatchesByRRSetResult& WithChangeBatchRecords(Aws::Vector<ChangeBatchRecord>&& value) { SetChangeBatchRecords(value); return *this;}

    /**
     * <p>The change batches within the given hosted zone and time period. </p>
     */
    inline ListChangeBatchesByRRSetResult& AddChangeBatchRecords(const ChangeBatchRecord& value) { m_changeBatchRecords.push_back(value); return *this; }

    /**
     * <p>The change batches within the given hosted zone and time period. </p>
     */
    inline ListChangeBatchesByRRSetResult& AddChangeBatchRecords(ChangeBatchRecord&& value) { m_changeBatchRecords.push_back(value); return *this; }

    /**
     * <p>The next page marker.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The next page marker.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The next page marker.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = value; }

    /**
     * <p>The next page marker.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The next page marker.</p>
     */
    inline ListChangeBatchesByRRSetResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The next page marker.</p>
     */
    inline ListChangeBatchesByRRSetResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The next page marker.</p>
     */
    inline ListChangeBatchesByRRSetResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:
    Aws::String m_maxItems;
    Aws::String m_marker;
    bool m_isTruncated;
    Aws::Vector<ChangeBatchRecord> m_changeBatchRecords;
    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws