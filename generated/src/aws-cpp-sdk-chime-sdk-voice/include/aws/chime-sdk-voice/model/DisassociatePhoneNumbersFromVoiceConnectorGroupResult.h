/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    
    inline const Aws::Vector<PhoneNumberError>& GetPhoneNumberErrors() const{ return m_phoneNumberErrors; }

    
    inline void SetPhoneNumberErrors(const Aws::Vector<PhoneNumberError>& value) { m_phoneNumberErrors = value; }

    
    inline void SetPhoneNumberErrors(Aws::Vector<PhoneNumberError>&& value) { m_phoneNumberErrors = std::move(value); }

    
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupResult& WithPhoneNumberErrors(const Aws::Vector<PhoneNumberError>& value) { SetPhoneNumberErrors(value); return *this;}

    
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupResult& WithPhoneNumberErrors(Aws::Vector<PhoneNumberError>&& value) { SetPhoneNumberErrors(std::move(value)); return *this;}

    
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupResult& AddPhoneNumberErrors(const PhoneNumberError& value) { m_phoneNumberErrors.push_back(value); return *this; }

    
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupResult& AddPhoneNumberErrors(PhoneNumberError&& value) { m_phoneNumberErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PhoneNumberError> m_phoneNumberErrors;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
