/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/PhoneNumberProductType.h>
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
   * <p>The phone number ID, product type, or calling name fields to update, used
   * with the <a>BatchUpdatePhoneNumber</a> and <a>UpdatePhoneNumber</a>
   * actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdatePhoneNumberRequestItem">AWS
   * API Reference</a></p>
   */
  class UpdatePhoneNumberRequestItem
  {
  public:
    AWS_CHIME_API UpdatePhoneNumberRequestItem() = default;
    AWS_CHIME_API UpdatePhoneNumberRequestItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API UpdatePhoneNumberRequestItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The phone number ID to update.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const { return m_phoneNumberId; }
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }
    template<typename PhoneNumberIdT = Aws::String>
    void SetPhoneNumberId(PhoneNumberIdT&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::forward<PhoneNumberIdT>(value); }
    template<typename PhoneNumberIdT = Aws::String>
    UpdatePhoneNumberRequestItem& WithPhoneNumberId(PhoneNumberIdT&& value) { SetPhoneNumberId(std::forward<PhoneNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product type to update.</p>
     */
    inline PhoneNumberProductType GetProductType() const { return m_productType; }
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }
    inline void SetProductType(PhoneNumberProductType value) { m_productTypeHasBeenSet = true; m_productType = value; }
    inline UpdatePhoneNumberRequestItem& WithProductType(PhoneNumberProductType value) { SetProductType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound calling name to update.</p>
     */
    inline const Aws::String& GetCallingName() const { return m_callingName; }
    inline bool CallingNameHasBeenSet() const { return m_callingNameHasBeenSet; }
    template<typename CallingNameT = Aws::String>
    void SetCallingName(CallingNameT&& value) { m_callingNameHasBeenSet = true; m_callingName = std::forward<CallingNameT>(value); }
    template<typename CallingNameT = Aws::String>
    UpdatePhoneNumberRequestItem& WithCallingName(CallingNameT&& value) { SetCallingName(std::forward<CallingNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    PhoneNumberProductType m_productType{PhoneNumberProductType::NOT_SET};
    bool m_productTypeHasBeenSet = false;

    Aws::String m_callingName;
    bool m_callingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
