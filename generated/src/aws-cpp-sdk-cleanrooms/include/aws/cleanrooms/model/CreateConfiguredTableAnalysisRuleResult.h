/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredTableAnalysisRule.h>
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
namespace CleanRooms
{
namespace Model
{
  class CreateConfiguredTableAnalysisRuleResult
  {
  public:
    AWS_CLEANROOMS_API CreateConfiguredTableAnalysisRuleResult() = default;
    AWS_CLEANROOMS_API CreateConfiguredTableAnalysisRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API CreateConfiguredTableAnalysisRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The analysis rule that was created for the configured table.</p>
     */
    inline const ConfiguredTableAnalysisRule& GetAnalysisRule() const { return m_analysisRule; }
    template<typename AnalysisRuleT = ConfiguredTableAnalysisRule>
    void SetAnalysisRule(AnalysisRuleT&& value) { m_analysisRuleHasBeenSet = true; m_analysisRule = std::forward<AnalysisRuleT>(value); }
    template<typename AnalysisRuleT = ConfiguredTableAnalysisRule>
    CreateConfiguredTableAnalysisRuleResult& WithAnalysisRule(AnalysisRuleT&& value) { SetAnalysisRule(std::forward<AnalysisRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateConfiguredTableAnalysisRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConfiguredTableAnalysisRule m_analysisRule;
    bool m_analysisRuleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
