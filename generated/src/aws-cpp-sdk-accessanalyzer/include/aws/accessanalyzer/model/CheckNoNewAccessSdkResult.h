/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/CheckNoNewAccessResult.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/ReasonSummary.h>
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
  class CheckNoNewAccessSdkResult
  {
  public:
    AWS_ACCESSANALYZER_API CheckNoNewAccessSdkResult();
    AWS_ACCESSANALYZER_API CheckNoNewAccessSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API CheckNoNewAccessSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The result of the check for new access. If the result is <code>PASS</code>,
     * no new access is allowed by the updated policy. If the result is
     * <code>FAIL</code>, the updated policy might allow new access.</p>
     */
    inline const CheckNoNewAccessResult& GetResult() const{ return m_result; }

    /**
     * <p>The result of the check for new access. If the result is <code>PASS</code>,
     * no new access is allowed by the updated policy. If the result is
     * <code>FAIL</code>, the updated policy might allow new access.</p>
     */
    inline void SetResult(const CheckNoNewAccessResult& value) { m_result = value; }

    /**
     * <p>The result of the check for new access. If the result is <code>PASS</code>,
     * no new access is allowed by the updated policy. If the result is
     * <code>FAIL</code>, the updated policy might allow new access.</p>
     */
    inline void SetResult(CheckNoNewAccessResult&& value) { m_result = std::move(value); }

    /**
     * <p>The result of the check for new access. If the result is <code>PASS</code>,
     * no new access is allowed by the updated policy. If the result is
     * <code>FAIL</code>, the updated policy might allow new access.</p>
     */
    inline CheckNoNewAccessSdkResult& WithResult(const CheckNoNewAccessResult& value) { SetResult(value); return *this;}

    /**
     * <p>The result of the check for new access. If the result is <code>PASS</code>,
     * no new access is allowed by the updated policy. If the result is
     * <code>FAIL</code>, the updated policy might allow new access.</p>
     */
    inline CheckNoNewAccessSdkResult& WithResult(CheckNoNewAccessResult&& value) { SetResult(std::move(value)); return *this;}


    /**
     * <p>The message indicating whether the updated policy allows new access.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message indicating whether the updated policy allows new access.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>The message indicating whether the updated policy allows new access.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>The message indicating whether the updated policy allows new access.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>The message indicating whether the updated policy allows new access.</p>
     */
    inline CheckNoNewAccessSdkResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message indicating whether the updated policy allows new access.</p>
     */
    inline CheckNoNewAccessSdkResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message indicating whether the updated policy allows new access.</p>
     */
    inline CheckNoNewAccessSdkResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>A description of the reasoning of the result.</p>
     */
    inline const Aws::Vector<ReasonSummary>& GetReasons() const{ return m_reasons; }

    /**
     * <p>A description of the reasoning of the result.</p>
     */
    inline void SetReasons(const Aws::Vector<ReasonSummary>& value) { m_reasons = value; }

    /**
     * <p>A description of the reasoning of the result.</p>
     */
    inline void SetReasons(Aws::Vector<ReasonSummary>&& value) { m_reasons = std::move(value); }

    /**
     * <p>A description of the reasoning of the result.</p>
     */
    inline CheckNoNewAccessSdkResult& WithReasons(const Aws::Vector<ReasonSummary>& value) { SetReasons(value); return *this;}

    /**
     * <p>A description of the reasoning of the result.</p>
     */
    inline CheckNoNewAccessSdkResult& WithReasons(Aws::Vector<ReasonSummary>&& value) { SetReasons(std::move(value)); return *this;}

    /**
     * <p>A description of the reasoning of the result.</p>
     */
    inline CheckNoNewAccessSdkResult& AddReasons(const ReasonSummary& value) { m_reasons.push_back(value); return *this; }

    /**
     * <p>A description of the reasoning of the result.</p>
     */
    inline CheckNoNewAccessSdkResult& AddReasons(ReasonSummary&& value) { m_reasons.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CheckNoNewAccessSdkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CheckNoNewAccessSdkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CheckNoNewAccessSdkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CheckNoNewAccessResult m_result;

    Aws::String m_message;

    Aws::Vector<ReasonSummary> m_reasons;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
