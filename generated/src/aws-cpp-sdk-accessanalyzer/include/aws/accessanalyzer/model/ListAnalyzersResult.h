/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/AnalyzerSummary.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzersResponse">AWS
   * API Reference</a></p>
   */
  class ListAnalyzersResult
  {
  public:
    AWS_ACCESSANALYZER_API ListAnalyzersResult();
    AWS_ACCESSANALYZER_API ListAnalyzersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API ListAnalyzersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The analyzers retrieved.</p>
     */
    inline const Aws::Vector<AnalyzerSummary>& GetAnalyzers() const{ return m_analyzers; }

    /**
     * <p>The analyzers retrieved.</p>
     */
    inline void SetAnalyzers(const Aws::Vector<AnalyzerSummary>& value) { m_analyzers = value; }

    /**
     * <p>The analyzers retrieved.</p>
     */
    inline void SetAnalyzers(Aws::Vector<AnalyzerSummary>&& value) { m_analyzers = std::move(value); }

    /**
     * <p>The analyzers retrieved.</p>
     */
    inline ListAnalyzersResult& WithAnalyzers(const Aws::Vector<AnalyzerSummary>& value) { SetAnalyzers(value); return *this;}

    /**
     * <p>The analyzers retrieved.</p>
     */
    inline ListAnalyzersResult& WithAnalyzers(Aws::Vector<AnalyzerSummary>&& value) { SetAnalyzers(std::move(value)); return *this;}

    /**
     * <p>The analyzers retrieved.</p>
     */
    inline ListAnalyzersResult& AddAnalyzers(const AnalyzerSummary& value) { m_analyzers.push_back(value); return *this; }

    /**
     * <p>The analyzers retrieved.</p>
     */
    inline ListAnalyzersResult& AddAnalyzers(AnalyzerSummary&& value) { m_analyzers.push_back(std::move(value)); return *this; }


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
    inline ListAnalyzersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAnalyzersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAnalyzersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AnalyzerSummary> m_analyzers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
