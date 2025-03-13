/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListArchiveRulesResponse">AWS
   * API Reference</a></p>
   */
  class ListArchiveRulesResult
  {
  public:
    AWS_ACCESSANALYZER_API ListArchiveRulesResult() = default;
    AWS_ACCESSANALYZER_API ListArchiveRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API ListArchiveRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of archive rules created for the specified analyzer.</p>
     */
    inline const Aws::Vector<ArchiveRuleSummary>& GetArchiveRules() const { return m_archiveRules; }
    template<typename ArchiveRulesT = Aws::Vector<ArchiveRuleSummary>>
    void SetArchiveRules(ArchiveRulesT&& value) { m_archiveRulesHasBeenSet = true; m_archiveRules = std::forward<ArchiveRulesT>(value); }
    template<typename ArchiveRulesT = Aws::Vector<ArchiveRuleSummary>>
    ListArchiveRulesResult& WithArchiveRules(ArchiveRulesT&& value) { SetArchiveRules(std::forward<ArchiveRulesT>(value)); return *this;}
    template<typename ArchiveRulesT = ArchiveRuleSummary>
    ListArchiveRulesResult& AddArchiveRules(ArchiveRulesT&& value) { m_archiveRulesHasBeenSet = true; m_archiveRules.emplace_back(std::forward<ArchiveRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListArchiveRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListArchiveRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ArchiveRuleSummary> m_archiveRules;
    bool m_archiveRulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
