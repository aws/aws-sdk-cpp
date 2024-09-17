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
  class UpdatePhoneNumberMetadataRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdatePhoneNumberMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePhoneNumberMetadata"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or resource ID of the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }
    inline UpdatePhoneNumberMetadataRequest& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}
    inline UpdatePhoneNumberMetadataRequest& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}
    inline UpdatePhoneNumberMetadataRequest& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberDescription() const{ return m_phoneNumberDescription; }
    inline bool PhoneNumberDescriptionHasBeenSet() const { return m_phoneNumberDescriptionHasBeenSet; }
    inline void SetPhoneNumberDescription(const Aws::String& value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription = value; }
    inline void SetPhoneNumberDescription(Aws::String&& value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription = std::move(value); }
    inline void SetPhoneNumberDescription(const char* value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription.assign(value); }
    inline UpdatePhoneNumberMetadataRequest& WithPhoneNumberDescription(const Aws::String& value) { SetPhoneNumberDescription(value); return *this;}
    inline UpdatePhoneNumberMetadataRequest& WithPhoneNumberDescription(Aws::String&& value) { SetPhoneNumberDescription(std::move(value)); return *this;}
    inline UpdatePhoneNumberMetadataRequest& WithPhoneNumberDescription(const char* value) { SetPhoneNumberDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdatePhoneNumberMetadataRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdatePhoneNumberMetadataRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdatePhoneNumberMetadataRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    Aws::String m_phoneNumberDescription;
    bool m_phoneNumberDescriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
