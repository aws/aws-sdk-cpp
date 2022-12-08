/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class CreateSipMediaApplicationCallRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API CreateSipMediaApplicationCallRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSipMediaApplicationCall"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The phone number that a user calls from. This is a phone number in your
     * Amazon Chime phone number inventory.</p>
     */
    inline const Aws::String& GetFromPhoneNumber() const{ return m_fromPhoneNumber; }

    /**
     * <p>The phone number that a user calls from. This is a phone number in your
     * Amazon Chime phone number inventory.</p>
     */
    inline bool FromPhoneNumberHasBeenSet() const { return m_fromPhoneNumberHasBeenSet; }

    /**
     * <p>The phone number that a user calls from. This is a phone number in your
     * Amazon Chime phone number inventory.</p>
     */
    inline void SetFromPhoneNumber(const Aws::String& value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber = value; }

    /**
     * <p>The phone number that a user calls from. This is a phone number in your
     * Amazon Chime phone number inventory.</p>
     */
    inline void SetFromPhoneNumber(Aws::String&& value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber = std::move(value); }

    /**
     * <p>The phone number that a user calls from. This is a phone number in your
     * Amazon Chime phone number inventory.</p>
     */
    inline void SetFromPhoneNumber(const char* value) { m_fromPhoneNumberHasBeenSet = true; m_fromPhoneNumber.assign(value); }

    /**
     * <p>The phone number that a user calls from. This is a phone number in your
     * Amazon Chime phone number inventory.</p>
     */
    inline CreateSipMediaApplicationCallRequest& WithFromPhoneNumber(const Aws::String& value) { SetFromPhoneNumber(value); return *this;}

    /**
     * <p>The phone number that a user calls from. This is a phone number in your
     * Amazon Chime phone number inventory.</p>
     */
    inline CreateSipMediaApplicationCallRequest& WithFromPhoneNumber(Aws::String&& value) { SetFromPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number that a user calls from. This is a phone number in your
     * Amazon Chime phone number inventory.</p>
     */
    inline CreateSipMediaApplicationCallRequest& WithFromPhoneNumber(const char* value) { SetFromPhoneNumber(value); return *this;}


    /**
     * <p>The phone number that the service should call.</p>
     */
    inline const Aws::String& GetToPhoneNumber() const{ return m_toPhoneNumber; }

    /**
     * <p>The phone number that the service should call.</p>
     */
    inline bool ToPhoneNumberHasBeenSet() const { return m_toPhoneNumberHasBeenSet; }

    /**
     * <p>The phone number that the service should call.</p>
     */
    inline void SetToPhoneNumber(const Aws::String& value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber = value; }

    /**
     * <p>The phone number that the service should call.</p>
     */
    inline void SetToPhoneNumber(Aws::String&& value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber = std::move(value); }

    /**
     * <p>The phone number that the service should call.</p>
     */
    inline void SetToPhoneNumber(const char* value) { m_toPhoneNumberHasBeenSet = true; m_toPhoneNumber.assign(value); }

    /**
     * <p>The phone number that the service should call.</p>
     */
    inline CreateSipMediaApplicationCallRequest& WithToPhoneNumber(const Aws::String& value) { SetToPhoneNumber(value); return *this;}

    /**
     * <p>The phone number that the service should call.</p>
     */
    inline CreateSipMediaApplicationCallRequest& WithToPhoneNumber(Aws::String&& value) { SetToPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number that the service should call.</p>
     */
    inline CreateSipMediaApplicationCallRequest& WithToPhoneNumber(const char* value) { SetToPhoneNumber(value); return *this;}


    /**
     * <p>The ID of the SIP media application.</p>
     */
    inline const Aws::String& GetSipMediaApplicationId() const{ return m_sipMediaApplicationId; }

    /**
     * <p>The ID of the SIP media application.</p>
     */
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }

    /**
     * <p>The ID of the SIP media application.</p>
     */
    inline void SetSipMediaApplicationId(const Aws::String& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = value; }

    /**
     * <p>The ID of the SIP media application.</p>
     */
    inline void SetSipMediaApplicationId(Aws::String&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::move(value); }

    /**
     * <p>The ID of the SIP media application.</p>
     */
    inline void SetSipMediaApplicationId(const char* value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId.assign(value); }

    /**
     * <p>The ID of the SIP media application.</p>
     */
    inline CreateSipMediaApplicationCallRequest& WithSipMediaApplicationId(const Aws::String& value) { SetSipMediaApplicationId(value); return *this;}

    /**
     * <p>The ID of the SIP media application.</p>
     */
    inline CreateSipMediaApplicationCallRequest& WithSipMediaApplicationId(Aws::String&& value) { SetSipMediaApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SIP media application.</p>
     */
    inline CreateSipMediaApplicationCallRequest& WithSipMediaApplicationId(const char* value) { SetSipMediaApplicationId(value); return *this;}


    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSipHeaders() const{ return m_sipHeaders; }

    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline bool SipHeadersHasBeenSet() const { return m_sipHeadersHasBeenSet; }

    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline void SetSipHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders = value; }

    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline void SetSipHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders = std::move(value); }

    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline CreateSipMediaApplicationCallRequest& WithSipHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetSipHeaders(value); return *this;}

    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline CreateSipMediaApplicationCallRequest& WithSipHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetSipHeaders(std::move(value)); return *this;}

    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(const Aws::String& key, const Aws::String& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(key, value); return *this; }

    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(Aws::String&& key, const Aws::String& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(const Aws::String& key, Aws::String&& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(Aws::String&& key, Aws::String&& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(const char* key, Aws::String&& value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(Aws::String&& key, const char* value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>The SIP headers added to an outbound call leg.</p>
     */
    inline CreateSipMediaApplicationCallRequest& AddSipHeaders(const char* key, const char* value) { m_sipHeadersHasBeenSet = true; m_sipHeaders.emplace(key, value); return *this; }

  private:

    Aws::String m_fromPhoneNumber;
    bool m_fromPhoneNumberHasBeenSet = false;

    Aws::String m_toPhoneNumber;
    bool m_toPhoneNumberHasBeenSet = false;

    Aws::String m_sipMediaApplicationId;
    bool m_sipMediaApplicationIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sipHeaders;
    bool m_sipHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
