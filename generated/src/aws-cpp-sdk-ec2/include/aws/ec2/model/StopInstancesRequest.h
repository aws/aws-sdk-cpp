/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StopInstancesRequest : public EC2Request
  {
  public:
    AWS_EC2_API StopInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopInstances"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    StopInstancesRequest& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    StopInstancesRequest& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Hibernates the instance if the instance was enabled for hibernation at
     * launch. If the instance cannot hibernate successfully, a normal shutdown occurs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
     * your Amazon EC2 instance</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>
     * Default: <code>false</code> </p>
     */
    inline bool GetHibernate() const { return m_hibernate; }
    inline bool HibernateHasBeenSet() const { return m_hibernateHasBeenSet; }
    inline void SetHibernate(bool value) { m_hibernateHasBeenSet = true; m_hibernate = value; }
    inline StopInstancesRequest& WithHibernate(bool value) { SetHibernate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to bypass the graceful OS shutdown process when the
     * instance is stopped.</p>  <p>Bypassing the graceful OS shutdown might
     * result in data loss or corruption (for example, memory contents not flushed to
     * disk or loss of in-flight IOs) or skipped shutdown scripts.</p> 
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetSkipOsShutdown() const { return m_skipOsShutdown; }
    inline bool SkipOsShutdownHasBeenSet() const { return m_skipOsShutdownHasBeenSet; }
    inline void SetSkipOsShutdown(bool value) { m_skipOsShutdownHasBeenSet = true; m_skipOsShutdown = value; }
    inline StopInstancesRequest& WithSkipOsShutdown(bool value) { SetSkipOsShutdown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline StopInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Forces the instance to stop. The instance will first attempt a graceful
     * shutdown, which includes flushing file system caches and metadata. If the
     * graceful shutdown fails to complete within the timeout period, the instance
     * shuts down forcibly without flushing the file system caches and metadata.</p>
     * <p>After using this option, you must perform file system check and repair
     * procedures. This option is not recommended for Windows instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesStopping.html">Troubleshoot
     * Amazon EC2 instance stop issues</a> in the <i>Amazon EC2 User Guide</i>.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetForce() const { return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline StopInstancesRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    bool m_hibernate{false};
    bool m_hibernateHasBeenSet = false;

    bool m_skipOsShutdown{false};
    bool m_skipOsShutdownHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    bool m_force{false};
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
