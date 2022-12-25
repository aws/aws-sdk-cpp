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
   * <p> <b>[Snapshot policies only]</b> Specifies a rule for enabling fast snapshot
   * restore for snapshots created by snapshot policies. You can enable fast snapshot
   * restore based on either a count or a time interval.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/FastRestoreRule">AWS
   * API Reference</a></p>
   */
  class FastRestoreRule
  {
  public:
    AWS_DLM_API FastRestoreRule();
    AWS_DLM_API FastRestoreRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API FastRestoreRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of snapshots to be enabled with fast snapshot restore.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of snapshots to be enabled with fast snapshot restore.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of snapshots to be enabled with fast snapshot restore.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of snapshots to be enabled with fast snapshot restore.</p>
     */
    inline FastRestoreRule& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The amount of time to enable fast snapshot restore. The maximum is 100 years.
     * This is equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>The amount of time to enable fast snapshot restore. The maximum is 100 years.
     * This is equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The amount of time to enable fast snapshot restore. The maximum is 100 years.
     * This is equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The amount of time to enable fast snapshot restore. The maximum is 100 years.
     * This is equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline FastRestoreRule& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The unit of time for enabling fast snapshot restore.</p>
     */
    inline const RetentionIntervalUnitValues& GetIntervalUnit() const{ return m_intervalUnit; }

    /**
     * <p>The unit of time for enabling fast snapshot restore.</p>
     */
    inline bool IntervalUnitHasBeenSet() const { return m_intervalUnitHasBeenSet; }

    /**
     * <p>The unit of time for enabling fast snapshot restore.</p>
     */
    inline void SetIntervalUnit(const RetentionIntervalUnitValues& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = value; }

    /**
     * <p>The unit of time for enabling fast snapshot restore.</p>
     */
    inline void SetIntervalUnit(RetentionIntervalUnitValues&& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = std::move(value); }

    /**
     * <p>The unit of time for enabling fast snapshot restore.</p>
     */
    inline FastRestoreRule& WithIntervalUnit(const RetentionIntervalUnitValues& value) { SetIntervalUnit(value); return *this;}

    /**
     * <p>The unit of time for enabling fast snapshot restore.</p>
     */
    inline FastRestoreRule& WithIntervalUnit(RetentionIntervalUnitValues&& value) { SetIntervalUnit(std::move(value)); return *this;}


    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline FastRestoreRule& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline FastRestoreRule& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline FastRestoreRule& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline FastRestoreRule& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The Availability Zones in which to enable fast snapshot restore.</p>
     */
    inline FastRestoreRule& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

  private:

    int m_count;
    bool m_countHasBeenSet = false;

    int m_interval;
    bool m_intervalHasBeenSet = false;

    RetentionIntervalUnitValues m_intervalUnit;
    bool m_intervalUnitHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
