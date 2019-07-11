/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>This parameter contains the criteria (either <code>InstanceIds</code> or a
   * tag) used to specify which EC2 instances are to be sent the command.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RunCommandParameters">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API RunCommandParameters
  {
  public:
    RunCommandParameters();
    RunCommandParameters(Aws::Utils::Json::JsonView jsonValue);
    RunCommandParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Currently, we support including only one <code>RunCommandTarget</code> block,
     * which specifies either an array of <code>InstanceIds</code> or a tag.</p>
     */
    inline const Aws::Vector<RunCommandTarget>& GetRunCommandTargets() const{ return m_runCommandTargets; }

    /**
     * <p>Currently, we support including only one <code>RunCommandTarget</code> block,
     * which specifies either an array of <code>InstanceIds</code> or a tag.</p>
     */
    inline bool RunCommandTargetsHasBeenSet() const { return m_runCommandTargetsHasBeenSet; }

    /**
     * <p>Currently, we support including only one <code>RunCommandTarget</code> block,
     * which specifies either an array of <code>InstanceIds</code> or a tag.</p>
     */
    inline void SetRunCommandTargets(const Aws::Vector<RunCommandTarget>& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets = value; }

    /**
     * <p>Currently, we support including only one <code>RunCommandTarget</code> block,
     * which specifies either an array of <code>InstanceIds</code> or a tag.</p>
     */
    inline void SetRunCommandTargets(Aws::Vector<RunCommandTarget>&& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets = std::move(value); }

    /**
     * <p>Currently, we support including only one <code>RunCommandTarget</code> block,
     * which specifies either an array of <code>InstanceIds</code> or a tag.</p>
     */
    inline RunCommandParameters& WithRunCommandTargets(const Aws::Vector<RunCommandTarget>& value) { SetRunCommandTargets(value); return *this;}

    /**
     * <p>Currently, we support including only one <code>RunCommandTarget</code> block,
     * which specifies either an array of <code>InstanceIds</code> or a tag.</p>
     */
    inline RunCommandParameters& WithRunCommandTargets(Aws::Vector<RunCommandTarget>&& value) { SetRunCommandTargets(std::move(value)); return *this;}

    /**
     * <p>Currently, we support including only one <code>RunCommandTarget</code> block,
     * which specifies either an array of <code>InstanceIds</code> or a tag.</p>
     */
    inline RunCommandParameters& AddRunCommandTargets(const RunCommandTarget& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets.push_back(value); return *this; }

    /**
     * <p>Currently, we support including only one <code>RunCommandTarget</code> block,
     * which specifies either an array of <code>InstanceIds</code> or a tag.</p>
     */
    inline RunCommandParameters& AddRunCommandTargets(RunCommandTarget&& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RunCommandTarget> m_runCommandTargets;
    bool m_runCommandTargetsHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
