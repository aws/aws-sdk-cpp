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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/HostTenancy.h>
#include <aws/ec2/model/Affinity.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifyInstancePlacement.</p>
   */
  class AWS_EC2_API ModifyInstancePlacementRequest : public EC2Request
  {
  public:
    ModifyInstancePlacementRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline ModifyInstancePlacementRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline ModifyInstancePlacementRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline ModifyInstancePlacementRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The tenancy of the instance that you are modifying.</p>
     */
    inline const HostTenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>The tenancy of the instance that you are modifying.</p>
     */
    inline void SetTenancy(const HostTenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>The tenancy of the instance that you are modifying.</p>
     */
    inline void SetTenancy(HostTenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>The tenancy of the instance that you are modifying.</p>
     */
    inline ModifyInstancePlacementRequest& WithTenancy(const HostTenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>The tenancy of the instance that you are modifying.</p>
     */
    inline ModifyInstancePlacementRequest& WithTenancy(HostTenancy&& value) { SetTenancy(value); return *this;}

    /**
     * <p>The new affinity setting for the instance.</p>
     */
    inline const Affinity& GetAffinity() const{ return m_affinity; }

    /**
     * <p>The new affinity setting for the instance.</p>
     */
    inline void SetAffinity(const Affinity& value) { m_affinityHasBeenSet = true; m_affinity = value; }

    /**
     * <p>The new affinity setting for the instance.</p>
     */
    inline void SetAffinity(Affinity&& value) { m_affinityHasBeenSet = true; m_affinity = value; }

    /**
     * <p>The new affinity setting for the instance.</p>
     */
    inline ModifyInstancePlacementRequest& WithAffinity(const Affinity& value) { SetAffinity(value); return *this;}

    /**
     * <p>The new affinity setting for the instance.</p>
     */
    inline ModifyInstancePlacementRequest& WithAffinity(Affinity&& value) { SetAffinity(value); return *this;}

    /**
     * <p>The ID of the Dedicated host that the instance will have affinity with.</p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }

    /**
     * <p>The ID of the Dedicated host that the instance will have affinity with.</p>
     */
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }

    /**
     * <p>The ID of the Dedicated host that the instance will have affinity with.</p>
     */
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = value; }

    /**
     * <p>The ID of the Dedicated host that the instance will have affinity with.</p>
     */
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }

    /**
     * <p>The ID of the Dedicated host that the instance will have affinity with.</p>
     */
    inline ModifyInstancePlacementRequest& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}

    /**
     * <p>The ID of the Dedicated host that the instance will have affinity with.</p>
     */
    inline ModifyInstancePlacementRequest& WithHostId(Aws::String&& value) { SetHostId(value); return *this;}

    /**
     * <p>The ID of the Dedicated host that the instance will have affinity with.</p>
     */
    inline ModifyInstancePlacementRequest& WithHostId(const char* value) { SetHostId(value); return *this;}

  private:
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    HostTenancy m_tenancy;
    bool m_tenancyHasBeenSet;
    Affinity m_affinity;
    bool m_affinityHasBeenSet;
    Aws::String m_hostId;
    bool m_hostIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
