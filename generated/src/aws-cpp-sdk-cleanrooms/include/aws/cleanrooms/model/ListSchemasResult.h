/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/SchemaSummary.h>
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
  class ListSchemasResult
  {
  public:
    AWS_CLEANROOMS_API ListSchemasResult() = default;
    AWS_CLEANROOMS_API ListSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline const Aws::Vector<SchemaSummary>& GetSchemaSummaries() const { return m_schemaSummaries; }
    template<typename SchemaSummariesT = Aws::Vector<SchemaSummary>>
    void SetSchemaSummaries(SchemaSummariesT&& value) { m_schemaSummariesHasBeenSet = true; m_schemaSummaries = std::forward<SchemaSummariesT>(value); }
    template<typename SchemaSummariesT = Aws::Vector<SchemaSummary>>
    ListSchemasResult& WithSchemaSummaries(SchemaSummariesT&& value) { SetSchemaSummaries(std::forward<SchemaSummariesT>(value)); return *this;}
    template<typename SchemaSummariesT = SchemaSummary>
    ListSchemasResult& AddSchemaSummaries(SchemaSummariesT&& value) { m_schemaSummariesHasBeenSet = true; m_schemaSummaries.emplace_back(std::forward<SchemaSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSchemasResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSchemasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaSummary> m_schemaSummaries;
    bool m_schemaSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
