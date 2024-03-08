/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/EksAnywhereSubscriptionTermUnit.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing the term duration and term unit type of your
   * subscription. This determines the term length of your subscription. Valid values
   * are MONTHS for term unit and 12 or 36 for term duration, indicating a 12 month
   * or 36 month subscription.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/EksAnywhereSubscriptionTerm">AWS
   * API Reference</a></p>
   */
  class EksAnywhereSubscriptionTerm
  {
  public:
    AWS_EKS_API EksAnywhereSubscriptionTerm();
    AWS_EKS_API EksAnywhereSubscriptionTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API EksAnywhereSubscriptionTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The duration of the subscription term. Valid values are 12 and 36, indicating
     * a 12 month or 36 month subscription.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the subscription term. Valid values are 12 and 36, indicating
     * a 12 month or 36 month subscription.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration of the subscription term. Valid values are 12 and 36, indicating
     * a 12 month or 36 month subscription.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration of the subscription term. Valid values are 12 and 36, indicating
     * a 12 month or 36 month subscription.</p>
     */
    inline EksAnywhereSubscriptionTerm& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The term unit of the subscription. Valid value is <code>MONTHS</code>.</p>
     */
    inline const EksAnywhereSubscriptionTermUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The term unit of the subscription. Valid value is <code>MONTHS</code>.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The term unit of the subscription. Valid value is <code>MONTHS</code>.</p>
     */
    inline void SetUnit(const EksAnywhereSubscriptionTermUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The term unit of the subscription. Valid value is <code>MONTHS</code>.</p>
     */
    inline void SetUnit(EksAnywhereSubscriptionTermUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The term unit of the subscription. Valid value is <code>MONTHS</code>.</p>
     */
    inline EksAnywhereSubscriptionTerm& WithUnit(const EksAnywhereSubscriptionTermUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The term unit of the subscription. Valid value is <code>MONTHS</code>.</p>
     */
    inline EksAnywhereSubscriptionTerm& WithUnit(EksAnywhereSubscriptionTermUnit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    int m_duration;
    bool m_durationHasBeenSet = false;

    EksAnywhereSubscriptionTermUnit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
