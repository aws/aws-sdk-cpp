/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
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
  class CreatePhoneNumberOrderResult
  {
  public:
    AWS_CHIMESDKVOICE_API CreatePhoneNumberOrderResult();
    AWS_CHIMESDKVOICE_API CreatePhoneNumberOrderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API CreatePhoneNumberOrderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const PhoneNumberOrder& GetPhoneNumberOrder() const{ return m_phoneNumberOrder; }

    
    inline void SetPhoneNumberOrder(const PhoneNumberOrder& value) { m_phoneNumberOrder = value; }

    
    inline void SetPhoneNumberOrder(PhoneNumberOrder&& value) { m_phoneNumberOrder = std::move(value); }

    
    inline CreatePhoneNumberOrderResult& WithPhoneNumberOrder(const PhoneNumberOrder& value) { SetPhoneNumberOrder(value); return *this;}

    
    inline CreatePhoneNumberOrderResult& WithPhoneNumberOrder(PhoneNumberOrder&& value) { SetPhoneNumberOrder(std::move(value)); return *this;}

  private:

    PhoneNumberOrder m_phoneNumberOrder;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
