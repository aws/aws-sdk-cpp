/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/events/model/RunCommandTarget.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>This parameter contains the criteria (either InstanceIds or a tag) used to
   * specify which EC2 instances are to be sent the command. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RunCommandParameters">AWS
   * API Reference</a></p>
   */
  class RunCommandParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API RunCommandParameters() = default;
    AWS_CLOUDWATCHEVENTS_API RunCommandParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API RunCommandParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Currently, we support including only one RunCommandTarget block, which
     * specifies either an array of InstanceIds or a tag.</p>
     */
    inline const Aws::Vector<RunCommandTarget>& GetRunCommandTargets() const { return m_runCommandTargets; }
    inline bool RunCommandTargetsHasBeenSet() const { return m_runCommandTargetsHasBeenSet; }
    template<typename RunCommandTargetsT = Aws::Vector<RunCommandTarget>>
    void SetRunCommandTargets(RunCommandTargetsT&& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets = std::forward<RunCommandTargetsT>(value); }
    template<typename RunCommandTargetsT = Aws::Vector<RunCommandTarget>>
    RunCommandParameters& WithRunCommandTargets(RunCommandTargetsT&& value) { SetRunCommandTargets(std::forward<RunCommandTargetsT>(value)); return *this;}
    template<typename RunCommandTargetsT = RunCommandTarget>
    RunCommandParameters& AddRunCommandTargets(RunCommandTargetsT&& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets.emplace_back(std::forward<RunCommandTargetsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RunCommandTarget> m_runCommandTargets;
    bool m_runCommandTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
