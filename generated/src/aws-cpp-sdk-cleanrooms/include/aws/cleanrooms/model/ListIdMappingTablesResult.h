/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/IdMappingTableSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListIdMappingTablesResult
  {
  public:
    AWS_CLEANROOMS_API ListIdMappingTablesResult();
    AWS_CLEANROOMS_API ListIdMappingTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListIdMappingTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summary information of the ID mapping tables that you requested.</p>
     */
    inline const Aws::Vector<IdMappingTableSummary>& GetIdMappingTableSummaries() const{ return m_idMappingTableSummaries; }
    inline void SetIdMappingTableSummaries(const Aws::Vector<IdMappingTableSummary>& value) { m_idMappingTableSummaries = value; }
    inline void SetIdMappingTableSummaries(Aws::Vector<IdMappingTableSummary>&& value) { m_idMappingTableSummaries = std::move(value); }
    inline ListIdMappingTablesResult& WithIdMappingTableSummaries(const Aws::Vector<IdMappingTableSummary>& value) { SetIdMappingTableSummaries(value); return *this;}
    inline ListIdMappingTablesResult& WithIdMappingTableSummaries(Aws::Vector<IdMappingTableSummary>&& value) { SetIdMappingTableSummaries(std::move(value)); return *this;}
    inline ListIdMappingTablesResult& AddIdMappingTableSummaries(const IdMappingTableSummary& value) { m_idMappingTableSummaries.push_back(value); return *this; }
    inline ListIdMappingTablesResult& AddIdMappingTableSummaries(IdMappingTableSummary&& value) { m_idMappingTableSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIdMappingTablesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIdMappingTablesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIdMappingTablesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIdMappingTablesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIdMappingTablesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIdMappingTablesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IdMappingTableSummary> m_idMappingTableSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
