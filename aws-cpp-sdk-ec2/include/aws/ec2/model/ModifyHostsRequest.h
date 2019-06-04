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
#include <aws/ec2/model/AutoPlacement.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/HostRecovery.h>
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
  class AWS_EC2_API ModifyHostsRequest : public EC2Request
  {
  public:
    ModifyHostsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyHosts"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline const AutoPlacement& GetAutoPlacement() const{ return m_autoPlacement; }

    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline bool AutoPlacementHasBeenSet() const { return m_autoPlacementHasBeenSet; }

    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline void SetAutoPlacement(const AutoPlacement& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = value; }

    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline void SetAutoPlacement(AutoPlacement&& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = std::move(value); }

    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline ModifyHostsRequest& WithAutoPlacement(const AutoPlacement& value) { SetAutoPlacement(value); return *this;}

    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline ModifyHostsRequest& WithAutoPlacement(AutoPlacement&& value) { SetAutoPlacement(std::move(value)); return *this;}


    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIds() const{ return m_hostIds; }

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline bool HostIdsHasBeenSet() const { return m_hostIdsHasBeenSet; }

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline void SetHostIds(const Aws::Vector<Aws::String>& value) { m_hostIdsHasBeenSet = true; m_hostIds = value; }

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline void SetHostIds(Aws::Vector<Aws::String>&& value) { m_hostIdsHasBeenSet = true; m_hostIds = std::move(value); }

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline ModifyHostsRequest& WithHostIds(const Aws::Vector<Aws::String>& value) { SetHostIds(value); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline ModifyHostsRequest& WithHostIds(Aws::Vector<Aws::String>&& value) { SetHostIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline ModifyHostsRequest& AddHostIds(const Aws::String& value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline ModifyHostsRequest& AddHostIds(Aws::String&& value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline ModifyHostsRequest& AddHostIds(const char* value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(value); return *this; }


    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host Recovery</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const HostRecovery& GetHostRecovery() const{ return m_hostRecovery; }

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host Recovery</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool HostRecoveryHasBeenSet() const { return m_hostRecoveryHasBeenSet; }

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host Recovery</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetHostRecovery(const HostRecovery& value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = value; }

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host Recovery</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetHostRecovery(HostRecovery&& value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = std::move(value); }

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host Recovery</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline ModifyHostsRequest& WithHostRecovery(const HostRecovery& value) { SetHostRecovery(value); return *this;}

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host Recovery</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline ModifyHostsRequest& WithHostRecovery(HostRecovery&& value) { SetHostRecovery(std::move(value)); return *this;}

  private:

    AutoPlacement m_autoPlacement;
    bool m_autoPlacementHasBeenSet;

    Aws::Vector<Aws::String> m_hostIds;
    bool m_hostIdsHasBeenSet;

    HostRecovery m_hostRecovery;
    bool m_hostRecoveryHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
