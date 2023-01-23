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
    AWS_LOOKOUTEQUIPMENT_API MonotonicValues();
    AWS_LOOKOUTEQUIPMENT_API MonotonicValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API MonotonicValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates whether there is a potential data issue related to having
     * monotonic values. </p>
     */
    inline const StatisticalIssueStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Indicates whether there is a potential data issue related to having
     * monotonic values. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Indicates whether there is a potential data issue related to having
     * monotonic values. </p>
     */
    inline void SetStatus(const StatisticalIssueStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Indicates whether there is a potential data issue related to having
     * monotonic values. </p>
     */
    inline void SetStatus(StatisticalIssueStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Indicates whether there is a potential data issue related to having
     * monotonic values. </p>
     */
    inline MonotonicValues& WithStatus(const StatisticalIssueStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Indicates whether there is a potential data issue related to having
     * monotonic values. </p>
     */
    inline MonotonicValues& WithStatus(StatisticalIssueStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Indicates the monotonicity of values. Can be INCREASING, DECREASING, or
     * STATIC. </p>
     */
    inline const Monotonicity& GetMonotonicity() const{ return m_monotonicity; }

    /**
     * <p> Indicates the monotonicity of values. Can be INCREASING, DECREASING, or
     * STATIC. </p>
     */
    inline bool MonotonicityHasBeenSet() const { return m_monotonicityHasBeenSet; }

    /**
     * <p> Indicates the monotonicity of values. Can be INCREASING, DECREASING, or
     * STATIC. </p>
     */
    inline void SetMonotonicity(const Monotonicity& value) { m_monotonicityHasBeenSet = true; m_monotonicity = value; }

    /**
     * <p> Indicates the monotonicity of values. Can be INCREASING, DECREASING, or
     * STATIC. </p>
     */
    inline void SetMonotonicity(Monotonicity&& value) { m_monotonicityHasBeenSet = true; m_monotonicity = std::move(value); }

    /**
     * <p> Indicates the monotonicity of values. Can be INCREASING, DECREASING, or
     * STATIC. </p>
     */
    inline MonotonicValues& WithMonotonicity(const Monotonicity& value) { SetMonotonicity(value); return *this;}

    /**
     * <p> Indicates the monotonicity of values. Can be INCREASING, DECREASING, or
     * STATIC. </p>
     */
    inline MonotonicValues& WithMonotonicity(Monotonicity&& value) { SetMonotonicity(std::move(value)); return *this;}

  private:

    StatisticalIssueStatus m_status;
    bool m_statusHasBeenSet = false;

    Monotonicity m_monotonicity;
    bool m_monotonicityHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
