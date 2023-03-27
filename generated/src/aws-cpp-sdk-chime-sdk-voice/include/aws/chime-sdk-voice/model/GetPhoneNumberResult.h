/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/PhoneNumber.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class GetPhoneNumberResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetPhoneNumberResult();
    AWS_CHIMESDKVOICE_API GetPhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetPhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The phone number details.</p>
     */
    inline const PhoneNumber& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number details.</p>
     */
    inline void SetPhoneNumber(const PhoneNumber& value) { m_phoneNumber = value; }

    /**
     * <p>The phone number details.</p>
     */
    inline void SetPhoneNumber(PhoneNumber&& value) { m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number details.</p>
     */
    inline GetPhoneNumberResult& WithPhoneNumber(const PhoneNumber& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number details.</p>
     */
    inline GetPhoneNumberResult& WithPhoneNumber(PhoneNumber&& value) { SetPhoneNumber(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPhoneNumberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPhoneNumberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPhoneNumberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PhoneNumber m_phoneNumber;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
