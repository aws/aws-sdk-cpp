/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConnectCases
{
namespace Model
{
  class CreateCaseRuleResult
  {
  public:
    AWS_CONNECTCASES_API CreateCaseRuleResult() = default;
    AWS_CONNECTCASES_API CreateCaseRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API CreateCaseRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a case rule.</p>
     */
    inline const Aws::String& GetCaseRuleArn() const { return m_caseRuleArn; }
    template<typename CaseRuleArnT = Aws::String>
    void SetCaseRuleArn(CaseRuleArnT&& value) { m_caseRuleArnHasBeenSet = true; m_caseRuleArn = std::forward<CaseRuleArnT>(value); }
    template<typename CaseRuleArnT = Aws::String>
    CreateCaseRuleResult& WithCaseRuleArn(CaseRuleArnT&& value) { SetCaseRuleArn(std::forward<CaseRuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a case rule.</p>
     */
    inline const Aws::String& GetCaseRuleId() const { return m_caseRuleId; }
    template<typename CaseRuleIdT = Aws::String>
    void SetCaseRuleId(CaseRuleIdT&& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = std::forward<CaseRuleIdT>(value); }
    template<typename CaseRuleIdT = Aws::String>
    CreateCaseRuleResult& WithCaseRuleId(CaseRuleIdT&& value) { SetCaseRuleId(std::forward<CaseRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCaseRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_caseRuleArn;
    bool m_caseRuleArnHasBeenSet = false;

    Aws::String m_caseRuleId;
    bool m_caseRuleIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
