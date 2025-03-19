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
    AWS_ACCESSANALYZER_API CheckAccessNotGrantedSdkResult() = default;
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
    inline CheckAccessNotGrantedResult GetResult() const { return m_result; }
    inline void SetResult(CheckAccessNotGrantedResult value) { m_resultHasBeenSet = true; m_result = value; }
    inline CheckAccessNotGrantedSdkResult& WithResult(CheckAccessNotGrantedResult value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message indicating whether the specified access is allowed.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    CheckAccessNotGrantedSdkResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the reasoning of the result.</p>
     */
    inline const Aws::Vector<ReasonSummary>& GetReasons() const { return m_reasons; }
    template<typename ReasonsT = Aws::Vector<ReasonSummary>>
    void SetReasons(ReasonsT&& value) { m_reasonsHasBeenSet = true; m_reasons = std::forward<ReasonsT>(value); }
    template<typename ReasonsT = Aws::Vector<ReasonSummary>>
    CheckAccessNotGrantedSdkResult& WithReasons(ReasonsT&& value) { SetReasons(std::forward<ReasonsT>(value)); return *this;}
    template<typename ReasonsT = ReasonSummary>
    CheckAccessNotGrantedSdkResult& AddReasons(ReasonsT&& value) { m_reasonsHasBeenSet = true; m_reasons.emplace_back(std::forward<ReasonsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CheckAccessNotGrantedSdkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CheckAccessNotGrantedResult m_result{CheckAccessNotGrantedResult::NOT_SET};
    bool m_resultHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<ReasonSummary> m_reasons;
    bool m_reasonsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
