/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/LaunchActionRun.h>
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
   * <p>Launch actions status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/LaunchActionsStatus">AWS
   * API Reference</a></p>
   */
  class LaunchActionsStatus
  {
  public:
    AWS_DRS_API LaunchActionsStatus();
    AWS_DRS_API LaunchActionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LaunchActionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of post launch action status.</p>
     */
    inline const Aws::Vector<LaunchActionRun>& GetRuns() const{ return m_runs; }

    /**
     * <p>List of post launch action status.</p>
     */
    inline bool RunsHasBeenSet() const { return m_runsHasBeenSet; }

    /**
     * <p>List of post launch action status.</p>
     */
    inline void SetRuns(const Aws::Vector<LaunchActionRun>& value) { m_runsHasBeenSet = true; m_runs = value; }

    /**
     * <p>List of post launch action status.</p>
     */
    inline void SetRuns(Aws::Vector<LaunchActionRun>&& value) { m_runsHasBeenSet = true; m_runs = std::move(value); }

    /**
     * <p>List of post launch action status.</p>
     */
    inline LaunchActionsStatus& WithRuns(const Aws::Vector<LaunchActionRun>& value) { SetRuns(value); return *this;}

    /**
     * <p>List of post launch action status.</p>
     */
    inline LaunchActionsStatus& WithRuns(Aws::Vector<LaunchActionRun>&& value) { SetRuns(std::move(value)); return *this;}

    /**
     * <p>List of post launch action status.</p>
     */
    inline LaunchActionsStatus& AddRuns(const LaunchActionRun& value) { m_runsHasBeenSet = true; m_runs.push_back(value); return *this; }

    /**
     * <p>List of post launch action status.</p>
     */
    inline LaunchActionsStatus& AddRuns(LaunchActionRun&& value) { m_runsHasBeenSet = true; m_runs.push_back(std::move(value)); return *this; }


    /**
     * <p>Time where the AWS Systems Manager was detected as running on the launched
     * instance.</p>
     */
    inline const Aws::String& GetSsmAgentDiscoveryDatetime() const{ return m_ssmAgentDiscoveryDatetime; }

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the launched
     * instance.</p>
     */
    inline bool SsmAgentDiscoveryDatetimeHasBeenSet() const { return m_ssmAgentDiscoveryDatetimeHasBeenSet; }

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the launched
     * instance.</p>
     */
    inline void SetSsmAgentDiscoveryDatetime(const Aws::String& value) { m_ssmAgentDiscoveryDatetimeHasBeenSet = true; m_ssmAgentDiscoveryDatetime = value; }

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the launched
     * instance.</p>
     */
    inline void SetSsmAgentDiscoveryDatetime(Aws::String&& value) { m_ssmAgentDiscoveryDatetimeHasBeenSet = true; m_ssmAgentDiscoveryDatetime = std::move(value); }

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the launched
     * instance.</p>
     */
    inline void SetSsmAgentDiscoveryDatetime(const char* value) { m_ssmAgentDiscoveryDatetimeHasBeenSet = true; m_ssmAgentDiscoveryDatetime.assign(value); }

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the launched
     * instance.</p>
     */
    inline LaunchActionsStatus& WithSsmAgentDiscoveryDatetime(const Aws::String& value) { SetSsmAgentDiscoveryDatetime(value); return *this;}

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the launched
     * instance.</p>
     */
    inline LaunchActionsStatus& WithSsmAgentDiscoveryDatetime(Aws::String&& value) { SetSsmAgentDiscoveryDatetime(std::move(value)); return *this;}

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the launched
     * instance.</p>
     */
    inline LaunchActionsStatus& WithSsmAgentDiscoveryDatetime(const char* value) { SetSsmAgentDiscoveryDatetime(value); return *this;}

  private:

    Aws::Vector<LaunchActionRun> m_runs;
    bool m_runsHasBeenSet = false;

    Aws::String m_ssmAgentDiscoveryDatetime;
    bool m_ssmAgentDiscoveryDatetimeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
