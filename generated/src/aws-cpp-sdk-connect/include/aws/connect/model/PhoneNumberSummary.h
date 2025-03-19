/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PhoneNumberType.h>
#include <aws/connect/model/PhoneNumberCountryCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains summary information about a phone number for a contact
   * center.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PhoneNumberSummary">AWS
   * API Reference</a></p>
   */
  class PhoneNumberSummary
  {
  public:
    AWS_CONNECT_API PhoneNumberSummary() = default;
    AWS_CONNECT_API PhoneNumberSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PhoneNumberSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the phone number.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PhoneNumberSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PhoneNumberSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    PhoneNumberSummary& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of phone number.</p>
     */
    inline PhoneNumberType GetPhoneNumberType() const { return m_phoneNumberType; }
    inline bool PhoneNumberTypeHasBeenSet() const { return m_phoneNumberTypeHasBeenSet; }
    inline void SetPhoneNumberType(PhoneNumberType value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = value; }
    inline PhoneNumberSummary& WithPhoneNumberType(PhoneNumberType value) { SetPhoneNumberType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO country code.</p>
     */
    inline PhoneNumberCountryCode GetPhoneNumberCountryCode() const { return m_phoneNumberCountryCode; }
    inline bool PhoneNumberCountryCodeHasBeenSet() const { return m_phoneNumberCountryCodeHasBeenSet; }
    inline void SetPhoneNumberCountryCode(PhoneNumberCountryCode value) { m_phoneNumberCountryCodeHasBeenSet = true; m_phoneNumberCountryCode = value; }
    inline PhoneNumberSummary& WithPhoneNumberCountryCode(PhoneNumberCountryCode value) { SetPhoneNumberCountryCode(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    PhoneNumberType m_phoneNumberType{PhoneNumberType::NOT_SET};
    bool m_phoneNumberTypeHasBeenSet = false;

    PhoneNumberCountryCode m_phoneNumberCountryCode{PhoneNumberCountryCode::NOT_SET};
    bool m_phoneNumberCountryCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
