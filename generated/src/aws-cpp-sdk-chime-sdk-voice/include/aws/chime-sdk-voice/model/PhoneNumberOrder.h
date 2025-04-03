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

  /**
   * <p>The details of an Amazon Chime SDK phone number order.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/PhoneNumberOrder">AWS
   * API Reference</a></p>
   */
  class PhoneNumberOrder
  {
  public:
    AWS_CHIMESDKVOICE_API PhoneNumberOrder() = default;
    AWS_CHIMESDKVOICE_API PhoneNumberOrder(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API PhoneNumberOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the phone order.</p>
     */
    inline const Aws::String& GetPhoneNumberOrderId() const { return m_phoneNumberOrderId; }
    inline bool PhoneNumberOrderIdHasBeenSet() const { return m_phoneNumberOrderIdHasBeenSet; }
    template<typename PhoneNumberOrderIdT = Aws::String>
    void SetPhoneNumberOrderId(PhoneNumberOrderIdT&& value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId = std::forward<PhoneNumberOrderIdT>(value); }
    template<typename PhoneNumberOrderIdT = Aws::String>
    PhoneNumberOrder& WithPhoneNumberOrderId(PhoneNumberOrderIdT&& value) { SetPhoneNumberOrderId(std::forward<PhoneNumberOrderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number order product type.</p>
     */
    inline PhoneNumberProductType GetProductType() const { return m_productType; }
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }
    inline void SetProductType(PhoneNumberProductType value) { m_productTypeHasBeenSet = true; m_productType = value; }
    inline PhoneNumberOrder& WithProductType(PhoneNumberProductType value) { SetProductType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the phone number order.</p>
     */
    inline PhoneNumberOrderStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PhoneNumberOrderStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PhoneNumberOrder& WithStatus(PhoneNumberOrderStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of phone number being ordered, local or toll-free.</p>
     */
    inline PhoneNumberOrderType GetOrderType() const { return m_orderType; }
    inline bool OrderTypeHasBeenSet() const { return m_orderTypeHasBeenSet; }
    inline void SetOrderType(PhoneNumberOrderType value) { m_orderTypeHasBeenSet = true; m_orderType = value; }
    inline PhoneNumberOrder& WithOrderType(PhoneNumberOrderType value) { SetOrderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ordered phone number details, such as the phone number in E.164 format
     * and the phone number status.</p>
     */
    inline const Aws::Vector<OrderedPhoneNumber>& GetOrderedPhoneNumbers() const { return m_orderedPhoneNumbers; }
    inline bool OrderedPhoneNumbersHasBeenSet() const { return m_orderedPhoneNumbersHasBeenSet; }
    template<typename OrderedPhoneNumbersT = Aws::Vector<OrderedPhoneNumber>>
    void SetOrderedPhoneNumbers(OrderedPhoneNumbersT&& value) { m_orderedPhoneNumbersHasBeenSet = true; m_orderedPhoneNumbers = std::forward<OrderedPhoneNumbersT>(value); }
    template<typename OrderedPhoneNumbersT = Aws::Vector<OrderedPhoneNumber>>
    PhoneNumberOrder& WithOrderedPhoneNumbers(OrderedPhoneNumbersT&& value) { SetOrderedPhoneNumbers(std::forward<OrderedPhoneNumbersT>(value)); return *this;}
    template<typename OrderedPhoneNumbersT = OrderedPhoneNumber>
    PhoneNumberOrder& AddOrderedPhoneNumbers(OrderedPhoneNumbersT&& value) { m_orderedPhoneNumbersHasBeenSet = true; m_orderedPhoneNumbers.emplace_back(std::forward<OrderedPhoneNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The phone number order creation time stamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    PhoneNumberOrder& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated phone number order time stamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    PhoneNumberOrder& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Firm Order Commitment (FOC) date for phone number porting orders. This
     * field is null if a phone number order is not a porting order.</p>
     */
    inline const Aws::Utils::DateTime& GetFocDate() const { return m_focDate; }
    inline bool FocDateHasBeenSet() const { return m_focDateHasBeenSet; }
    template<typename FocDateT = Aws::Utils::DateTime>
    void SetFocDate(FocDateT&& value) { m_focDateHasBeenSet = true; m_focDate = std::forward<FocDateT>(value); }
    template<typename FocDateT = Aws::Utils::DateTime>
    PhoneNumberOrder& WithFocDate(FocDateT&& value) { SetFocDate(std::forward<FocDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumberOrderId;
    bool m_phoneNumberOrderIdHasBeenSet = false;

    PhoneNumberProductType m_productType{PhoneNumberProductType::NOT_SET};
    bool m_productTypeHasBeenSet = false;

    PhoneNumberOrderStatus m_status{PhoneNumberOrderStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    PhoneNumberOrderType m_orderType{PhoneNumberOrderType::NOT_SET};
    bool m_orderTypeHasBeenSet = false;

    Aws::Vector<OrderedPhoneNumber> m_orderedPhoneNumbers;
    bool m_orderedPhoneNumbersHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_focDate{};
    bool m_focDateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
