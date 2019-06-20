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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API StopInstanceRequest : public OpsWorksRequest
  {
  public:
    StopInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline StopInstanceRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline StopInstanceRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline StopInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Specifies whether to force an instance to stop. If the instance's root device
     * type is <code>ebs</code>, or EBS-backed, adding the <code>Force</code> parameter
     * to the <code>StopInstances</code> API call disassociates the AWS OpsWorks Stacks
     * instance from EC2, and forces deletion of <i>only</i> the OpsWorks Stacks
     * instance. You must also delete the formerly-associated instance in EC2 after
     * troubleshooting and replacing the AWS OpsWorks Stacks instance with a new
     * one.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>Specifies whether to force an instance to stop. If the instance's root device
     * type is <code>ebs</code>, or EBS-backed, adding the <code>Force</code> parameter
     * to the <code>StopInstances</code> API call disassociates the AWS OpsWorks Stacks
     * instance from EC2, and forces deletion of <i>only</i> the OpsWorks Stacks
     * instance. You must also delete the formerly-associated instance in EC2 after
     * troubleshooting and replacing the AWS OpsWorks Stacks instance with a new
     * one.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>Specifies whether to force an instance to stop. If the instance's root device
     * type is <code>ebs</code>, or EBS-backed, adding the <code>Force</code> parameter
     * to the <code>StopInstances</code> API call disassociates the AWS OpsWorks Stacks
     * instance from EC2, and forces deletion of <i>only</i> the OpsWorks Stacks
     * instance. You must also delete the formerly-associated instance in EC2 after
     * troubleshooting and replacing the AWS OpsWorks Stacks instance with a new
     * one.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>Specifies whether to force an instance to stop. If the instance's root device
     * type is <code>ebs</code>, or EBS-backed, adding the <code>Force</code> parameter
     * to the <code>StopInstances</code> API call disassociates the AWS OpsWorks Stacks
     * instance from EC2, and forces deletion of <i>only</i> the OpsWorks Stacks
     * instance. You must also delete the formerly-associated instance in EC2 after
     * troubleshooting and replacing the AWS OpsWorks Stacks instance with a new
     * one.</p>
     */
    inline StopInstanceRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    bool m_force;
    bool m_forceHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
