/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/CheckAccessNotGrantedResult.h>
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
  class CheckAccessNotGrantedSdkResult
  {
  public:
    AWS_ACCESSANALYZER_API CheckAccessNotGrantedSdkResult();
    AWS_ACCESSANALYZER_API CheckAccessNotGrantedSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API CheckAccessNotGrantedSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The result of the check for whether the access is allowed. If the result is
     * <code>PASS</code>, the specified policy doesn't allow any of the specified
     * permissions in the access object. If the result is <code>FAIL</code>, the
     * specified policy might allow some or all of the permissions in the access
     * object.</p>
     */
    inline const CheckAccessNotGrantedResult& GetResult() const{ return m_result; }
    inline void SetResult(const CheckAccessNotGrantedResult& value) { m_result = value; }
    inline void SetResult(CheckAccessNotGrantedResult&& value) { m_result = std::move(value); }
    inline CheckAccessNotGrantedSdkResult& WithResult(const CheckAccessNotGrantedResult& value) { SetResult(value); return *this;}
    inline CheckAccessNotGrantedSdkResult& WithResult(CheckAccessNotGrantedResult&& value) { SetResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message indicating whether the specified access is allowed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline CheckAccessNotGrantedSdkResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline CheckAccessNotGrantedSdkResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline CheckAccessNotGrantedSdkResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the reasoning of the result.</p>
     */
    inline const Aws::Vector<ReasonSummary>& GetReasons() const{ return m_reasons; }
    inline void SetReasons(const Aws::Vector<ReasonSummary>& value) { m_reasons = value; }
    inline void SetReasons(Aws::Vector<ReasonSummary>&& value) { m_reasons = std::move(value); }
    inline CheckAccessNotGrantedSdkResult& WithReasons(const Aws::Vector<ReasonSummary>& value) { SetReasons(value); return *this;}
    inline CheckAccessNotGrantedSdkResult& WithReasons(Aws::Vector<ReasonSummary>&& value) { SetReasons(std::move(value)); return *this;}
    inline CheckAccessNotGrantedSdkResult& AddReasons(const ReasonSummary& value) { m_reasons.push_back(value); return *this; }
    inline CheckAccessNotGrantedSdkResult& AddReasons(ReasonSummary&& value) { m_reasons.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CheckAccessNotGrantedSdkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CheckAccessNotGrantedSdkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CheckAccessNotGrantedSdkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CheckAccessNotGrantedResult m_result;

    Aws::String m_message;

    Aws::Vector<ReasonSummary> m_reasons;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
