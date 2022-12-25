/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/PhoneNumberProductType.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class UpdatePhoneNumberRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API UpdatePhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePhoneNumber"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The phone number ID.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    /**
     * <p>The phone number ID.</p>
     */
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }

    /**
     * <p>The phone number ID.</p>
     */
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }

    /**
     * <p>The phone number ID.</p>
     */
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }

    /**
     * <p>The phone number ID.</p>
     */
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }

    /**
     * <p>The phone number ID.</p>
     */
    inline UpdatePhoneNumberRequest& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    /**
     * <p>The phone number ID.</p>
     */
    inline UpdatePhoneNumberRequest& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    /**
     * <p>The phone number ID.</p>
     */
    inline UpdatePhoneNumberRequest& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}


    /**
     * <p>The product type.</p>
     */
    inline const PhoneNumberProductType& GetProductType() const{ return m_productType; }

    /**
     * <p>The product type.</p>
     */
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    /**
     * <p>The product type.</p>
     */
    inline void SetProductType(const PhoneNumberProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    /**
     * <p>The product type.</p>
     */
    inline void SetProductType(PhoneNumberProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    /**
     * <p>The product type.</p>
     */
    inline UpdatePhoneNumberRequest& WithProductType(const PhoneNumberProductType& value) { SetProductType(value); return *this;}

    /**
     * <p>The product type.</p>
     */
    inline UpdatePhoneNumberRequest& WithProductType(PhoneNumberProductType&& value) { SetProductType(std::move(value)); return *this;}


    /**
     * <p>The outbound calling name associated with the phone number.</p>
     */
    inline const Aws::String& GetCallingName() const{ return m_callingName; }

    /**
     * <p>The outbound calling name associated with the phone number.</p>
     */
    inline bool CallingNameHasBeenSet() const { return m_callingNameHasBeenSet; }

    /**
     * <p>The outbound calling name associated with the phone number.</p>
     */
    inline void SetCallingName(const Aws::String& value) { m_callingNameHasBeenSet = true; m_callingName = value; }

    /**
     * <p>The outbound calling name associated with the phone number.</p>
     */
    inline void SetCallingName(Aws::String&& value) { m_callingNameHasBeenSet = true; m_callingName = std::move(value); }

    /**
     * <p>The outbound calling name associated with the phone number.</p>
     */
    inline void SetCallingName(const char* value) { m_callingNameHasBeenSet = true; m_callingName.assign(value); }

    /**
     * <p>The outbound calling name associated with the phone number.</p>
     */
    inline UpdatePhoneNumberRequest& WithCallingName(const Aws::String& value) { SetCallingName(value); return *this;}

    /**
     * <p>The outbound calling name associated with the phone number.</p>
     */
    inline UpdatePhoneNumberRequest& WithCallingName(Aws::String&& value) { SetCallingName(std::move(value)); return *this;}

    /**
     * <p>The outbound calling name associated with the phone number.</p>
     */
    inline UpdatePhoneNumberRequest& WithCallingName(const char* value) { SetCallingName(value); return *this;}

  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    PhoneNumberProductType m_productType;
    bool m_productTypeHasBeenSet = false;

    Aws::String m_callingName;
    bool m_callingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
