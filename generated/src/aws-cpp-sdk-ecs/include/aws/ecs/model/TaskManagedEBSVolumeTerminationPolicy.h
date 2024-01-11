/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>

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
namespace ECS
{
namespace Model
{

  /**
   * <p>The termination policy for the Amazon EBS volume when the task exits. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ebs-volumes.html#ebs-volume-types">Amazon
   * ECS volume termination policy</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskManagedEBSVolumeTerminationPolicy">AWS
   * API Reference</a></p>
   */
  class TaskManagedEBSVolumeTerminationPolicy
  {
  public:
    AWS_ECS_API TaskManagedEBSVolumeTerminationPolicy();
    AWS_ECS_API TaskManagedEBSVolumeTerminationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API TaskManagedEBSVolumeTerminationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the volume should be deleted on when the task stops. If a
     * value of <code>true</code> is specified, &#x2028;Amazon ECS deletes the Amazon
     * EBS volume on your behalf when the task goes into the <code>STOPPED</code>
     * state. If no value is specified, the &#x2028;default value is <code>true</code>
     * is used. When set to <code>false</code>, Amazon ECS leaves the volume in your
     * &#x2028;account.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether the volume should be deleted on when the task stops. If a
     * value of <code>true</code> is specified, &#x2028;Amazon ECS deletes the Amazon
     * EBS volume on your behalf when the task goes into the <code>STOPPED</code>
     * state. If no value is specified, the &#x2028;default value is <code>true</code>
     * is used. When set to <code>false</code>, Amazon ECS leaves the volume in your
     * &#x2028;account.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Indicates whether the volume should be deleted on when the task stops. If a
     * value of <code>true</code> is specified, &#x2028;Amazon ECS deletes the Amazon
     * EBS volume on your behalf when the task goes into the <code>STOPPED</code>
     * state. If no value is specified, the &#x2028;default value is <code>true</code>
     * is used. When set to <code>false</code>, Amazon ECS leaves the volume in your
     * &#x2028;account.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether the volume should be deleted on when the task stops. If a
     * value of <code>true</code> is specified, &#x2028;Amazon ECS deletes the Amazon
     * EBS volume on your behalf when the task goes into the <code>STOPPED</code>
     * state. If no value is specified, the &#x2028;default value is <code>true</code>
     * is used. When set to <code>false</code>, Amazon ECS leaves the volume in your
     * &#x2028;account.</p>
     */
    inline TaskManagedEBSVolumeTerminationPolicy& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}

  private:

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
