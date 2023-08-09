/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/chime-sdk-voice/model/PhoneNumberProductType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class CreatePhoneNumberOrderRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API CreatePhoneNumberOrderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePhoneNumberOrder"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The phone number product type.</p>
     */
    inline const PhoneNumberProductType& GetProductType() const{ return m_productType; }

    /**
     * <p>The phone number product type.</p>
     */
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    /**
     * <p>The phone number product type.</p>
     */
    inline void SetProductType(const PhoneNumberProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    /**
     * <p>The phone number product type.</p>
     */
    inline void SetProductType(PhoneNumberProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    /**
     * <p>The phone number product type.</p>
     */
    inline CreatePhoneNumberOrderRequest& WithProductType(const PhoneNumberProductType& value) { SetProductType(value); return *this;}

    /**
     * <p>The phone number product type.</p>
     */
    inline CreatePhoneNumberOrderRequest& WithProductType(PhoneNumberProductType&& value) { SetProductType(std::move(value)); return *this;}


    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetE164PhoneNumbers() const{ return m_e164PhoneNumbers; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline bool E164PhoneNumbersHasBeenSet() const { return m_e164PhoneNumbersHasBeenSet; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline void SetE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = value; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline void SetE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = std::move(value); }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline CreatePhoneNumberOrderRequest& WithE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { SetE164PhoneNumbers(value); return *this;}

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline CreatePhoneNumberOrderRequest& WithE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { SetE164PhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline CreatePhoneNumberOrderRequest& AddE164PhoneNumbers(const Aws::String& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(value); return *this; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline CreatePhoneNumberOrderRequest& AddE164PhoneNumbers(Aws::String&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(std::move(value)); return *this; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline CreatePhoneNumberOrderRequest& AddE164PhoneNumbers(const char* value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(value); return *this; }


    /**
     * <p>Specifies the name assigned to one or more phone numbers.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the name assigned to one or more phone numbers.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the name assigned to one or more phone numbers.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the name assigned to one or more phone numbers.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the name assigned to one or more phone numbers.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the name assigned to one or more phone numbers.</p>
     */
    inline CreatePhoneNumberOrderRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name assigned to one or more phone numbers.</p>
     */
    inline CreatePhoneNumberOrderRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name assigned to one or more phone numbers.</p>
     */
    inline CreatePhoneNumberOrderRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    PhoneNumberProductType m_productType;
    bool m_productTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_e164PhoneNumbers;
    bool m_e164PhoneNumbersHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
