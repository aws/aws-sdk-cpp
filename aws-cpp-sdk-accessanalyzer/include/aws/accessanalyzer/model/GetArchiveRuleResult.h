/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/ArchiveRuleSummary.h>
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
    AWS_ACCESSANALYZER_API GetArchiveRuleResult();
    AWS_ACCESSANALYZER_API GetArchiveRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetArchiveRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ArchiveRuleSummary& GetArchiveRule() const{ return m_archiveRule; }

    
    inline void SetArchiveRule(const ArchiveRuleSummary& value) { m_archiveRule = value; }

    
    inline void SetArchiveRule(ArchiveRuleSummary&& value) { m_archiveRule = std::move(value); }

    
    inline GetArchiveRuleResult& WithArchiveRule(const ArchiveRuleSummary& value) { SetArchiveRule(value); return *this;}

    
    inline GetArchiveRuleResult& WithArchiveRule(ArchiveRuleSummary&& value) { SetArchiveRule(std::move(value)); return *this;}

  private:

    ArchiveRuleSummary m_archiveRule;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
