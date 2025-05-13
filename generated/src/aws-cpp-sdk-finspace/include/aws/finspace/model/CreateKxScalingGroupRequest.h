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
    AWS_FINSPACE_API CreateKxScalingGroupRequest() = default;

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
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateKxScalingGroupRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * scaling group. </p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    CreateKxScalingGroupRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline const Aws::String& GetScalingGroupName() const { return m_scalingGroupName; }
    inline bool ScalingGroupNameHasBeenSet() const { return m_scalingGroupNameHasBeenSet; }
    template<typename ScalingGroupNameT = Aws::String>
    void SetScalingGroupName(ScalingGroupNameT&& value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName = std::forward<ScalingGroupNameT>(value); }
    template<typename ScalingGroupNameT = Aws::String>
    CreateKxScalingGroupRequest& WithScalingGroupName(ScalingGroupNameT&& value) { SetScalingGroupName(std::forward<ScalingGroupNameT>(value)); return *this;}
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
    inline const Aws::String& GetHostType() const { return m_hostType; }
    inline bool HostTypeHasBeenSet() const { return m_hostTypeHasBeenSet; }
    template<typename HostTypeT = Aws::String>
    void SetHostType(HostTypeT&& value) { m_hostTypeHasBeenSet = true; m_hostType = std::forward<HostTypeT>(value); }
    template<typename HostTypeT = Aws::String>
    CreateKxScalingGroupRequest& WithHostType(HostTypeT&& value) { SetHostType(std::forward<HostTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CreateKxScalingGroupRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of key-value pairs to label the scaling group. You can add up to 50
     * tags to a scaling group. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateKxScalingGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateKxScalingGroupRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
