﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-zonal-shift/model/ManagedResourceSummary.h>
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
  class ListManagedResourcesResult
  {
  public:
    AWS_ARCZONALSHIFT_API ListManagedResourcesResult();
    AWS_ARCZONALSHIFT_API ListManagedResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API ListManagedResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The items in the response list.</p>
     */
    inline const Aws::Vector<ManagedResourceSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<ManagedResourceSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<ManagedResourceSummary>&& value) { m_items = std::move(value); }
    inline ListManagedResourcesResult& WithItems(const Aws::Vector<ManagedResourceSummary>& value) { SetItems(value); return *this;}
    inline ListManagedResourcesResult& WithItems(Aws::Vector<ManagedResourceSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListManagedResourcesResult& AddItems(const ManagedResourceSummary& value) { m_items.push_back(value); return *this; }
    inline ListManagedResourcesResult& AddItems(ManagedResourceSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListManagedResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListManagedResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListManagedResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListManagedResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListManagedResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListManagedResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ManagedResourceSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
