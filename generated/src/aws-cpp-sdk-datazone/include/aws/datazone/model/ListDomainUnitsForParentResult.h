/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DomainUnitSummary.h>
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
namespace DataZone
{
namespace Model
{
  class ListDomainUnitsForParentResult
  {
  public:
    AWS_DATAZONE_API ListDomainUnitsForParentResult();
    AWS_DATAZONE_API ListDomainUnitsForParentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListDomainUnitsForParentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results returned by this action.</p>
     */
    inline const Aws::Vector<DomainUnitSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<DomainUnitSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<DomainUnitSummary>&& value) { m_items = std::move(value); }
    inline ListDomainUnitsForParentResult& WithItems(const Aws::Vector<DomainUnitSummary>& value) { SetItems(value); return *this;}
    inline ListDomainUnitsForParentResult& WithItems(Aws::Vector<DomainUnitSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListDomainUnitsForParentResult& AddItems(const DomainUnitSummary& value) { m_items.push_back(value); return *this; }
    inline ListDomainUnitsForParentResult& AddItems(DomainUnitSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the number of domain units is greater than the default value for the
     * MaxResults parameter, or if you explicitly specify a value for MaxResults that
     * is less than the number of domain units, the response includes a pagination
     * token named NextToken. You can specify this NextToken value in a subsequent call
     * to ListDomainUnitsForParent to list the next set of domain units.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDomainUnitsForParentResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDomainUnitsForParentResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDomainUnitsForParentResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDomainUnitsForParentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDomainUnitsForParentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDomainUnitsForParentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DomainUnitSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
