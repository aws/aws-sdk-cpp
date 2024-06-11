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
    AWS_ACCESSANALYZER_API CheckNoPublicAccessSdkResult();
    AWS_ACCESSANALYZER_API CheckNoPublicAccessSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API CheckNoPublicAccessSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The result of the check for public access to the specified resource type. If
     * the result is <code>PASS</code>, the policy doesn't allow public access to the
     * specified resource type. If the result is <code>FAIL</code>, the policy might
     * allow public access to the specified resource type.</p>
     */
    inline const CheckNoPublicAccessResult& GetResult() const{ return m_result; }
    inline void SetResult(const CheckNoPublicAccessResult& value) { m_result = value; }
    inline void SetResult(CheckNoPublicAccessResult&& value) { m_result = std::move(value); }
    inline CheckNoPublicAccessSdkResult& WithResult(const CheckNoPublicAccessResult& value) { SetResult(value); return *this;}
    inline CheckNoPublicAccessSdkResult& WithResult(CheckNoPublicAccessResult&& value) { SetResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message indicating whether the specified policy allows public access to
     * resources.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline CheckNoPublicAccessSdkResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline CheckNoPublicAccessSdkResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline CheckNoPublicAccessSdkResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reasons why the specified resource policy grants public access for
     * the resource type.</p>
     */
    inline const Aws::Vector<ReasonSummary>& GetReasons() const{ return m_reasons; }
    inline void SetReasons(const Aws::Vector<ReasonSummary>& value) { m_reasons = value; }
    inline void SetReasons(Aws::Vector<ReasonSummary>&& value) { m_reasons = std::move(value); }
    inline CheckNoPublicAccessSdkResult& WithReasons(const Aws::Vector<ReasonSummary>& value) { SetReasons(value); return *this;}
    inline CheckNoPublicAccessSdkResult& WithReasons(Aws::Vector<ReasonSummary>&& value) { SetReasons(std::move(value)); return *this;}
    inline CheckNoPublicAccessSdkResult& AddReasons(const ReasonSummary& value) { m_reasons.push_back(value); return *this; }
    inline CheckNoPublicAccessSdkResult& AddReasons(ReasonSummary&& value) { m_reasons.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CheckNoPublicAccessSdkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CheckNoPublicAccessSdkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CheckNoPublicAccessSdkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CheckNoPublicAccessResult m_result;

    Aws::String m_message;

    Aws::Vector<ReasonSummary> m_reasons;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
