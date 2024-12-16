/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/LocationValues.h>
#include <aws/dlm/model/IntervalUnitValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/Script.h>
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
   * <p> <b>[Custom snapshot and AMI policies only]</b> Specifies when the policy
   * should create snapshots or AMIs.</p>  <ul> <li> <p>You must specify either
   * <b>CronExpression</b>, or <b>Interval</b>, <b>IntervalUnit</b>, and
   * <b>Times</b>.</p> </li> <li> <p>If you need to specify an <a
   * href="https://docs.aws.amazon.com/dlm/latest/APIReference/API_ArchiveRule.html">ArchiveRule</a>
   * for the schedule, then you must specify a creation frequency of at least 28
   * days.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CreateRule">AWS API
   * Reference</a></p>
   */
  class CreateRule
  {
  public:
    AWS_DLM_API CreateRule();
    AWS_DLM_API CreateRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API CreateRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <b>[Custom snapshot policies only]</b> Specifies the destination for
     * snapshots created by the policy. The allowed destinations depend on the location
     * of the targeted resources.</p> <ul> <li> <p>If the policy targets resources in a
     * Region, then you must create snapshots in the same Region as the source
     * resource.</p> </li> <li> <p>If the policy targets resources in a Local Zone, you
     * can create snapshots in the same Local Zone or in its parent Region.</p> </li>
     * <li> <p>If the policy targets resources on an Outpost, then you can create
     * snapshots on the same Outpost or in its parent Region.</p> </li> </ul>
     * <p>Specify one of the following values:</p> <ul> <li> <p>To create snapshots in
     * the same Region as the source resource, specify <code>CLOUD</code>.</p> </li>
     * <li> <p>To create snapshots in the same Local Zone as the source resource,
     * specify <code>LOCAL_ZONE</code>.</p> </li> <li> <p>To create snapshots on the
     * same Outpost as the source resource, specify <code>OUTPOST_LOCAL</code>.</p>
     * </li> </ul> <p>Default: <code>CLOUD</code> </p>
     */
    inline const LocationValues& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const LocationValues& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(LocationValues&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline CreateRule& WithLocation(const LocationValues& value) { SetLocation(value); return *this;}
    inline CreateRule& WithLocation(LocationValues&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval between snapshots. The supported values are 1, 2, 3, 4, 6, 8,
     * 12, and 24.</p>
     */
    inline int GetInterval() const{ return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline CreateRule& WithInterval(int value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval unit.</p>
     */
    inline const IntervalUnitValues& GetIntervalUnit() const{ return m_intervalUnit; }
    inline bool IntervalUnitHasBeenSet() const { return m_intervalUnitHasBeenSet; }
    inline void SetIntervalUnit(const IntervalUnitValues& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = value; }
    inline void SetIntervalUnit(IntervalUnitValues&& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = std::move(value); }
    inline CreateRule& WithIntervalUnit(const IntervalUnitValues& value) { SetIntervalUnit(value); return *this;}
    inline CreateRule& WithIntervalUnit(IntervalUnitValues&& value) { SetIntervalUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in UTC, to start the operation. The supported format is hh:mm.</p>
     * <p>The operation occurs within a one-hour window following the specified time.
     * If you do not specify a time, Amazon Data Lifecycle Manager selects a time
     * within the next 24 hours.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTimes() const{ return m_times; }
    inline bool TimesHasBeenSet() const { return m_timesHasBeenSet; }
    inline void SetTimes(const Aws::Vector<Aws::String>& value) { m_timesHasBeenSet = true; m_times = value; }
    inline void SetTimes(Aws::Vector<Aws::String>&& value) { m_timesHasBeenSet = true; m_times = std::move(value); }
    inline CreateRule& WithTimes(const Aws::Vector<Aws::String>& value) { SetTimes(value); return *this;}
    inline CreateRule& WithTimes(Aws::Vector<Aws::String>&& value) { SetTimes(std::move(value)); return *this;}
    inline CreateRule& AddTimes(const Aws::String& value) { m_timesHasBeenSet = true; m_times.push_back(value); return *this; }
    inline CreateRule& AddTimes(Aws::String&& value) { m_timesHasBeenSet = true; m_times.push_back(std::move(value)); return *this; }
    inline CreateRule& AddTimes(const char* value) { m_timesHasBeenSet = true; m_times.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The schedule, as a Cron expression. The schedule interval must be between 1
     * hour and 1 year. For more information, see the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-cron-expressions.html">Cron
     * expressions reference</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const Aws::String& GetCronExpression() const{ return m_cronExpression; }
    inline bool CronExpressionHasBeenSet() const { return m_cronExpressionHasBeenSet; }
    inline void SetCronExpression(const Aws::String& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = value; }
    inline void SetCronExpression(Aws::String&& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = std::move(value); }
    inline void SetCronExpression(const char* value) { m_cronExpressionHasBeenSet = true; m_cronExpression.assign(value); }
    inline CreateRule& WithCronExpression(const Aws::String& value) { SetCronExpression(value); return *this;}
    inline CreateRule& WithCronExpression(Aws::String&& value) { SetCronExpression(std::move(value)); return *this;}
    inline CreateRule& WithCronExpression(const char* value) { SetCronExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Custom snapshot policies that target instances only]</b> Specifies pre
     * and/or post scripts for a snapshot lifecycle policy that targets instances. This
     * is useful for creating application-consistent snapshots, or for performing
     * specific administrative tasks before or after Amazon Data Lifecycle Manager
     * initiates snapshot creation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/automate-app-consistent-backups.html">Automating
     * application-consistent snapshots with pre and post scripts</a>.</p>
     */
    inline const Aws::Vector<Script>& GetScripts() const{ return m_scripts; }
    inline bool ScriptsHasBeenSet() const { return m_scriptsHasBeenSet; }
    inline void SetScripts(const Aws::Vector<Script>& value) { m_scriptsHasBeenSet = true; m_scripts = value; }
    inline void SetScripts(Aws::Vector<Script>&& value) { m_scriptsHasBeenSet = true; m_scripts = std::move(value); }
    inline CreateRule& WithScripts(const Aws::Vector<Script>& value) { SetScripts(value); return *this;}
    inline CreateRule& WithScripts(Aws::Vector<Script>&& value) { SetScripts(std::move(value)); return *this;}
    inline CreateRule& AddScripts(const Script& value) { m_scriptsHasBeenSet = true; m_scripts.push_back(value); return *this; }
    inline CreateRule& AddScripts(Script&& value) { m_scriptsHasBeenSet = true; m_scripts.push_back(std::move(value)); return *this; }
    ///@}
  private:

    LocationValues m_location;
    bool m_locationHasBeenSet = false;

    int m_interval;
    bool m_intervalHasBeenSet = false;

    IntervalUnitValues m_intervalUnit;
    bool m_intervalUnitHasBeenSet = false;

    Aws::Vector<Aws::String> m_times;
    bool m_timesHasBeenSet = false;

    Aws::String m_cronExpression;
    bool m_cronExpressionHasBeenSet = false;

    Aws::Vector<Script> m_scripts;
    bool m_scriptsHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
