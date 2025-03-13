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
    AWS_CHIMESDKVOICE_API CreatePhoneNumberOrderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePhoneNumberOrder"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


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

    ///@{
    /**
     * <p>Specifies the name assigned to one or more phone numbers.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreatePhoneNumberOrderRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    PhoneNumberProductType m_productType{PhoneNumberProductType::NOT_SET};
    bool m_productTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_e164PhoneNumbers;
    bool m_e164PhoneNumbersHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
