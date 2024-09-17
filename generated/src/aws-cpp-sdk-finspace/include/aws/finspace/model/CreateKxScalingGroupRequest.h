/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace finspace
{
namespace Model
{

  /**
   */
  class CreateKxScalingGroupRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API CreateKxScalingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKxScalingGroup"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateKxScalingGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateKxScalingGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateKxScalingGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * scaling group. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline CreateKxScalingGroupRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline CreateKxScalingGroupRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline CreateKxScalingGroupRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline const Aws::String& GetScalingGroupName() const{ return m_scalingGroupName; }
    inline bool ScalingGroupNameHasBeenSet() const { return m_scalingGroupNameHasBeenSet; }
    inline void SetScalingGroupName(const Aws::String& value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName = value; }
    inline void SetScalingGroupName(Aws::String&& value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName = std::move(value); }
    inline void SetScalingGroupName(const char* value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName.assign(value); }
    inline CreateKxScalingGroupRequest& WithScalingGroupName(const Aws::String& value) { SetScalingGroupName(value); return *this;}
    inline CreateKxScalingGroupRequest& WithScalingGroupName(Aws::String&& value) { SetScalingGroupName(std::move(value)); return *this;}
    inline CreateKxScalingGroupRequest& WithScalingGroupName(const char* value) { SetScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The memory and CPU capabilities of the scaling group host on which FinSpace
     * Managed kdb clusters will be placed.</p> <p>You can add one of the following
     * values:</p> <ul> <li> <p> <code>kx.sg.large</code> – The host type with a
     * configuration of 16 GiB memory and 2 vCPUs.</p> </li> <li> <p>
     * <code>kx.sg.xlarge</code> – The host type with a configuration of 32 GiB memory
     * and 4 vCPUs.</p> </li> <li> <p> <code>kx.sg.2xlarge</code> – The host type with
     * a configuration of 64 GiB memory and 8 vCPUs.</p> </li> <li> <p>
     * <code>kx.sg.4xlarge</code> – The host type with a configuration of 108 GiB
     * memory and 16 vCPUs.</p> </li> <li> <p> <code>kx.sg.8xlarge</code> – The host
     * type with a configuration of 216 GiB memory and 32 vCPUs.</p> </li> <li> <p>
     * <code>kx.sg.16xlarge</code> – The host type with a configuration of 432 GiB
     * memory and 64 vCPUs.</p> </li> <li> <p> <code>kx.sg.32xlarge</code> – The host
     * type with a configuration of 864 GiB memory and 128 vCPUs.</p> </li> <li> <p>
     * <code>kx.sg1.16xlarge</code> – The host type with a configuration of 1949 GiB
     * memory and 64 vCPUs.</p> </li> <li> <p> <code>kx.sg1.24xlarge</code> – The host
     * type with a configuration of 2948 GiB memory and 96 vCPUs.</p> </li> </ul>
     */
    inline const Aws::String& GetHostType() const{ return m_hostType; }
    inline bool HostTypeHasBeenSet() const { return m_hostTypeHasBeenSet; }
    inline void SetHostType(const Aws::String& value) { m_hostTypeHasBeenSet = true; m_hostType = value; }
    inline void SetHostType(Aws::String&& value) { m_hostTypeHasBeenSet = true; m_hostType = std::move(value); }
    inline void SetHostType(const char* value) { m_hostTypeHasBeenSet = true; m_hostType.assign(value); }
    inline CreateKxScalingGroupRequest& WithHostType(const Aws::String& value) { SetHostType(value); return *this;}
    inline CreateKxScalingGroupRequest& WithHostType(Aws::String&& value) { SetHostType(std::move(value)); return *this;}
    inline CreateKxScalingGroupRequest& WithHostType(const char* value) { SetHostType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline CreateKxScalingGroupRequest& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline CreateKxScalingGroupRequest& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline CreateKxScalingGroupRequest& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of key-value pairs to label the scaling group. You can add up to 50
     * tags to a scaling group. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateKxScalingGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateKxScalingGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateKxScalingGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateKxScalingGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateKxScalingGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateKxScalingGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateKxScalingGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateKxScalingGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateKxScalingGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_scalingGroupName;
    bool m_scalingGroupNameHasBeenSet = false;

    Aws::String m_hostType;
    bool m_hostTypeHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
