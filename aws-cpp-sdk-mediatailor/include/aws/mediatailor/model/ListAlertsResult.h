/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/Alert.h>
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
namespace MediaTailor
{
namespace Model
{
  class ListAlertsResult
  {
  public:
    AWS_MEDIATAILOR_API ListAlertsResult();
    AWS_MEDIATAILOR_API ListAlertsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API ListAlertsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of alerts that are associated with this resource.</p>
     */
    inline const Aws::Vector<Alert>& GetItems() const{ return m_items; }

    /**
     * <p>A list of alerts that are associated with this resource.</p>
     */
    inline void SetItems(const Aws::Vector<Alert>& value) { m_items = value; }

    /**
     * <p>A list of alerts that are associated with this resource.</p>
     */
    inline void SetItems(Aws::Vector<Alert>&& value) { m_items = std::move(value); }

    /**
     * <p>A list of alerts that are associated with this resource.</p>
     */
    inline ListAlertsResult& WithItems(const Aws::Vector<Alert>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of alerts that are associated with this resource.</p>
     */
    inline ListAlertsResult& WithItems(Aws::Vector<Alert>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of alerts that are associated with this resource.</p>
     */
    inline ListAlertsResult& AddItems(const Alert& value) { m_items.push_back(value); return *this; }

    /**
     * <p>A list of alerts that are associated with this resource.</p>
     */
    inline ListAlertsResult& AddItems(Alert&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListAlertsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListAlertsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListAlertsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Alert> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
