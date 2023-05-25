/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/chime/model/PhoneNumberProductType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class CreatePhoneNumberOrderRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API CreatePhoneNumberOrderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePhoneNumberOrder"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


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

  private:

    PhoneNumberProductType m_productType;
    bool m_productTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_e164PhoneNumbers;
    bool m_e164PhoneNumbersHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
