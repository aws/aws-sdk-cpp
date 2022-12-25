/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class AssociateOriginationIdentityRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API AssociateOriginationIdentityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateOriginationIdentity"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The pool to update with the new Identity. This value can be either the PoolId
     * or PoolArn, and you can find these values using <a>DescribePools</a>.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The pool to update with the new Identity. This value can be either the PoolId
     * or PoolArn, and you can find these values using <a>DescribePools</a>.</p>
     */
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }

    /**
     * <p>The pool to update with the new Identity. This value can be either the PoolId
     * or PoolArn, and you can find these values using <a>DescribePools</a>.</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }

    /**
     * <p>The pool to update with the new Identity. This value can be either the PoolId
     * or PoolArn, and you can find these values using <a>DescribePools</a>.</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }

    /**
     * <p>The pool to update with the new Identity. This value can be either the PoolId
     * or PoolArn, and you can find these values using <a>DescribePools</a>.</p>
     */
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }

    /**
     * <p>The pool to update with the new Identity. This value can be either the PoolId
     * or PoolArn, and you can find these values using <a>DescribePools</a>.</p>
     */
    inline AssociateOriginationIdentityRequest& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The pool to update with the new Identity. This value can be either the PoolId
     * or PoolArn, and you can find these values using <a>DescribePools</a>.</p>
     */
    inline AssociateOriginationIdentityRequest& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The pool to update with the new Identity. This value can be either the PoolId
     * or PoolArn, and you can find these values using <a>DescribePools</a>.</p>
     */
    inline AssociateOriginationIdentityRequest& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>The origination identity to use, such as PhoneNumberId, PhoneNumberArn,
     * SenderId, or SenderIdArn. You can use <a>DescribePhoneNumbers</a> to find the
     * values for PhoneNumberId and PhoneNumberArn, while <a>DescribeSenderIds</a> can
     * be used to get the values for SenderId and SenderIdArn.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }

    /**
     * <p>The origination identity to use, such as PhoneNumberId, PhoneNumberArn,
     * SenderId, or SenderIdArn. You can use <a>DescribePhoneNumbers</a> to find the
     * values for PhoneNumberId and PhoneNumberArn, while <a>DescribeSenderIds</a> can
     * be used to get the values for SenderId and SenderIdArn.</p>
     */
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }

    /**
     * <p>The origination identity to use, such as PhoneNumberId, PhoneNumberArn,
     * SenderId, or SenderIdArn. You can use <a>DescribePhoneNumbers</a> to find the
     * values for PhoneNumberId and PhoneNumberArn, while <a>DescribeSenderIds</a> can
     * be used to get the values for SenderId and SenderIdArn.</p>
     */
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = value; }

    /**
     * <p>The origination identity to use, such as PhoneNumberId, PhoneNumberArn,
     * SenderId, or SenderIdArn. You can use <a>DescribePhoneNumbers</a> to find the
     * values for PhoneNumberId and PhoneNumberArn, while <a>DescribeSenderIds</a> can
     * be used to get the values for SenderId and SenderIdArn.</p>
     */
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::move(value); }

    /**
     * <p>The origination identity to use, such as PhoneNumberId, PhoneNumberArn,
     * SenderId, or SenderIdArn. You can use <a>DescribePhoneNumbers</a> to find the
     * values for PhoneNumberId and PhoneNumberArn, while <a>DescribeSenderIds</a> can
     * be used to get the values for SenderId and SenderIdArn.</p>
     */
    inline void SetOriginationIdentity(const char* value) { m_originationIdentityHasBeenSet = true; m_originationIdentity.assign(value); }

    /**
     * <p>The origination identity to use, such as PhoneNumberId, PhoneNumberArn,
     * SenderId, or SenderIdArn. You can use <a>DescribePhoneNumbers</a> to find the
     * values for PhoneNumberId and PhoneNumberArn, while <a>DescribeSenderIds</a> can
     * be used to get the values for SenderId and SenderIdArn.</p>
     */
    inline AssociateOriginationIdentityRequest& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}

    /**
     * <p>The origination identity to use, such as PhoneNumberId, PhoneNumberArn,
     * SenderId, or SenderIdArn. You can use <a>DescribePhoneNumbers</a> to find the
     * values for PhoneNumberId and PhoneNumberArn, while <a>DescribeSenderIds</a> can
     * be used to get the values for SenderId and SenderIdArn.</p>
     */
    inline AssociateOriginationIdentityRequest& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}

    /**
     * <p>The origination identity to use, such as PhoneNumberId, PhoneNumberArn,
     * SenderId, or SenderIdArn. You can use <a>DescribePhoneNumbers</a> to find the
     * values for PhoneNumberId and PhoneNumberArn, while <a>DescribeSenderIds</a> can
     * be used to get the values for SenderId and SenderIdArn.</p>
     */
    inline AssociateOriginationIdentityRequest& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}


    /**
     * <p>The new two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region of the origination identity.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }

    /**
     * <p>The new two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region of the origination identity.</p>
     */
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }

    /**
     * <p>The new two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region of the origination identity.</p>
     */
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = value; }

    /**
     * <p>The new two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region of the origination identity.</p>
     */
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::move(value); }

    /**
     * <p>The new two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region of the origination identity.</p>
     */
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode.assign(value); }

    /**
     * <p>The new two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region of the origination identity.</p>
     */
    inline AssociateOriginationIdentityRequest& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}

    /**
     * <p>The new two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region of the origination identity.</p>
     */
    inline AssociateOriginationIdentityRequest& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}

    /**
     * <p>The new two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region of the origination identity.</p>
     */
    inline AssociateOriginationIdentityRequest& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline AssociateOriginationIdentityRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline AssociateOriginationIdentityRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline AssociateOriginationIdentityRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
