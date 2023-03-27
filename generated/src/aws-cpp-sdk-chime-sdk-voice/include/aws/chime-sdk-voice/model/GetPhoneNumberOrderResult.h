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
    AWS_CHIMESDKVOICE_API GetPhoneNumberOrderResult();
    AWS_CHIMESDKVOICE_API GetPhoneNumberOrderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetPhoneNumberOrderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The phone number order details.</p>
     */
    inline const PhoneNumberOrder& GetPhoneNumberOrder() const{ return m_phoneNumberOrder; }

    /**
     * <p>The phone number order details.</p>
     */
    inline void SetPhoneNumberOrder(const PhoneNumberOrder& value) { m_phoneNumberOrder = value; }

    /**
     * <p>The phone number order details.</p>
     */
    inline void SetPhoneNumberOrder(PhoneNumberOrder&& value) { m_phoneNumberOrder = std::move(value); }

    /**
     * <p>The phone number order details.</p>
     */
    inline GetPhoneNumberOrderResult& WithPhoneNumberOrder(const PhoneNumberOrder& value) { SetPhoneNumberOrder(value); return *this;}

    /**
     * <p>The phone number order details.</p>
     */
    inline GetPhoneNumberOrderResult& WithPhoneNumberOrder(PhoneNumberOrder&& value) { SetPhoneNumberOrder(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPhoneNumberOrderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPhoneNumberOrderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPhoneNumberOrderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PhoneNumberOrder m_phoneNumberOrder;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
