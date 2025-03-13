/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/AttributeMatchingModel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Configuration information about the <code>AttributeTypesSelector </code>where
   * the rule-based identity resolution uses to match profiles. You can choose how
   * profiles are compared across attribute types and which attribute to use for
   * matching from each type. There are three attribute types you can configure:</p>
   * <ul> <li> <p>Email type</p> <ul> <li> <p>You can choose from <code>Email</code>,
   * <code>BusinessEmail</code>, and <code>PersonalEmail</code> </p> </li> </ul>
   * </li> <li> <p>Phone number type</p> <ul> <li> <p>You can choose from
   * <code>Phone</code>, <code>HomePhone</code>, and <code>MobilePhone</code> </p>
   * </li> </ul> </li> <li> <p>Address type</p> <ul> <li> <p>You can choose from
   * <code>Address</code>, <code>BusinessAddress</code>,
   * <code>MaillingAddress</code>, and <code>ShippingAddress</code> </p> </li> </ul>
   * </li> </ul> <p>You can either choose <code>ONE_TO_ONE</code> or
   * <code>MANY_TO_MANY</code> as the <code>AttributeMatchingModel</code>. When
   * choosing <code>MANY_TO_MANY</code>, the system can match attribute across the
   * sub-types of an attribute type. For example, if the value of the
   * <code>Email</code> field of Profile A and the value of
   * <code>BusinessEmail</code> field of Profile B matches, the two profiles are
   * matched on the Email type. When choosing <code>ONE_TO_ONE</code> the system can
   * only match if the sub-types are exact matches. For example, only when the value
   * of the <code>Email</code> field of Profile A and the value of the
   * <code>Email</code> field of Profile B matches, the two profiles are matched on
   * the Email type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AttributeTypesSelector">AWS
   * API Reference</a></p>
   */
  class AttributeTypesSelector
  {
  public:
    AWS_CUSTOMERPROFILES_API AttributeTypesSelector() = default;
    AWS_CUSTOMERPROFILES_API AttributeTypesSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AttributeTypesSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configures the <code>AttributeMatchingModel</code>, you can either choose
     * <code>ONE_TO_ONE</code> or <code>MANY_TO_MANY</code>.</p>
     */
    inline AttributeMatchingModel GetAttributeMatchingModel() const { return m_attributeMatchingModel; }
    inline bool AttributeMatchingModelHasBeenSet() const { return m_attributeMatchingModelHasBeenSet; }
    inline void SetAttributeMatchingModel(AttributeMatchingModel value) { m_attributeMatchingModelHasBeenSet = true; m_attributeMatchingModel = value; }
    inline AttributeTypesSelector& WithAttributeMatchingModel(AttributeMatchingModel value) { SetAttributeMatchingModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Address</code> type. You can choose from <code>Address</code>,
     * <code>BusinessAddress</code>, <code>MaillingAddress</code>, and
     * <code>ShippingAddress</code>.</p> <p>You only can use the Address type in the
     * <code>MatchingRule</code>. For example, if you want to match profile based on
     * <code>BusinessAddress.City</code> or <code>MaillingAddress.City</code>, you need
     * to choose the <code>BusinessAddress</code> and the <code>MaillingAddress</code>
     * to represent the Address type and specify the <code>Address.City</code> on the
     * matching rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::Vector<Aws::String>>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::Vector<Aws::String>>
    AttributeTypesSelector& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    template<typename AddressT = Aws::String>
    AttributeTypesSelector& AddAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address.emplace_back(std::forward<AddressT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>PhoneNumber</code> type. You can choose from
     * <code>PhoneNumber</code>, <code>HomePhoneNumber</code>, and
     * <code>MobilePhoneNumber</code>.</p> <p>You only can use the
     * <code>PhoneNumber</code> type in the <code>MatchingRule</code>. For example, if
     * you want to match a profile based on <code>Phone</code> or
     * <code>HomePhone</code>, you need to choose the <code>Phone</code> and the
     * <code>HomePhone</code> to represent the <code>PhoneNumber</code> type and only
     * specify the <code>PhoneNumber</code> on the matching rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::Vector<Aws::String>>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::Vector<Aws::String>>
    AttributeTypesSelector& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    template<typename PhoneNumberT = Aws::String>
    AttributeTypesSelector& AddPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.emplace_back(std::forward<PhoneNumberT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>Email</code> type. You can choose from <code>EmailAddress</code>,
     * <code>BusinessEmailAddress</code> and <code>PersonalEmailAddress</code>.</p>
     * <p>You only can use the <code>EmailAddress</code> type in the
     * <code>MatchingRule</code>. For example, if you want to match profile based on
     * <code>PersonalEmailAddress</code> or <code>BusinessEmailAddress</code>, you need
     * to choose the <code>PersonalEmailAddress</code> and the
     * <code>BusinessEmailAddress</code> to represent the <code>EmailAddress</code>
     * type and only specify the <code>EmailAddress</code> on the matching rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::Vector<Aws::String>>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::Vector<Aws::String>>
    AttributeTypesSelector& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    template<typename EmailAddressT = Aws::String>
    AttributeTypesSelector& AddEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress.emplace_back(std::forward<EmailAddressT>(value)); return *this; }
    ///@}
  private:

    AttributeMatchingModel m_attributeMatchingModel{AttributeMatchingModel::NOT_SET};
    bool m_attributeMatchingModelHasBeenSet = false;

    Aws::Vector<Aws::String> m_address;
    bool m_addressHasBeenSet = false;

    Aws::Vector<Aws::String> m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::Vector<Aws::String> m_emailAddress;
    bool m_emailAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
