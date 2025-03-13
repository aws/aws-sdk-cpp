/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/PhoneNumber.h>
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
  class ListPhoneNumbersResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListPhoneNumbersResult() = default;
    AWS_CHIMESDKVOICE_API ListPhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListPhoneNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The phone number details.</p>
     */
    inline const Aws::Vector<PhoneNumber>& GetPhoneNumbers() const { return m_phoneNumbers; }
    template<typename PhoneNumbersT = Aws::Vector<PhoneNumber>>
    void SetPhoneNumbers(PhoneNumbersT&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers = std::forward<PhoneNumbersT>(value); }
    template<typename PhoneNumbersT = Aws::Vector<PhoneNumber>>
    ListPhoneNumbersResult& WithPhoneNumbers(PhoneNumbersT&& value) { SetPhoneNumbers(std::forward<PhoneNumbersT>(value)); return *this;}
    template<typename PhoneNumbersT = PhoneNumber>
    ListPhoneNumbersResult& AddPhoneNumbers(PhoneNumbersT&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.emplace_back(std::forward<PhoneNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPhoneNumbersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPhoneNumbersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PhoneNumber> m_phoneNumbers;
    bool m_phoneNumbersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
