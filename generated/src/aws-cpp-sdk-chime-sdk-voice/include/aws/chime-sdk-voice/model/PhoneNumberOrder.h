/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/PhoneNumberProductType.h>
#include <aws/chime-sdk-voice/model/PhoneNumberOrderStatus.h>
#include <aws/chime-sdk-voice/model/PhoneNumberOrderType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-voice/model/OrderedPhoneNumber.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  class PhoneNumberOrder
  {
  public:
    AWS_CHIMESDKVOICE_API PhoneNumberOrder();
    AWS_CHIMESDKVOICE_API PhoneNumberOrder(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API PhoneNumberOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetPhoneNumberOrderId() const{ return m_phoneNumberOrderId; }

    
    inline bool PhoneNumberOrderIdHasBeenSet() const { return m_phoneNumberOrderIdHasBeenSet; }

    
    inline void SetPhoneNumberOrderId(const Aws::String& value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId = value; }

    
    inline void SetPhoneNumberOrderId(Aws::String&& value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId = std::move(value); }

    
    inline void SetPhoneNumberOrderId(const char* value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId.assign(value); }

    
    inline PhoneNumberOrder& WithPhoneNumberOrderId(const Aws::String& value) { SetPhoneNumberOrderId(value); return *this;}

    
    inline PhoneNumberOrder& WithPhoneNumberOrderId(Aws::String&& value) { SetPhoneNumberOrderId(std::move(value)); return *this;}

    
    inline PhoneNumberOrder& WithPhoneNumberOrderId(const char* value) { SetPhoneNumberOrderId(value); return *this;}


    
    inline const PhoneNumberProductType& GetProductType() const{ return m_productType; }

    
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    
    inline void SetProductType(const PhoneNumberProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    
    inline void SetProductType(PhoneNumberProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    
    inline PhoneNumberOrder& WithProductType(const PhoneNumberProductType& value) { SetProductType(value); return *this;}

    
    inline PhoneNumberOrder& WithProductType(PhoneNumberProductType&& value) { SetProductType(std::move(value)); return *this;}


    
    inline const PhoneNumberOrderStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const PhoneNumberOrderStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(PhoneNumberOrderStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline PhoneNumberOrder& WithStatus(const PhoneNumberOrderStatus& value) { SetStatus(value); return *this;}

    
    inline PhoneNumberOrder& WithStatus(PhoneNumberOrderStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const PhoneNumberOrderType& GetOrderType() const{ return m_orderType; }

    
    inline bool OrderTypeHasBeenSet() const { return m_orderTypeHasBeenSet; }

    
    inline void SetOrderType(const PhoneNumberOrderType& value) { m_orderTypeHasBeenSet = true; m_orderType = value; }

    
    inline void SetOrderType(PhoneNumberOrderType&& value) { m_orderTypeHasBeenSet = true; m_orderType = std::move(value); }

    
    inline PhoneNumberOrder& WithOrderType(const PhoneNumberOrderType& value) { SetOrderType(value); return *this;}

    
    inline PhoneNumberOrder& WithOrderType(PhoneNumberOrderType&& value) { SetOrderType(std::move(value)); return *this;}


    
    inline const Aws::Vector<OrderedPhoneNumber>& GetOrderedPhoneNumbers() const{ return m_orderedPhoneNumbers; }

    
    inline bool OrderedPhoneNumbersHasBeenSet() const { return m_orderedPhoneNumbersHasBeenSet; }

    
    inline void SetOrderedPhoneNumbers(const Aws::Vector<OrderedPhoneNumber>& value) { m_orderedPhoneNumbersHasBeenSet = true; m_orderedPhoneNumbers = value; }

    
    inline void SetOrderedPhoneNumbers(Aws::Vector<OrderedPhoneNumber>&& value) { m_orderedPhoneNumbersHasBeenSet = true; m_orderedPhoneNumbers = std::move(value); }

    
    inline PhoneNumberOrder& WithOrderedPhoneNumbers(const Aws::Vector<OrderedPhoneNumber>& value) { SetOrderedPhoneNumbers(value); return *this;}

    
    inline PhoneNumberOrder& WithOrderedPhoneNumbers(Aws::Vector<OrderedPhoneNumber>&& value) { SetOrderedPhoneNumbers(std::move(value)); return *this;}

    
    inline PhoneNumberOrder& AddOrderedPhoneNumbers(const OrderedPhoneNumber& value) { m_orderedPhoneNumbersHasBeenSet = true; m_orderedPhoneNumbers.push_back(value); return *this; }

    
    inline PhoneNumberOrder& AddOrderedPhoneNumbers(OrderedPhoneNumber&& value) { m_orderedPhoneNumbersHasBeenSet = true; m_orderedPhoneNumbers.push_back(std::move(value)); return *this; }


    
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    
    inline PhoneNumberOrder& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    
    inline PhoneNumberOrder& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    
    inline PhoneNumberOrder& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    
    inline PhoneNumberOrder& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_phoneNumberOrderId;
    bool m_phoneNumberOrderIdHasBeenSet = false;

    PhoneNumberProductType m_productType;
    bool m_productTypeHasBeenSet = false;

    PhoneNumberOrderStatus m_status;
    bool m_statusHasBeenSet = false;

    PhoneNumberOrderType m_orderType;
    bool m_orderTypeHasBeenSet = false;

    Aws::Vector<OrderedPhoneNumber> m_orderedPhoneNumbers;
    bool m_orderedPhoneNumbersHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
