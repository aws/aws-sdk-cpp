/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdatePhoneNumberRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdatePhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePhoneNumber"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline UpdatePhoneNumberRequest& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline UpdatePhoneNumberRequest& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline UpdatePhoneNumberRequest& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to.</p>
     */
    inline UpdatePhoneNumberRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to.</p>
     */
    inline UpdatePhoneNumberRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances or traffic
     * distribution groups that phone numbers are claimed to.</p>
     */
    inline UpdatePhoneNumberRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline UpdatePhoneNumberRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline UpdatePhoneNumberRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline UpdatePhoneNumberRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
