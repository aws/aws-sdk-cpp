/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AssociateTrunkInterfaceRequest : public EC2Request
  {
  public:
    AWS_EC2_API AssociateTrunkInterfaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateTrunkInterface"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline const Aws::String& GetBranchInterfaceId() const { return m_branchInterfaceId; }
    inline bool BranchInterfaceIdHasBeenSet() const { return m_branchInterfaceIdHasBeenSet; }
    template<typename BranchInterfaceIdT = Aws::String>
    void SetBranchInterfaceId(BranchInterfaceIdT&& value) { m_branchInterfaceIdHasBeenSet = true; m_branchInterfaceId = std::forward<BranchInterfaceIdT>(value); }
    template<typename BranchInterfaceIdT = Aws::String>
    AssociateTrunkInterfaceRequest& WithBranchInterfaceId(BranchInterfaceIdT&& value) { SetBranchInterfaceId(std::forward<BranchInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline const Aws::String& GetTrunkInterfaceId() const { return m_trunkInterfaceId; }
    inline bool TrunkInterfaceIdHasBeenSet() const { return m_trunkInterfaceIdHasBeenSet; }
    template<typename TrunkInterfaceIdT = Aws::String>
    void SetTrunkInterfaceId(TrunkInterfaceIdT&& value) { m_trunkInterfaceIdHasBeenSet = true; m_trunkInterfaceId = std::forward<TrunkInterfaceIdT>(value); }
    template<typename TrunkInterfaceIdT = Aws::String>
    AssociateTrunkInterfaceRequest& WithTrunkInterfaceId(TrunkInterfaceIdT&& value) { SetTrunkInterfaceId(std::forward<TrunkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VLAN. This applies to the VLAN protocol.</p>
     */
    inline int GetVlanId() const { return m_vlanId; }
    inline bool VlanIdHasBeenSet() const { return m_vlanIdHasBeenSet; }
    inline void SetVlanId(int value) { m_vlanIdHasBeenSet = true; m_vlanId = value; }
    inline AssociateTrunkInterfaceRequest& WithVlanId(int value) { SetVlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application key. This applies to the GRE protocol.</p>
     */
    inline int GetGreKey() const { return m_greKey; }
    inline bool GreKeyHasBeenSet() const { return m_greKeyHasBeenSet; }
    inline void SetGreKey(int value) { m_greKeyHasBeenSet = true; m_greKey = value; }
    inline AssociateTrunkInterfaceRequest& WithGreKey(int value) { SetGreKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AssociateTrunkInterfaceRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline AssociateTrunkInterfaceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_branchInterfaceId;
    bool m_branchInterfaceIdHasBeenSet = false;

    Aws::String m_trunkInterfaceId;
    bool m_trunkInterfaceIdHasBeenSet = false;

    int m_vlanId{0};
    bool m_vlanIdHasBeenSet = false;

    int m_greKey{0};
    bool m_greKeyHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
