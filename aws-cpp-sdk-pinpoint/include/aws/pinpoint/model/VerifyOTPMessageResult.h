/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/VerificationResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class VerifyOTPMessageResult
  {
  public:
    AWS_PINPOINT_API VerifyOTPMessageResult();
    AWS_PINPOINT_API VerifyOTPMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API VerifyOTPMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const VerificationResponse& GetVerificationResponse() const{ return m_verificationResponse; }

    
    inline void SetVerificationResponse(const VerificationResponse& value) { m_verificationResponse = value; }

    
    inline void SetVerificationResponse(VerificationResponse&& value) { m_verificationResponse = std::move(value); }

    
    inline VerifyOTPMessageResult& WithVerificationResponse(const VerificationResponse& value) { SetVerificationResponse(value); return *this;}

    
    inline VerifyOTPMessageResult& WithVerificationResponse(VerificationResponse&& value) { SetVerificationResponse(std::move(value)); return *this;}

  private:

    VerificationResponse m_verificationResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
