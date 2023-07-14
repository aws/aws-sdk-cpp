﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/TrustedAdvisorCheckResult.h>
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
   * <p>The result of the Trusted Advisor check returned by the
   * <a>DescribeTrustedAdvisorCheckResult</a> operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckResultResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API DescribeTrustedAdvisorCheckResultResult
  {
  public:
    DescribeTrustedAdvisorCheckResultResult();
    DescribeTrustedAdvisorCheckResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTrustedAdvisorCheckResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed results of the Trusted Advisor check.</p>
     */
    inline const TrustedAdvisorCheckResult& GetResult() const{ return m_result; }

    /**
     * <p>The detailed results of the Trusted Advisor check.</p>
     */
    inline void SetResult(const TrustedAdvisorCheckResult& value) { m_result = value; }

    /**
     * <p>The detailed results of the Trusted Advisor check.</p>
     */
    inline void SetResult(TrustedAdvisorCheckResult&& value) { m_result = std::move(value); }

    /**
     * <p>The detailed results of the Trusted Advisor check.</p>
     */
    inline DescribeTrustedAdvisorCheckResultResult& WithResult(const TrustedAdvisorCheckResult& value) { SetResult(value); return *this;}

    /**
     * <p>The detailed results of the Trusted Advisor check.</p>
     */
    inline DescribeTrustedAdvisorCheckResultResult& WithResult(TrustedAdvisorCheckResult&& value) { SetResult(std::move(value)); return *this;}

  private:

    TrustedAdvisorCheckResult m_result;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
