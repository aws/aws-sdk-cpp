/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/OrderedPhoneNumberStatus.h>
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
   * <p>A phone number for which an order has been placed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/OrderedPhoneNumber">AWS
   * API Reference</a></p>
   */
  class OrderedPhoneNumber
  {
  public:
    AWS_CHIME_API OrderedPhoneNumber() = default;
    AWS_CHIME_API OrderedPhoneNumber(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API OrderedPhoneNumber& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline const Aws::String& GetE164PhoneNumber() const { return m_e164PhoneNumber; }
    inline bool E164PhoneNumberHasBeenSet() const { return m_e164PhoneNumberHasBeenSet; }
    template<typename E164PhoneNumberT = Aws::String>
    void SetE164PhoneNumber(E164PhoneNumberT&& value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber = std::forward<E164PhoneNumberT>(value); }
    template<typename E164PhoneNumberT = Aws::String>
    OrderedPhoneNumber& WithE164PhoneNumber(E164PhoneNumberT&& value) { SetE164PhoneNumber(std::forward<E164PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number status.</p>
     */
    inline OrderedPhoneNumberStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OrderedPhoneNumberStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OrderedPhoneNumber& WithStatus(OrderedPhoneNumberStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_e164PhoneNumber;
    bool m_e164PhoneNumberHasBeenSet = false;

    OrderedPhoneNumberStatus m_status{OrderedPhoneNumberStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
