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
    AWS_ACCESSANALYZER_API ListArchiveRulesResult();
    AWS_ACCESSANALYZER_API ListArchiveRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API ListArchiveRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of archive rules created for the specified analyzer.</p>
     */
    inline const Aws::Vector<ArchiveRuleSummary>& GetArchiveRules() const{ return m_archiveRules; }

    /**
     * <p>A list of archive rules created for the specified analyzer.</p>
     */
    inline void SetArchiveRules(const Aws::Vector<ArchiveRuleSummary>& value) { m_archiveRules = value; }

    /**
     * <p>A list of archive rules created for the specified analyzer.</p>
     */
    inline void SetArchiveRules(Aws::Vector<ArchiveRuleSummary>&& value) { m_archiveRules = std::move(value); }

    /**
     * <p>A list of archive rules created for the specified analyzer.</p>
     */
    inline ListArchiveRulesResult& WithArchiveRules(const Aws::Vector<ArchiveRuleSummary>& value) { SetArchiveRules(value); return *this;}

    /**
     * <p>A list of archive rules created for the specified analyzer.</p>
     */
    inline ListArchiveRulesResult& WithArchiveRules(Aws::Vector<ArchiveRuleSummary>&& value) { SetArchiveRules(std::move(value)); return *this;}

    /**
     * <p>A list of archive rules created for the specified analyzer.</p>
     */
    inline ListArchiveRulesResult& AddArchiveRules(const ArchiveRuleSummary& value) { m_archiveRules.push_back(value); return *this; }

    /**
     * <p>A list of archive rules created for the specified analyzer.</p>
     */
    inline ListArchiveRulesResult& AddArchiveRules(ArchiveRuleSummary&& value) { m_archiveRules.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListArchiveRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListArchiveRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListArchiveRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ArchiveRuleSummary> m_archiveRules;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
