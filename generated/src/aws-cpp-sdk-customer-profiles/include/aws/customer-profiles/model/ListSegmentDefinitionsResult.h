/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/SegmentDefinitionItem.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class ListSegmentDefinitionsResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListSegmentDefinitionsResult();
    AWS_CUSTOMERPROFILES_API ListSegmentDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListSegmentDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token from the previous call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSegmentDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSegmentDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSegmentDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of segment definitions.</p>
     */
    inline const Aws::Vector<SegmentDefinitionItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<SegmentDefinitionItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<SegmentDefinitionItem>&& value) { m_items = std::move(value); }
    inline ListSegmentDefinitionsResult& WithItems(const Aws::Vector<SegmentDefinitionItem>& value) { SetItems(value); return *this;}
    inline ListSegmentDefinitionsResult& WithItems(Aws::Vector<SegmentDefinitionItem>&& value) { SetItems(std::move(value)); return *this;}
    inline ListSegmentDefinitionsResult& AddItems(const SegmentDefinitionItem& value) { m_items.push_back(value); return *this; }
    inline ListSegmentDefinitionsResult& AddItems(SegmentDefinitionItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSegmentDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSegmentDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSegmentDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SegmentDefinitionItem> m_items;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
