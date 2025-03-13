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
    AWS_DRS_API LaunchActionsStatus() = default;
    AWS_DRS_API LaunchActionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LaunchActionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of post launch action status.</p>
     */
    inline const Aws::Vector<LaunchActionRun>& GetRuns() const { return m_runs; }
    inline bool RunsHasBeenSet() const { return m_runsHasBeenSet; }
    template<typename RunsT = Aws::Vector<LaunchActionRun>>
    void SetRuns(RunsT&& value) { m_runsHasBeenSet = true; m_runs = std::forward<RunsT>(value); }
    template<typename RunsT = Aws::Vector<LaunchActionRun>>
    LaunchActionsStatus& WithRuns(RunsT&& value) { SetRuns(std::forward<RunsT>(value)); return *this;}
    template<typename RunsT = LaunchActionRun>
    LaunchActionsStatus& AddRuns(RunsT&& value) { m_runsHasBeenSet = true; m_runs.emplace_back(std::forward<RunsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Time where the AWS Systems Manager was detected as running on the launched
     * instance.</p>
     */
    inline const Aws::String& GetSsmAgentDiscoveryDatetime() const { return m_ssmAgentDiscoveryDatetime; }
    inline bool SsmAgentDiscoveryDatetimeHasBeenSet() const { return m_ssmAgentDiscoveryDatetimeHasBeenSet; }
    template<typename SsmAgentDiscoveryDatetimeT = Aws::String>
    void SetSsmAgentDiscoveryDatetime(SsmAgentDiscoveryDatetimeT&& value) { m_ssmAgentDiscoveryDatetimeHasBeenSet = true; m_ssmAgentDiscoveryDatetime = std::forward<SsmAgentDiscoveryDatetimeT>(value); }
    template<typename SsmAgentDiscoveryDatetimeT = Aws::String>
    LaunchActionsStatus& WithSsmAgentDiscoveryDatetime(SsmAgentDiscoveryDatetimeT&& value) { SetSsmAgentDiscoveryDatetime(std::forward<SsmAgentDiscoveryDatetimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LaunchActionRun> m_runs;
    bool m_runsHasBeenSet = false;

    Aws::String m_ssmAgentDiscoveryDatetime;
    bool m_ssmAgentDiscoveryDatetimeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
