/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/EVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EVS
{
namespace Model
{

  /**
   */
  class AssociateEipToVlanRequest : public EVSRequest
  {
  public:
    AWS_EVS_API AssociateEipToVlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateEipToVlan"; }

    AWS_EVS_API Aws::String SerializePayload() const override;

    AWS_EVS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> <p>This parameter is not used in Amazon EVS currently. If you supply
     * input for this parameter, it will have no effect.</p>  <p>A unique,
     * case-sensitive identifier that you provide to ensure the idempotency of the
     * environment creation request. If you do not specify a client token, a randomly
     * generated token is used for the request to ensure idempotency.</p></p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AssociateEipToVlanRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID for the environment containing the VLAN that the Elastic IP
     * address associates with.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    AssociateEipToVlanRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VLAN. <code>hcx</code> is the only accepted VLAN name at this
     * time.</p>
     */
    inline const Aws::String& GetVlanName() const { return m_vlanName; }
    inline bool VlanNameHasBeenSet() const { return m_vlanNameHasBeenSet; }
    template<typename VlanNameT = Aws::String>
    void SetVlanName(VlanNameT&& value) { m_vlanNameHasBeenSet = true; m_vlanName = std::forward<VlanNameT>(value); }
    template<typename VlanNameT = Aws::String>
    AssociateEipToVlanRequest& WithVlanName(VlanNameT&& value) { SetVlanName(std::forward<VlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic IP address allocation ID.</p>
     */
    inline const Aws::String& GetAllocationId() const { return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    template<typename AllocationIdT = Aws::String>
    void SetAllocationId(AllocationIdT&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::forward<AllocationIdT>(value); }
    template<typename AllocationIdT = Aws::String>
    AssociateEipToVlanRequest& WithAllocationId(AllocationIdT&& value) { SetAllocationId(std::forward<AllocationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_vlanName;
    bool m_vlanNameHasBeenSet = false;

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
