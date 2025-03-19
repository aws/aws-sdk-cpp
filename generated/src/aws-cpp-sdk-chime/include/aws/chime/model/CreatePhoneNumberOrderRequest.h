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
    AWS_CHIME_API CreatePhoneNumberOrderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePhoneNumberOrder"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The phone number product type.</p>
     */
    inline PhoneNumberProductType GetProductType() const { return m_productType; }
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }
    inline void SetProductType(PhoneNumberProductType value) { m_productTypeHasBeenSet = true; m_productType = value; }
    inline CreatePhoneNumberOrderRequest& WithProductType(PhoneNumberProductType value) { SetProductType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetE164PhoneNumbers() const { return m_e164PhoneNumbers; }
    inline bool E164PhoneNumbersHasBeenSet() const { return m_e164PhoneNumbersHasBeenSet; }
    template<typename E164PhoneNumbersT = Aws::Vector<Aws::String>>
    void SetE164PhoneNumbers(E164PhoneNumbersT&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = std::forward<E164PhoneNumbersT>(value); }
    template<typename E164PhoneNumbersT = Aws::Vector<Aws::String>>
    CreatePhoneNumberOrderRequest& WithE164PhoneNumbers(E164PhoneNumbersT&& value) { SetE164PhoneNumbers(std::forward<E164PhoneNumbersT>(value)); return *this;}
    template<typename E164PhoneNumbersT = Aws::String>
    CreatePhoneNumberOrderRequest& AddE164PhoneNumbers(E164PhoneNumbersT&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.emplace_back(std::forward<E164PhoneNumbersT>(value)); return *this; }
    ///@}
  private:

    PhoneNumberProductType m_productType{PhoneNumberProductType::NOT_SET};
    bool m_productTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_e164PhoneNumbers;
    bool m_e164PhoneNumbersHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
