/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAnalyzerResponse">AWS
   * API Reference</a></p>
   */
  class GetAnalyzerResult
  {
  public:
    AWS_ACCESSANALYZER_API GetAnalyzerResult();
    AWS_ACCESSANALYZER_API GetAnalyzerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetAnalyzerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An <code>AnalyzerSummary</code> object that contains information about the
     * analyzer.</p>
     */
    inline const AnalyzerSummary& GetAnalyzer() const{ return m_analyzer; }

    /**
     * <p>An <code>AnalyzerSummary</code> object that contains information about the
     * analyzer.</p>
     */
    inline void SetAnalyzer(const AnalyzerSummary& value) { m_analyzer = value; }

    /**
     * <p>An <code>AnalyzerSummary</code> object that contains information about the
     * analyzer.</p>
     */
    inline void SetAnalyzer(AnalyzerSummary&& value) { m_analyzer = std::move(value); }

    /**
     * <p>An <code>AnalyzerSummary</code> object that contains information about the
     * analyzer.</p>
     */
    inline GetAnalyzerResult& WithAnalyzer(const AnalyzerSummary& value) { SetAnalyzer(value); return *this;}

    /**
     * <p>An <code>AnalyzerSummary</code> object that contains information about the
     * analyzer.</p>
     */
    inline GetAnalyzerResult& WithAnalyzer(AnalyzerSummary&& value) { SetAnalyzer(std::move(value)); return *this;}

  private:

    AnalyzerSummary m_analyzer;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
