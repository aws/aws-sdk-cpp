/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/AnalyzerSummary.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAnalyzerResponse">AWS
   * API Reference</a></p>
   */
  class GetAnalyzerResult
  {
  public:
    AWS_ACCESSANALYZER_API GetAnalyzerResult() = default;
    AWS_ACCESSANALYZER_API GetAnalyzerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetAnalyzerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An <code>AnalyzerSummary</code> object that contains information about the
     * analyzer.</p>
     */
    inline const AnalyzerSummary& GetAnalyzer() const { return m_analyzer; }
    template<typename AnalyzerT = AnalyzerSummary>
    void SetAnalyzer(AnalyzerT&& value) { m_analyzerHasBeenSet = true; m_analyzer = std::forward<AnalyzerT>(value); }
    template<typename AnalyzerT = AnalyzerSummary>
    GetAnalyzerResult& WithAnalyzer(AnalyzerT&& value) { SetAnalyzer(std::forward<AnalyzerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAnalyzerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AnalyzerSummary m_analyzer;
    bool m_analyzerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
