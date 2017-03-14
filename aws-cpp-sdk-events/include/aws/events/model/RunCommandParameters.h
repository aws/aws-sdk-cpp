/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <zonbook> <simpara>This parameter contains the criteria (either InstanceIds or a
   * tag) used to specify which EC2 instances are to be sent the command. </simpara>
   * </zonbook> <xhtml> <p>This parameter contains the criteria (either InstanceIds
   * or a tag) used to specify which EC2 instances are to be sent the command. </p>
   * </xhtml>
   */
  class AWS_CLOUDWATCHEVENTS_API RunCommandParameters
  {
  public:
    RunCommandParameters();
    RunCommandParameters(const Aws::Utils::Json::JsonValue& jsonValue);
    RunCommandParameters& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <zonbook> <simpara>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</simpara>
     * </zonbook> <xhtml> <p>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</p> </xhtml>
     */
    inline const Aws::Vector<RunCommandTarget>& GetRunCommandTargets() const{ return m_runCommandTargets; }

    /**
     * <zonbook> <simpara>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</simpara>
     * </zonbook> <xhtml> <p>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</p> </xhtml>
     */
    inline void SetRunCommandTargets(const Aws::Vector<RunCommandTarget>& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets = value; }

    /**
     * <zonbook> <simpara>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</simpara>
     * </zonbook> <xhtml> <p>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</p> </xhtml>
     */
    inline void SetRunCommandTargets(Aws::Vector<RunCommandTarget>&& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets = value; }

    /**
     * <zonbook> <simpara>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</simpara>
     * </zonbook> <xhtml> <p>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</p> </xhtml>
     */
    inline RunCommandParameters& WithRunCommandTargets(const Aws::Vector<RunCommandTarget>& value) { SetRunCommandTargets(value); return *this;}

    /**
     * <zonbook> <simpara>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</simpara>
     * </zonbook> <xhtml> <p>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</p> </xhtml>
     */
    inline RunCommandParameters& WithRunCommandTargets(Aws::Vector<RunCommandTarget>&& value) { SetRunCommandTargets(value); return *this;}

    /**
     * <zonbook> <simpara>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</simpara>
     * </zonbook> <xhtml> <p>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</p> </xhtml>
     */
    inline RunCommandParameters& AddRunCommandTargets(const RunCommandTarget& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</simpara>
     * </zonbook> <xhtml> <p>Currently, we support including only one RunCommandTarget
     * block, which specifies either an array of InstanceIds or a tag.</p> </xhtml>
     */
    inline RunCommandParameters& AddRunCommandTargets(RunCommandTarget&& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets.push_back(value); return *this; }

  private:
    Aws::Vector<RunCommandTarget> m_runCommandTargets;
    bool m_runCommandTargetsHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
