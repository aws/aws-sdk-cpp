/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/PeriodUnit.h>
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
   * <p>Defines a limit and the time period during which it is
   * enforced.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Period">AWS
   * API Reference</a></p>
   */
  class Period
  {
  public:
    AWS_CUSTOMERPROFILES_API Period() = default;
    AWS_CUSTOMERPROFILES_API Period(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Period& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unit of time.</p>
     */
    inline PeriodUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(PeriodUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline Period& WithUnit(PeriodUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time of the specified unit.</p>
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline Period& WithValue(int value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowed number of destination invocations per profile.</p>
     */
    inline int GetMaxInvocationsPerProfile() const { return m_maxInvocationsPerProfile; }
    inline bool MaxInvocationsPerProfileHasBeenSet() const { return m_maxInvocationsPerProfileHasBeenSet; }
    inline void SetMaxInvocationsPerProfile(int value) { m_maxInvocationsPerProfileHasBeenSet = true; m_maxInvocationsPerProfile = value; }
    inline Period& WithMaxInvocationsPerProfile(int value) { SetMaxInvocationsPerProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, there is no limit on the number of destination invocations
     * per profile. The default is false.</p>
     */
    inline bool GetUnlimited() const { return m_unlimited; }
    inline bool UnlimitedHasBeenSet() const { return m_unlimitedHasBeenSet; }
    inline void SetUnlimited(bool value) { m_unlimitedHasBeenSet = true; m_unlimited = value; }
    inline Period& WithUnlimited(bool value) { SetUnlimited(value); return *this;}
    ///@}
  private:

    PeriodUnit m_unit{PeriodUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    int m_value{0};
    bool m_valueHasBeenSet = false;

    int m_maxInvocationsPerProfile{0};
    bool m_maxInvocationsPerProfileHasBeenSet = false;

    bool m_unlimited{false};
    bool m_unlimitedHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
