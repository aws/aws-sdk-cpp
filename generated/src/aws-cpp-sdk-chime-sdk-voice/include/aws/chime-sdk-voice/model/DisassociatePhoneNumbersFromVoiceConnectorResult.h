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
  class DisassociatePhoneNumbersFromVoiceConnectorResult
  {
  public:
    AWS_CHIMESDKVOICE_API DisassociatePhoneNumbersFromVoiceConnectorResult() = default;
    AWS_CHIMESDKVOICE_API DisassociatePhoneNumbersFromVoiceConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API DisassociatePhoneNumbersFromVoiceConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline const Aws::Vector<PhoneNumberError>& GetPhoneNumberErrors() const { return m_phoneNumberErrors; }
    template<typename PhoneNumberErrorsT = Aws::Vector<PhoneNumberError>>
    void SetPhoneNumberErrors(PhoneNumberErrorsT&& value) { m_phoneNumberErrorsHasBeenSet = true; m_phoneNumberErrors = std::forward<PhoneNumberErrorsT>(value); }
    template<typename PhoneNumberErrorsT = Aws::Vector<PhoneNumberError>>
    DisassociatePhoneNumbersFromVoiceConnectorResult& WithPhoneNumberErrors(PhoneNumberErrorsT&& value) { SetPhoneNumberErrors(std::forward<PhoneNumberErrorsT>(value)); return *this;}
    template<typename PhoneNumberErrorsT = PhoneNumberError>
    DisassociatePhoneNumbersFromVoiceConnectorResult& AddPhoneNumberErrors(PhoneNumberErrorsT&& value) { m_phoneNumberErrorsHasBeenSet = true; m_phoneNumberErrors.emplace_back(std::forward<PhoneNumberErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociatePhoneNumbersFromVoiceConnectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PhoneNumberError> m_phoneNumberErrors;
    bool m_phoneNumberErrorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
