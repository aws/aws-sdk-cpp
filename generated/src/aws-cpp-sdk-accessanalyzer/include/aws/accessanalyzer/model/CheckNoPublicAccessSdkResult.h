/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/CheckNoPublicAccessResult.h>
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
  class CheckNoPublicAccessSdkResult
  {
  public:
    AWS_ACCESSANALYZER_API CheckNoPublicAccessSdkResult() = default;
    AWS_ACCESSANALYZER_API CheckNoPublicAccessSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API CheckNoPublicAccessSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The result of the check for public access to the specified resource type. If
     * the result is <code>PASS</code>, the policy doesn't allow public access to the
     * specified resource type. If the result is <code>FAIL</code>, the policy might
     * allow public access to the specified resource type.</p>
     */
    inline CheckNoPublicAccessResult GetResult() const { return m_result; }
    inline void SetResult(CheckNoPublicAccessResult value) { m_resultHasBeenSet = true; m_result = value; }
    inline CheckNoPublicAccessSdkResult& WithResult(CheckNoPublicAccessResult value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message indicating whether the specified policy allows public access to
     * resources.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    CheckNoPublicAccessSdkResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reasons why the specified resource policy grants public access for
     * the resource type.</p>
     */
    inline const Aws::Vector<ReasonSummary>& GetReasons() const { return m_reasons; }
    template<typename ReasonsT = Aws::Vector<ReasonSummary>>
    void SetReasons(ReasonsT&& value) { m_reasonsHasBeenSet = true; m_reasons = std::forward<ReasonsT>(value); }
    template<typename ReasonsT = Aws::Vector<ReasonSummary>>
    CheckNoPublicAccessSdkResult& WithReasons(ReasonsT&& value) { SetReasons(std::forward<ReasonsT>(value)); return *this;}
    template<typename ReasonsT = ReasonSummary>
    CheckNoPublicAccessSdkResult& AddReasons(ReasonsT&& value) { m_reasonsHasBeenSet = true; m_reasons.emplace_back(std::forward<ReasonsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CheckNoPublicAccessSdkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CheckNoPublicAccessResult m_result{CheckNoPublicAccessResult::NOT_SET};
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
