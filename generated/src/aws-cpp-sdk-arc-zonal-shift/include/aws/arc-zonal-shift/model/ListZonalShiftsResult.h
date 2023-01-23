/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-zonal-shift/model/ZonalShiftSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ARCZonalShift
{
namespace Model
{
  class ListZonalShiftsResult
  {
  public:
    AWS_ARCZONALSHIFT_API ListZonalShiftsResult();
    AWS_ARCZONALSHIFT_API ListZonalShiftsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API ListZonalShiftsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The items in the response list.</p>
     */
    inline const Aws::Vector<ZonalShiftSummary>& GetItems() const{ return m_items; }

    /**
     * <p>The items in the response list.</p>
     */
    inline void SetItems(const Aws::Vector<ZonalShiftSummary>& value) { m_items = value; }

    /**
     * <p>The items in the response list.</p>
     */
    inline void SetItems(Aws::Vector<ZonalShiftSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>The items in the response list.</p>
     */
    inline ListZonalShiftsResult& WithItems(const Aws::Vector<ZonalShiftSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>The items in the response list.</p>
     */
    inline ListZonalShiftsResult& WithItems(Aws::Vector<ZonalShiftSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The items in the response list.</p>
     */
    inline ListZonalShiftsResult& AddItems(const ZonalShiftSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The items in the response list.</p>
     */
    inline ListZonalShiftsResult& AddItems(ZonalShiftSummary&& value) { m_items.push_back(std::move(value)); return *this; }


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
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListZonalShiftsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListZonalShiftsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListZonalShiftsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ZonalShiftSummary> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
