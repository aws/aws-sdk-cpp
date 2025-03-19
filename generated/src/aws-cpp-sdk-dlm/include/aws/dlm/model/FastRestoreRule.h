/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/RetentionIntervalUnitValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Custom snapshot policies only]</b> Specifies a rule for enabling fast
   * snapshot restore for snapshots created by snapshot policies. You can enable fast
   * snapshot restore based on either a count or a time interval.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/FastRestoreRule">AWS
   * API Reference</a></p>
   */
  class FastRestoreRule
  {
  public:
    AWS_DLM_API FastRestoreRule() = default;
    AWS_DLM_API FastRestoreRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API FastRestoreRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of snapshots to be enabled with fast snapshot restore.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline FastRestoreRule& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time to enable fast snapshot restore. The maximum is 100 years.
     * This is equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline int GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline FastRestoreRule& WithInterval(int value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of time for enabling fast snapshot restore.</p>
     */
    inline RetentionIntervalUnitValues GetIntervalUnit() const { return m_intervalUnit; }
    inline bool IntervalUnitHasBeenSet() const { return m_intervalUnitHasBeenSet; }
    inline void SetIntervalUnit(RetentionIntervalUnitValues value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = value; }
    inline FastRestoreRule& WithIntervalUnit(RetentionIntervalUnitValues value) { SetIntervalUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    FastRestoreRule& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    FastRestoreRule& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}
  private:

    int m_count{0};
    bool m_countHasBeenSet = false;

    int m_interval{0};
    bool m_intervalHasBeenSet = false;

    RetentionIntervalUnitValues m_intervalUnit{RetentionIntervalUnitValues::NOT_SET};
    bool m_intervalUnitHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
