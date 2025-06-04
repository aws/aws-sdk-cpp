/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/model/EnvironmentSummary.h>
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
namespace EVS
{
namespace Model
{
  class ListEnvironmentsResult
  {
  public:
    AWS_EVS_API ListEnvironmentsResult() = default;
    AWS_EVS_API ListEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVS_API ListEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique pagination token for next page results. Make the call again using
     * this token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of environments with summarized environment details.</p>
     */
    inline const Aws::Vector<EnvironmentSummary>& GetEnvironmentSummaries() const { return m_environmentSummaries; }
    template<typename EnvironmentSummariesT = Aws::Vector<EnvironmentSummary>>
    void SetEnvironmentSummaries(EnvironmentSummariesT&& value) { m_environmentSummariesHasBeenSet = true; m_environmentSummaries = std::forward<EnvironmentSummariesT>(value); }
    template<typename EnvironmentSummariesT = Aws::Vector<EnvironmentSummary>>
    ListEnvironmentsResult& WithEnvironmentSummaries(EnvironmentSummariesT&& value) { SetEnvironmentSummaries(std::forward<EnvironmentSummariesT>(value)); return *this;}
    template<typename EnvironmentSummariesT = EnvironmentSummary>
    ListEnvironmentsResult& AddEnvironmentSummaries(EnvironmentSummariesT&& value) { m_environmentSummariesHasBeenSet = true; m_environmentSummaries.emplace_back(std::forward<EnvironmentSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEnvironmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<EnvironmentSummary> m_environmentSummaries;
    bool m_environmentSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
