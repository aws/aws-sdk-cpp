/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/PolicyGeneration.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class ListPolicyGenerationsResult
  {
  public:
    AWS_ACCESSANALYZER_API ListPolicyGenerationsResult() = default;
    AWS_ACCESSANALYZER_API ListPolicyGenerationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API ListPolicyGenerationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>PolicyGeneration</code> object that contains details about the
     * generated policy.</p>
     */
    inline const Aws::Vector<PolicyGeneration>& GetPolicyGenerations() const { return m_policyGenerations; }
    template<typename PolicyGenerationsT = Aws::Vector<PolicyGeneration>>
    void SetPolicyGenerations(PolicyGenerationsT&& value) { m_policyGenerationsHasBeenSet = true; m_policyGenerations = std::forward<PolicyGenerationsT>(value); }
    template<typename PolicyGenerationsT = Aws::Vector<PolicyGeneration>>
    ListPolicyGenerationsResult& WithPolicyGenerations(PolicyGenerationsT&& value) { SetPolicyGenerations(std::forward<PolicyGenerationsT>(value)); return *this;}
    template<typename PolicyGenerationsT = PolicyGeneration>
    ListPolicyGenerationsResult& AddPolicyGenerations(PolicyGenerationsT&& value) { m_policyGenerationsHasBeenSet = true; m_policyGenerations.emplace_back(std::forward<PolicyGenerationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPolicyGenerationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPolicyGenerationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PolicyGeneration> m_policyGenerations;
    bool m_policyGenerationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
