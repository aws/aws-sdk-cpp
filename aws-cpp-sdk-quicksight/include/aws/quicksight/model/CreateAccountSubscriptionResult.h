/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SignupResponse.h>
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
namespace QuickSight
{
namespace Model
{
  class CreateAccountSubscriptionResult
  {
  public:
    AWS_QUICKSIGHT_API CreateAccountSubscriptionResult();
    AWS_QUICKSIGHT_API CreateAccountSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateAccountSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>SignupResponse</code> object that returns information about a newly
     * created Amazon QuickSight account.</p>
     */
    inline const SignupResponse& GetSignupResponse() const{ return m_signupResponse; }

    /**
     * <p>A <code>SignupResponse</code> object that returns information about a newly
     * created Amazon QuickSight account.</p>
     */
    inline void SetSignupResponse(const SignupResponse& value) { m_signupResponse = value; }

    /**
     * <p>A <code>SignupResponse</code> object that returns information about a newly
     * created Amazon QuickSight account.</p>
     */
    inline void SetSignupResponse(SignupResponse&& value) { m_signupResponse = std::move(value); }

    /**
     * <p>A <code>SignupResponse</code> object that returns information about a newly
     * created Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionResult& WithSignupResponse(const SignupResponse& value) { SetSignupResponse(value); return *this;}

    /**
     * <p>A <code>SignupResponse</code> object that returns information about a newly
     * created Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionResult& WithSignupResponse(SignupResponse&& value) { SetSignupResponse(std::move(value)); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline CreateAccountSubscriptionResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateAccountSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateAccountSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateAccountSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SignupResponse m_signupResponse;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
