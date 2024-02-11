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
    AWS_CUSTOMERPROFILES_API AttributeTypesSelector();
    AWS_CUSTOMERPROFILES_API AttributeTypesSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AttributeTypesSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configures the <code>AttributeMatchingModel</code>, you can either choose
     * <code>ONE_TO_ONE</code> or <code>MANY_TO_MANY</code>.</p>
     */
    inline const AttributeMatchingModel& GetAttributeMatchingModel() const{ return m_attributeMatchingModel; }

    /**
     * <p>Configures the <code>AttributeMatchingModel</code>, you can either choose
     * <code>ONE_TO_ONE</code> or <code>MANY_TO_MANY</code>.</p>
     */
    inline bool AttributeMatchingModelHasBeenSet() const { return m_attributeMatchingModelHasBeenSet; }

    /**
     * <p>Configures the <code>AttributeMatchingModel</code>, you can either choose
     * <code>ONE_TO_ONE</code> or <code>MANY_TO_MANY</code>.</p>
     */
    inline void SetAttributeMatchingModel(const AttributeMatchingModel& value) { m_attributeMatchingModelHasBeenSet = true; m_attributeMatchingModel = value; }

    /**
     * <p>Configures the <code>AttributeMatchingModel</code>, you can either choose
     * <code>ONE_TO_ONE</code> or <code>MANY_TO_MANY</code>.</p>
     */
    inline void SetAttributeMatchingModel(AttributeMatchingModel&& value) { m_attributeMatchingModelHasBeenSet = true; m_attributeMatchingModel = std::move(value); }

    /**
     * <p>Configures the <code>AttributeMatchingModel</code>, you can either choose
     * <code>ONE_TO_ONE</code> or <code>MANY_TO_MANY</code>.</p>
     */
    inline AttributeTypesSelector& WithAttributeMatchingModel(const AttributeMatchingModel& value) { SetAttributeMatchingModel(value); return *this;}

    /**
     * <p>Configures the <code>AttributeMatchingModel</code>, you can either choose
     * <code>ONE_TO_ONE</code> or <code>MANY_TO_MANY</code>.</p>
     */
    inline AttributeTypesSelector& WithAttributeMatchingModel(AttributeMatchingModel&& value) { SetAttributeMatchingModel(std::move(value)); return *this;}


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
    inline const Aws::Vector<Aws::String>& GetAddress() const{ return m_address; }

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
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

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
    inline void SetAddress(const Aws::Vector<Aws::String>& value) { m_addressHasBeenSet = true; m_address = value; }

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
    inline void SetAddress(Aws::Vector<Aws::String>&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

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
    inline AttributeTypesSelector& WithAddress(const Aws::Vector<Aws::String>& value) { SetAddress(value); return *this;}

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
    inline AttributeTypesSelector& WithAddress(Aws::Vector<Aws::String>&& value) { SetAddress(std::move(value)); return *this;}

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
    inline AttributeTypesSelector& AddAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address.push_back(value); return *this; }

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
    inline AttributeTypesSelector& AddAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address.push_back(std::move(value)); return *this; }

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
    inline AttributeTypesSelector& AddAddress(const char* value) { m_addressHasBeenSet = true; m_address.push_back(value); return *this; }


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
    inline const Aws::Vector<Aws::String>& GetPhoneNumber() const{ return m_phoneNumber; }

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
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

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
    inline void SetPhoneNumber(const Aws::Vector<Aws::String>& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

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
    inline void SetPhoneNumber(Aws::Vector<Aws::String>&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

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
    inline AttributeTypesSelector& WithPhoneNumber(const Aws::Vector<Aws::String>& value) { SetPhoneNumber(value); return *this;}

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
    inline AttributeTypesSelector& WithPhoneNumber(Aws::Vector<Aws::String>&& value) { SetPhoneNumber(std::move(value)); return *this;}

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
    inline AttributeTypesSelector& AddPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.push_back(value); return *this; }

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
    inline AttributeTypesSelector& AddPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.push_back(std::move(value)); return *this; }

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
    inline AttributeTypesSelector& AddPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.push_back(value); return *this; }


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
    inline const Aws::Vector<Aws::String>& GetEmailAddress() const{ return m_emailAddress; }

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
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

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
    inline void SetEmailAddress(const Aws::Vector<Aws::String>& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

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
    inline void SetEmailAddress(Aws::Vector<Aws::String>&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

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
    inline AttributeTypesSelector& WithEmailAddress(const Aws::Vector<Aws::String>& value) { SetEmailAddress(value); return *this;}

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
    inline AttributeTypesSelector& WithEmailAddress(Aws::Vector<Aws::String>&& value) { SetEmailAddress(std::move(value)); return *this;}

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
    inline AttributeTypesSelector& AddEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress.push_back(value); return *this; }

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
    inline AttributeTypesSelector& AddEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress.push_back(std::move(value)); return *this; }

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
    inline AttributeTypesSelector& AddEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.push_back(value); return *this; }

  private:

    AttributeMatchingModel m_attributeMatchingModel;
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
