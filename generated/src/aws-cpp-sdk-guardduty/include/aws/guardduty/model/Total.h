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
    AWS_GUARDDUTY_API Total();
    AWS_GUARDDUTY_API Total(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Total& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total usage.</p>
     */
    inline const Aws::String& GetAmount() const{ return m_amount; }

    /**
     * <p>The total usage.</p>
     */
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }

    /**
     * <p>The total usage.</p>
     */
    inline void SetAmount(const Aws::String& value) { m_amountHasBeenSet = true; m_amount = value; }

    /**
     * <p>The total usage.</p>
     */
    inline void SetAmount(Aws::String&& value) { m_amountHasBeenSet = true; m_amount = std::move(value); }

    /**
     * <p>The total usage.</p>
     */
    inline void SetAmount(const char* value) { m_amountHasBeenSet = true; m_amount.assign(value); }

    /**
     * <p>The total usage.</p>
     */
    inline Total& WithAmount(const Aws::String& value) { SetAmount(value); return *this;}

    /**
     * <p>The total usage.</p>
     */
    inline Total& WithAmount(Aws::String&& value) { SetAmount(std::move(value)); return *this;}

    /**
     * <p>The total usage.</p>
     */
    inline Total& WithAmount(const char* value) { SetAmount(value); return *this;}


    /**
     * <p>The currency unit that the amount is given in.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The currency unit that the amount is given in.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The currency unit that the amount is given in.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The currency unit that the amount is given in.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The currency unit that the amount is given in.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The currency unit that the amount is given in.</p>
     */
    inline Total& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The currency unit that the amount is given in.</p>
     */
    inline Total& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The currency unit that the amount is given in.</p>
     */
    inline Total& WithUnit(const char* value) { SetUnit(value); return *this;}

  private:

    Aws::String m_amount;
    bool m_amountHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
