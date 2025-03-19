/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/Outcome.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetOutcomesResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetOutcomesResult() = default;
    AWS_FRAUDDETECTOR_API GetOutcomesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetOutcomesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The outcomes. </p>
     */
    inline const Aws::Vector<Outcome>& GetOutcomes() const { return m_outcomes; }
    template<typename OutcomesT = Aws::Vector<Outcome>>
    void SetOutcomes(OutcomesT&& value) { m_outcomesHasBeenSet = true; m_outcomes = std::forward<OutcomesT>(value); }
    template<typename OutcomesT = Aws::Vector<Outcome>>
    GetOutcomesResult& WithOutcomes(OutcomesT&& value) { SetOutcomes(std::forward<OutcomesT>(value)); return *this;}
    template<typename OutcomesT = Outcome>
    GetOutcomesResult& AddOutcomes(OutcomesT&& value) { m_outcomesHasBeenSet = true; m_outcomes.emplace_back(std::forward<OutcomesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next page token for subsequent requests.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetOutcomesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOutcomesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Outcome> m_outcomes;
    bool m_outcomesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
