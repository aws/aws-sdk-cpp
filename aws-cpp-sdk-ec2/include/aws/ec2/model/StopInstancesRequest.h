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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API StopInstancesRequest : public EC2Request
  {
  public:
    StopInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopInstances"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IDs of the instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The IDs of the instances.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The IDs of the instances.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The IDs of the instances.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The IDs of the instances.</p>
     */
    inline StopInstancesRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The IDs of the instances.</p>
     */
    inline StopInstancesRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the instances.</p>
     */
    inline StopInstancesRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the instances.</p>
     */
    inline StopInstancesRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the instances.</p>
     */
    inline StopInstancesRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }


    /**
     * <p>Hibernates the instance if the instance was enabled for hibernation at
     * launch. If the instance cannot hibernate successfully, a normal shutdown occurs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * Your Instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>
     * Default: <code>false</code> </p>
     */
    inline bool GetHibernate() const{ return m_hibernate; }

    /**
     * <p>Hibernates the instance if the instance was enabled for hibernation at
     * launch. If the instance cannot hibernate successfully, a normal shutdown occurs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * Your Instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>
     * Default: <code>false</code> </p>
     */
    inline bool HibernateHasBeenSet() const { return m_hibernateHasBeenSet; }

    /**
     * <p>Hibernates the instance if the instance was enabled for hibernation at
     * launch. If the instance cannot hibernate successfully, a normal shutdown occurs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * Your Instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>
     * Default: <code>false</code> </p>
     */
    inline void SetHibernate(bool value) { m_hibernateHasBeenSet = true; m_hibernate = value; }

    /**
     * <p>Hibernates the instance if the instance was enabled for hibernation at
     * launch. If the instance cannot hibernate successfully, a normal shutdown occurs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * Your Instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>
     * Default: <code>false</code> </p>
     */
    inline StopInstancesRequest& WithHibernate(bool value) { SetHibernate(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline StopInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Forces the instances to stop. The instances do not have an opportunity to
     * flush file system caches or file system metadata. If you use this option, you
     * must perform file system check and repair procedures. This option is not
     * recommended for Windows instances.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>Forces the instances to stop. The instances do not have an opportunity to
     * flush file system caches or file system metadata. If you use this option, you
     * must perform file system check and repair procedures. This option is not
     * recommended for Windows instances.</p> <p>Default: <code>false</code> </p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>Forces the instances to stop. The instances do not have an opportunity to
     * flush file system caches or file system metadata. If you use this option, you
     * must perform file system check and repair procedures. This option is not
     * recommended for Windows instances.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>Forces the instances to stop. The instances do not have an opportunity to
     * flush file system caches or file system metadata. If you use this option, you
     * must perform file system check and repair procedures. This option is not
     * recommended for Windows instances.</p> <p>Default: <code>false</code> </p>
     */
    inline StopInstancesRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;

    bool m_hibernate;
    bool m_hibernateHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    bool m_force;
    bool m_forceHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
