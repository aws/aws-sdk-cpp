/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains the total usage with the corresponding currency unit for that
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Total">AWS API
   * Reference</a></p>
   */
  class Total
  {
  public:
    AWS_GUARDDUTY_API Total() = default;
    AWS_GUARDDUTY_API Total(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Total& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total usage.</p>
     */
    inline const Aws::String& GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    template<typename AmountT = Aws::String>
    void SetAmount(AmountT&& value) { m_amountHasBeenSet = true; m_amount = std::forward<AmountT>(value); }
    template<typename AmountT = Aws::String>
    Total& WithAmount(AmountT&& value) { SetAmount(std::forward<AmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency unit that the amount is given in.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    Total& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_amount;
    bool m_amountHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
