/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/ArchiveRuleSummary.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  /**
   * <p>The response to the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetArchiveRuleResponse">AWS
   * API Reference</a></p>
   */
  class GetArchiveRuleResult
  {
  public:
    AWS_ACCESSANALYZER_API GetArchiveRuleResult() = default;
    AWS_ACCESSANALYZER_API GetArchiveRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetArchiveRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ArchiveRuleSummary& GetArchiveRule() const { return m_archiveRule; }
    template<typename ArchiveRuleT = ArchiveRuleSummary>
    void SetArchiveRule(ArchiveRuleT&& value) { m_archiveRuleHasBeenSet = true; m_archiveRule = std::forward<ArchiveRuleT>(value); }
    template<typename ArchiveRuleT = ArchiveRuleSummary>
    GetArchiveRuleResult& WithArchiveRule(ArchiveRuleT&& value) { SetArchiveRule(std::forward<ArchiveRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetArchiveRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ArchiveRuleSummary m_archiveRule;
    bool m_archiveRuleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
