/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/PhoneNumberError.h>
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
  class DisassociatePhoneNumbersFromVoiceConnectorGroupResult
  {
  public:
    AWS_CHIMESDKVOICE_API DisassociatePhoneNumbersFromVoiceConnectorGroupResult();
    AWS_CHIMESDKVOICE_API DisassociatePhoneNumbersFromVoiceConnectorGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API DisassociatePhoneNumbersFromVoiceConnectorGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline const Aws::Vector<PhoneNumberError>& GetPhoneNumberErrors() const{ return m_phoneNumberErrors; }

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline void SetPhoneNumberErrors(const Aws::Vector<PhoneNumberError>& value) { m_phoneNumberErrors = value; }

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline void SetPhoneNumberErrors(Aws::Vector<PhoneNumberError>&& value) { m_phoneNumberErrors = std::move(value); }

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupResult& WithPhoneNumberErrors(const Aws::Vector<PhoneNumberError>& value) { SetPhoneNumberErrors(value); return *this;}

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupResult& WithPhoneNumberErrors(Aws::Vector<PhoneNumberError>&& value) { SetPhoneNumberErrors(std::move(value)); return *this;}

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupResult& AddPhoneNumberErrors(const PhoneNumberError& value) { m_phoneNumberErrors.push_back(value); return *this; }

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupResult& AddPhoneNumberErrors(PhoneNumberError&& value) { m_phoneNumberErrors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PhoneNumberError> m_phoneNumberErrors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
