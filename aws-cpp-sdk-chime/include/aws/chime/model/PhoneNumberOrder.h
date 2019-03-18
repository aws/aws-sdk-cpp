/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/PhoneNumberProductType.h>
#include <aws/chime/model/PhoneNumberOrderStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime/model/OrderedPhoneNumber.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The details of a phone number order created for Amazon Chime.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PhoneNumberOrder">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API PhoneNumberOrder
  {
  public:
    PhoneNumberOrder();
    PhoneNumberOrder(Aws::Utils::Json::JsonView jsonValue);
    PhoneNumberOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The phone number order ID.</p>
     */
    inline const Aws::String& GetPhoneNumberOrderId() const{ return m_phoneNumberOrderId; }

    /**
     * <p>The phone number order ID.</p>
     */
    inline bool PhoneNumberOrderIdHasBeenSet() const { return m_phoneNumberOrderIdHasBeenSet; }

    /**
     * <p>The phone number order ID.</p>
     */
    inline void SetPhoneNumberOrderId(const Aws::String& value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId = value; }

    /**
     * <p>The phone number order ID.</p>
     */
    inline void SetPhoneNumberOrderId(Aws::String&& value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId = std::move(value); }

    /**
     * <p>The phone number order ID.</p>
     */
    inline void SetPhoneNumberOrderId(const char* value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId.assign(value); }

    /**
     * <p>The phone number order ID.</p>
     */
    inline PhoneNumberOrder& WithPhoneNumberOrderId(const Aws::String& value) { SetPhoneNumberOrderId(value); return *this;}

    /**
     * <p>The phone number order ID.</p>
     */
    inline PhoneNumberOrder& WithPhoneNumberOrderId(Aws::String&& value) { SetPhoneNumberOrderId(std::move(value)); return *this;}

    /**
     * <p>The phone number order ID.</p>
     */
    inline PhoneNumberOrder& WithPhoneNumberOrderId(const char* value) { SetPhoneNumberOrderId(value); return *this;}


    /**
     * <p>The phone number order product type.</p>
     */
    inline const PhoneNumberProductType& GetProductType() const{ return m_productType; }

    /**
     * <p>The phone number order product type.</p>
     */
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    /**
     * <p>The phone number order product type.</p>
     */
    inline void SetProductType(const PhoneNumberProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    /**
     * <p>The phone number order product type.</p>
     */
    inline void SetProductType(PhoneNumberProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    /**
     * <p>The phone number order product type.</p>
     */
    inline PhoneNumberOrder& WithProductType(const PhoneNumberProductType& value) { SetProductType(value); return *this;}

    /**
     * <p>The phone number order product type.</p>
     */
    inline PhoneNumberOrder& WithProductType(PhoneNumberProductType&& value) { SetProductType(std::move(value)); return *this;}


    /**
     * <p>The status of the phone number order.</p>
     */
    inline const PhoneNumberOrderStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the phone number order.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the phone number order.</p>
     */
    inline void SetStatus(const PhoneNumberOrderStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the phone number order.</p>
     */
    inline void SetStatus(PhoneNumberOrderStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the phone number order.</p>
     */
    inline PhoneNumberOrder& WithStatus(const PhoneNumberOrderStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the phone number order.</p>
     */
    inline PhoneNumberOrder& WithStatus(PhoneNumberOrderStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ordered phone number details, such as the phone number in E.164 format
     * and the phone number status.</p>
     */
    inline const Aws::Vector<OrderedPhoneNumber>& GetOrderedPhoneNumbers() const{ return m_orderedPhoneNumbers; }

    /**
     * <p>The ordered phone number details, such as the phone number in E.164 format
     * and the phone number status.</p>
     */
    inline bool OrderedPhoneNumbersHasBeenSet() const { return m_orderedPhoneNumbersHasBeenSet; }

    /**
     * <p>The ordered phone number details, such as the phone number in E.164 format
     * and the phone number status.</p>
     */
    inline void SetOrderedPhoneNumbers(const Aws::Vector<OrderedPhoneNumber>& value) { m_orderedPhoneNumbersHasBeenSet = true; m_orderedPhoneNumbers = value; }

    /**
     * <p>The ordered phone number details, such as the phone number in E.164 format
     * and the phone number status.</p>
     */
    inline void SetOrderedPhoneNumbers(Aws::Vector<OrderedPhoneNumber>&& value) { m_orderedPhoneNumbersHasBeenSet = true; m_orderedPhoneNumbers = std::move(value); }

    /**
     * <p>The ordered phone number details, such as the phone number in E.164 format
     * and the phone number status.</p>
     */
    inline PhoneNumberOrder& WithOrderedPhoneNumbers(const Aws::Vector<OrderedPhoneNumber>& value) { SetOrderedPhoneNumbers(value); return *this;}

    /**
     * <p>The ordered phone number details, such as the phone number in E.164 format
     * and the phone number status.</p>
     */
    inline PhoneNumberOrder& WithOrderedPhoneNumbers(Aws::Vector<OrderedPhoneNumber>&& value) { SetOrderedPhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>The ordered phone number details, such as the phone number in E.164 format
     * and the phone number status.</p>
     */
    inline PhoneNumberOrder& AddOrderedPhoneNumbers(const OrderedPhoneNumber& value) { m_orderedPhoneNumbersHasBeenSet = true; m_orderedPhoneNumbers.push_back(value); return *this; }

    /**
     * <p>The ordered phone number details, such as the phone number in E.164 format
     * and the phone number status.</p>
     */
    inline PhoneNumberOrder& AddOrderedPhoneNumbers(OrderedPhoneNumber&& value) { m_orderedPhoneNumbersHasBeenSet = true; m_orderedPhoneNumbers.push_back(std::move(value)); return *this; }


    /**
     * <p>The phone number order creation timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The phone number order creation timestamp, in ISO 8601 format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The phone number order creation timestamp, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The phone number order creation timestamp, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The phone number order creation timestamp, in ISO 8601 format.</p>
     */
    inline PhoneNumberOrder& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The phone number order creation timestamp, in ISO 8601 format.</p>
     */
    inline PhoneNumberOrder& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The updated phone number order timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The updated phone number order timestamp, in ISO 8601 format.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The updated phone number order timestamp, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The updated phone number order timestamp, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The updated phone number order timestamp, in ISO 8601 format.</p>
     */
    inline PhoneNumberOrder& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The updated phone number order timestamp, in ISO 8601 format.</p>
     */
    inline PhoneNumberOrder& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_phoneNumberOrderId;
    bool m_phoneNumberOrderIdHasBeenSet;

    PhoneNumberProductType m_productType;
    bool m_productTypeHasBeenSet;

    PhoneNumberOrderStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<OrderedPhoneNumber> m_orderedPhoneNumbers;
    bool m_orderedPhoneNumbersHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
