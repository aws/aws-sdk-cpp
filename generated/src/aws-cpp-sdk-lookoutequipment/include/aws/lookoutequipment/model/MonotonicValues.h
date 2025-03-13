/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/StatisticalIssueStatus.h>
#include <aws/lookoutequipment/model/Monotonicity.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Entity that comprises information on monotonic values in the data.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/MonotonicValues">AWS
   * API Reference</a></p>
   */
  class MonotonicValues
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API MonotonicValues() = default;
    AWS_LOOKOUTEQUIPMENT_API MonotonicValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API MonotonicValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether there is a potential data issue related to having
     * monotonic values. </p>
     */
    inline StatisticalIssueStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StatisticalIssueStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MonotonicValues& WithStatus(StatisticalIssueStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the monotonicity of values. Can be INCREASING, DECREASING, or
     * STATIC. </p>
     */
    inline Monotonicity GetMonotonicity() const { return m_monotonicity; }
    inline bool MonotonicityHasBeenSet() const { return m_monotonicityHasBeenSet; }
    inline void SetMonotonicity(Monotonicity value) { m_monotonicityHasBeenSet = true; m_monotonicity = value; }
    inline MonotonicValues& WithMonotonicity(Monotonicity value) { SetMonotonicity(value); return *this;}
    ///@}
  private:

    StatisticalIssueStatus m_status{StatisticalIssueStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Monotonicity m_monotonicity{Monotonicity::NOT_SET};
    bool m_monotonicityHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
