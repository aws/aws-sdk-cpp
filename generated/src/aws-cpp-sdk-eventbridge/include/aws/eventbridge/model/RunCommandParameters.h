/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/model/RunCommandTarget.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>This parameter contains the criteria (either InstanceIds or a tag) used to
   * specify which EC2 instances are to be sent the command. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/RunCommandParameters">AWS
   * API Reference</a></p>
   */
  class RunCommandParameters
  {
  public:
    AWS_EVENTBRIDGE_API RunCommandParameters();
    AWS_EVENTBRIDGE_API RunCommandParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API RunCommandParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Currently, we support including only one RunCommandTarget block, which
     * specifies either an array of InstanceIds or a tag.</p>
     */
    inline const Aws::Vector<RunCommandTarget>& GetRunCommandTargets() const{ return m_runCommandTargets; }

    /**
     * <p>Currently, we support including only one RunCommandTarget block, which
     * specifies either an array of InstanceIds or a tag.</p>
     */
    inline bool RunCommandTargetsHasBeenSet() const { return m_runCommandTargetsHasBeenSet; }

    /**
     * <p>Currently, we support including only one RunCommandTarget block, which
     * specifies either an array of InstanceIds or a tag.</p>
     */
    inline void SetRunCommandTargets(const Aws::Vector<RunCommandTarget>& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets = value; }

    /**
     * <p>Currently, we support including only one RunCommandTarget block, which
     * specifies either an array of InstanceIds or a tag.</p>
     */
    inline void SetRunCommandTargets(Aws::Vector<RunCommandTarget>&& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets = std::move(value); }

    /**
     * <p>Currently, we support including only one RunCommandTarget block, which
     * specifies either an array of InstanceIds or a tag.</p>
     */
    inline RunCommandParameters& WithRunCommandTargets(const Aws::Vector<RunCommandTarget>& value) { SetRunCommandTargets(value); return *this;}

    /**
     * <p>Currently, we support including only one RunCommandTarget block, which
     * specifies either an array of InstanceIds or a tag.</p>
     */
    inline RunCommandParameters& WithRunCommandTargets(Aws::Vector<RunCommandTarget>&& value) { SetRunCommandTargets(std::move(value)); return *this;}

    /**
     * <p>Currently, we support including only one RunCommandTarget block, which
     * specifies either an array of InstanceIds or a tag.</p>
     */
    inline RunCommandParameters& AddRunCommandTargets(const RunCommandTarget& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets.push_back(value); return *this; }

    /**
     * <p>Currently, we support including only one RunCommandTarget block, which
     * specifies either an array of InstanceIds or a tag.</p>
     */
    inline RunCommandParameters& AddRunCommandTargets(RunCommandTarget&& value) { m_runCommandTargetsHasBeenSet = true; m_runCommandTargets.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RunCommandTarget> m_runCommandTargets;
    bool m_runCommandTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
