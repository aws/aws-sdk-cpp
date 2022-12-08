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
    AWS_EC2_API AssociateTrunkInterfaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateTrunkInterface"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline const Aws::String& GetBranchInterfaceId() const{ return m_branchInterfaceId; }

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline bool BranchInterfaceIdHasBeenSet() const { return m_branchInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline void SetBranchInterfaceId(const Aws::String& value) { m_branchInterfaceIdHasBeenSet = true; m_branchInterfaceId = value; }

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline void SetBranchInterfaceId(Aws::String&& value) { m_branchInterfaceIdHasBeenSet = true; m_branchInterfaceId = std::move(value); }

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline void SetBranchInterfaceId(const char* value) { m_branchInterfaceIdHasBeenSet = true; m_branchInterfaceId.assign(value); }

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline AssociateTrunkInterfaceRequest& WithBranchInterfaceId(const Aws::String& value) { SetBranchInterfaceId(value); return *this;}

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline AssociateTrunkInterfaceRequest& WithBranchInterfaceId(Aws::String&& value) { SetBranchInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline AssociateTrunkInterfaceRequest& WithBranchInterfaceId(const char* value) { SetBranchInterfaceId(value); return *this;}


    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline const Aws::String& GetTrunkInterfaceId() const{ return m_trunkInterfaceId; }

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline bool TrunkInterfaceIdHasBeenSet() const { return m_trunkInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline void SetTrunkInterfaceId(const Aws::String& value) { m_trunkInterfaceIdHasBeenSet = true; m_trunkInterfaceId = value; }

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline void SetTrunkInterfaceId(Aws::String&& value) { m_trunkInterfaceIdHasBeenSet = true; m_trunkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline void SetTrunkInterfaceId(const char* value) { m_trunkInterfaceIdHasBeenSet = true; m_trunkInterfaceId.assign(value); }

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline AssociateTrunkInterfaceRequest& WithTrunkInterfaceId(const Aws::String& value) { SetTrunkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline AssociateTrunkInterfaceRequest& WithTrunkInterfaceId(Aws::String&& value) { SetTrunkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline AssociateTrunkInterfaceRequest& WithTrunkInterfaceId(const char* value) { SetTrunkInterfaceId(value); return *this;}


    /**
     * <p>The ID of the VLAN. This applies to the VLAN protocol.</p>
     */
    inline int GetVlanId() const{ return m_vlanId; }

    /**
     * <p>The ID of the VLAN. This applies to the VLAN protocol.</p>
     */
    inline bool VlanIdHasBeenSet() const { return m_vlanIdHasBeenSet; }

    /**
     * <p>The ID of the VLAN. This applies to the VLAN protocol.</p>
     */
    inline void SetVlanId(int value) { m_vlanIdHasBeenSet = true; m_vlanId = value; }

    /**
     * <p>The ID of the VLAN. This applies to the VLAN protocol.</p>
     */
    inline AssociateTrunkInterfaceRequest& WithVlanId(int value) { SetVlanId(value); return *this;}


    /**
     * <p>The application key. This applies to the GRE protocol.</p>
     */
    inline int GetGreKey() const{ return m_greKey; }

    /**
     * <p>The application key. This applies to the GRE protocol.</p>
     */
    inline bool GreKeyHasBeenSet() const { return m_greKeyHasBeenSet; }

    /**
     * <p>The application key. This applies to the GRE protocol.</p>
     */
    inline void SetGreKey(int value) { m_greKeyHasBeenSet = true; m_greKey = value; }

    /**
     * <p>The application key. This applies to the GRE protocol.</p>
     */
    inline AssociateTrunkInterfaceRequest& WithGreKey(int value) { SetGreKey(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline AssociateTrunkInterfaceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline AssociateTrunkInterfaceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline AssociateTrunkInterfaceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline AssociateTrunkInterfaceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_branchInterfaceId;
    bool m_branchInterfaceIdHasBeenSet = false;

    Aws::String m_trunkInterfaceId;
    bool m_trunkInterfaceIdHasBeenSet = false;

    int m_vlanId;
    bool m_vlanIdHasBeenSet = false;

    int m_greKey;
    bool m_greKeyHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
