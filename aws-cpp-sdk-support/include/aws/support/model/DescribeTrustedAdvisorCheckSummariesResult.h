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
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/TrustedAdvisorCheckSummary.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The summaries of the Trusted Advisor checks returned by the
   * <a>DescribeTrustedAdvisorCheckSummaries</a> operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckSummariesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API DescribeTrustedAdvisorCheckSummariesResult
  {
  public:
    DescribeTrustedAdvisorCheckSummariesResult();
    DescribeTrustedAdvisorCheckSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTrustedAdvisorCheckSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summary information for the requested Trusted Advisor checks.</p>
     */
    inline const Aws::Vector<TrustedAdvisorCheckSummary>& GetSummaries() const{ return m_summaries; }

    /**
     * <p>The summary information for the requested Trusted Advisor checks.</p>
     */
    inline void SetSummaries(const Aws::Vector<TrustedAdvisorCheckSummary>& value) { m_summaries = value; }

    /**
     * <p>The summary information for the requested Trusted Advisor checks.</p>
     */
    inline void SetSummaries(Aws::Vector<TrustedAdvisorCheckSummary>&& value) { m_summaries = std::move(value); }

    /**
     * <p>The summary information for the requested Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorCheckSummariesResult& WithSummaries(const Aws::Vector<TrustedAdvisorCheckSummary>& value) { SetSummaries(value); return *this;}

    /**
     * <p>The summary information for the requested Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorCheckSummariesResult& WithSummaries(Aws::Vector<TrustedAdvisorCheckSummary>&& value) { SetSummaries(std::move(value)); return *this;}

    /**
     * <p>The summary information for the requested Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorCheckSummariesResult& AddSummaries(const TrustedAdvisorCheckSummary& value) { m_summaries.push_back(value); return *this; }

    /**
     * <p>The summary information for the requested Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorCheckSummariesResult& AddSummaries(TrustedAdvisorCheckSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TrustedAdvisorCheckSummary> m_summaries;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
