/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConformancePackComplianceScore.h>
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
namespace ConfigService
{
namespace Model
{
  class ListConformancePackComplianceScoresResult
  {
  public:
    AWS_CONFIGSERVICE_API ListConformancePackComplianceScoresResult() = default;
    AWS_CONFIGSERVICE_API ListConformancePackComplianceScoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API ListConformancePackComplianceScoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>nextToken</code> string that you can use to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConformancePackComplianceScoresResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ConformancePackComplianceScore</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackComplianceScore>& GetConformancePackComplianceScores() const { return m_conformancePackComplianceScores; }
    template<typename ConformancePackComplianceScoresT = Aws::Vector<ConformancePackComplianceScore>>
    void SetConformancePackComplianceScores(ConformancePackComplianceScoresT&& value) { m_conformancePackComplianceScoresHasBeenSet = true; m_conformancePackComplianceScores = std::forward<ConformancePackComplianceScoresT>(value); }
    template<typename ConformancePackComplianceScoresT = Aws::Vector<ConformancePackComplianceScore>>
    ListConformancePackComplianceScoresResult& WithConformancePackComplianceScores(ConformancePackComplianceScoresT&& value) { SetConformancePackComplianceScores(std::forward<ConformancePackComplianceScoresT>(value)); return *this;}
    template<typename ConformancePackComplianceScoresT = ConformancePackComplianceScore>
    ListConformancePackComplianceScoresResult& AddConformancePackComplianceScores(ConformancePackComplianceScoresT&& value) { m_conformancePackComplianceScoresHasBeenSet = true; m_conformancePackComplianceScores.emplace_back(std::forward<ConformancePackComplianceScoresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConformancePackComplianceScoresResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ConformancePackComplianceScore> m_conformancePackComplianceScores;
    bool m_conformancePackComplianceScoresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
