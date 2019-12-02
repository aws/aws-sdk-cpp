/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ACCESSANALYZER_API GetAnalyzerResult
  {
  public:
    GetAnalyzerResult();
    GetAnalyzerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAnalyzerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
