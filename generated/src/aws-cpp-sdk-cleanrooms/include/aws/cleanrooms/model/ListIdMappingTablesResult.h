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
    AWS_CLEANROOMS_API ListIdMappingTablesResult() = default;
    AWS_CLEANROOMS_API ListIdMappingTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListIdMappingTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summary information of the ID mapping tables that you requested.</p>
     */
    inline const Aws::Vector<IdMappingTableSummary>& GetIdMappingTableSummaries() const { return m_idMappingTableSummaries; }
    template<typename IdMappingTableSummariesT = Aws::Vector<IdMappingTableSummary>>
    void SetIdMappingTableSummaries(IdMappingTableSummariesT&& value) { m_idMappingTableSummariesHasBeenSet = true; m_idMappingTableSummaries = std::forward<IdMappingTableSummariesT>(value); }
    template<typename IdMappingTableSummariesT = Aws::Vector<IdMappingTableSummary>>
    ListIdMappingTablesResult& WithIdMappingTableSummaries(IdMappingTableSummariesT&& value) { SetIdMappingTableSummaries(std::forward<IdMappingTableSummariesT>(value)); return *this;}
    template<typename IdMappingTableSummariesT = IdMappingTableSummary>
    ListIdMappingTablesResult& AddIdMappingTableSummaries(IdMappingTableSummariesT&& value) { m_idMappingTableSummariesHasBeenSet = true; m_idMappingTableSummaries.emplace_back(std::forward<IdMappingTableSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIdMappingTablesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIdMappingTablesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IdMappingTableSummary> m_idMappingTableSummaries;
    bool m_idMappingTableSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
