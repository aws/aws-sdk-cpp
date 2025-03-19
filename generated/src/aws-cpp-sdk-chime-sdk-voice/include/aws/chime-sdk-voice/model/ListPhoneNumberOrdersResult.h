/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/PhoneNumberOrder.h>
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
  class ListPhoneNumberOrdersResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListPhoneNumberOrdersResult() = default;
    AWS_CHIMESDKVOICE_API ListPhoneNumberOrdersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListPhoneNumberOrdersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The phone number order details.</p>
     */
    inline const Aws::Vector<PhoneNumberOrder>& GetPhoneNumberOrders() const { return m_phoneNumberOrders; }
    template<typename PhoneNumberOrdersT = Aws::Vector<PhoneNumberOrder>>
    void SetPhoneNumberOrders(PhoneNumberOrdersT&& value) { m_phoneNumberOrdersHasBeenSet = true; m_phoneNumberOrders = std::forward<PhoneNumberOrdersT>(value); }
    template<typename PhoneNumberOrdersT = Aws::Vector<PhoneNumberOrder>>
    ListPhoneNumberOrdersResult& WithPhoneNumberOrders(PhoneNumberOrdersT&& value) { SetPhoneNumberOrders(std::forward<PhoneNumberOrdersT>(value)); return *this;}
    template<typename PhoneNumberOrdersT = PhoneNumberOrder>
    ListPhoneNumberOrdersResult& AddPhoneNumberOrders(PhoneNumberOrdersT&& value) { m_phoneNumberOrdersHasBeenSet = true; m_phoneNumberOrders.emplace_back(std::forward<PhoneNumberOrdersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPhoneNumberOrdersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPhoneNumberOrdersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PhoneNumberOrder> m_phoneNumberOrders;
    bool m_phoneNumberOrdersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
