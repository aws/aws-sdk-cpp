/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/PITPolicyRuleUnits.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>A rule in the Point in Time (PIT) policy representing when to take snapshots
   * and how long to retain them for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/PITPolicyRule">AWS
   * API Reference</a></p>
   */
  class PITPolicyRule
  {
  public:
    AWS_DRS_API PITPolicyRule();
    AWS_DRS_API PITPolicyRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API PITPolicyRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether this rule is enabled or not.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether this rule is enabled or not.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether this rule is enabled or not.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether this rule is enabled or not.</p>
     */
    inline PITPolicyRule& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>How often, in the chosen units, a snapshot should be taken.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>How often, in the chosen units, a snapshot should be taken.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>How often, in the chosen units, a snapshot should be taken.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>How often, in the chosen units, a snapshot should be taken.</p>
     */
    inline PITPolicyRule& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The duration to retain a snapshot for, in the chosen units.</p>
     */
    inline int GetRetentionDuration() const{ return m_retentionDuration; }

    /**
     * <p>The duration to retain a snapshot for, in the chosen units.</p>
     */
    inline bool RetentionDurationHasBeenSet() const { return m_retentionDurationHasBeenSet; }

    /**
     * <p>The duration to retain a snapshot for, in the chosen units.</p>
     */
    inline void SetRetentionDuration(int value) { m_retentionDurationHasBeenSet = true; m_retentionDuration = value; }

    /**
     * <p>The duration to retain a snapshot for, in the chosen units.</p>
     */
    inline PITPolicyRule& WithRetentionDuration(int value) { SetRetentionDuration(value); return *this;}


    /**
     * <p>The ID of the rule.</p>
     */
    inline long long GetRuleID() const{ return m_ruleID; }

    /**
     * <p>The ID of the rule.</p>
     */
    inline bool RuleIDHasBeenSet() const { return m_ruleIDHasBeenSet; }

    /**
     * <p>The ID of the rule.</p>
     */
    inline void SetRuleID(long long value) { m_ruleIDHasBeenSet = true; m_ruleID = value; }

    /**
     * <p>The ID of the rule.</p>
     */
    inline PITPolicyRule& WithRuleID(long long value) { SetRuleID(value); return *this;}


    /**
     * <p>The units used to measure the interval and retentionDuration.</p>
     */
    inline const PITPolicyRuleUnits& GetUnits() const{ return m_units; }

    /**
     * <p>The units used to measure the interval and retentionDuration.</p>
     */
    inline bool UnitsHasBeenSet() const { return m_unitsHasBeenSet; }

    /**
     * <p>The units used to measure the interval and retentionDuration.</p>
     */
    inline void SetUnits(const PITPolicyRuleUnits& value) { m_unitsHasBeenSet = true; m_units = value; }

    /**
     * <p>The units used to measure the interval and retentionDuration.</p>
     */
    inline void SetUnits(PITPolicyRuleUnits&& value) { m_unitsHasBeenSet = true; m_units = std::move(value); }

    /**
     * <p>The units used to measure the interval and retentionDuration.</p>
     */
    inline PITPolicyRule& WithUnits(const PITPolicyRuleUnits& value) { SetUnits(value); return *this;}

    /**
     * <p>The units used to measure the interval and retentionDuration.</p>
     */
    inline PITPolicyRule& WithUnits(PITPolicyRuleUnits&& value) { SetUnits(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    int m_interval;
    bool m_intervalHasBeenSet = false;

    int m_retentionDuration;
    bool m_retentionDurationHasBeenSet = false;

    long long m_ruleID;
    bool m_ruleIDHasBeenSet = false;

    PITPolicyRuleUnits m_units;
    bool m_unitsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
