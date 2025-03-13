/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/PhoneNumberOrder.h>
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
  class GetPhoneNumberOrderResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetPhoneNumberOrderResult() = default;
    AWS_CHIMESDKVOICE_API GetPhoneNumberOrderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetPhoneNumberOrderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The phone number order details.</p>
     */
    inline const PhoneNumberOrder& GetPhoneNumberOrder() const { return m_phoneNumberOrder; }
    template<typename PhoneNumberOrderT = PhoneNumberOrder>
    void SetPhoneNumberOrder(PhoneNumberOrderT&& value) { m_phoneNumberOrderHasBeenSet = true; m_phoneNumberOrder = std::forward<PhoneNumberOrderT>(value); }
    template<typename PhoneNumberOrderT = PhoneNumberOrder>
    GetPhoneNumberOrderResult& WithPhoneNumberOrder(PhoneNumberOrderT&& value) { SetPhoneNumberOrder(std::forward<PhoneNumberOrderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPhoneNumberOrderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PhoneNumberOrder m_phoneNumberOrder;
    bool m_phoneNumberOrderHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
