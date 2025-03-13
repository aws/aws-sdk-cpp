/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpcBlockPublicAccessState.h>
#include <aws/ec2/model/InternetGatewayBlockMode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ManagedBy.h>
#include <aws/ec2/model/VpcBlockPublicAccessExclusionsAllowed.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>VPC Block Public Access (BPA) enables you to block resources in VPCs and
   * subnets that you own in a Region from reaching or being reached from the
   * internet through internet gateways and egress-only internet gateways. To learn
   * more about VPC BPA, see <a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/security-vpc-bpa.html">Block
   * public access to VPCs and subnets</a> in the <i>Amazon VPC User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcBlockPublicAccessOptions">AWS
   * API Reference</a></p>
   */
  class VpcBlockPublicAccessOptions
  {
  public:
    AWS_EC2_API VpcBlockPublicAccessOptions() = default;
    AWS_EC2_API VpcBlockPublicAccessOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcBlockPublicAccessOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>An Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    VpcBlockPublicAccessOptions& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    template<typename AwsRegionT = Aws::String>
    void SetAwsRegion(AwsRegionT&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::forward<AwsRegionT>(value); }
    template<typename AwsRegionT = Aws::String>
    VpcBlockPublicAccessOptions& WithAwsRegion(AwsRegionT&& value) { SetAwsRegion(std::forward<AwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of VPC BPA.</p>
     */
    inline VpcBlockPublicAccessState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(VpcBlockPublicAccessState value) { m_stateHasBeenSet = true; m_state = value; }
    inline VpcBlockPublicAccessOptions& WithState(VpcBlockPublicAccessState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current mode of VPC BPA.</p> <ul> <li> <p> <code>off</code>: VPC BPA is
     * not enabled and traffic is allowed to and from internet gateways and egress-only
     * internet gateways in this Region.</p> </li> <li> <p>
     * <code>block-bidirectional</code>: Block all traffic to and from internet
     * gateways and egress-only internet gateways in this Region (except for excluded
     * VPCs and subnets).</p> </li> <li> <p> <code>block-ingress</code>: Block all
     * internet traffic to the VPCs in this Region (except for VPCs or subnets which
     * are excluded). Only traffic to and from NAT gateways and egress-only internet
     * gateways is allowed because these gateways only allow outbound connections to be
     * established.</p> </li> </ul>
     */
    inline InternetGatewayBlockMode GetInternetGatewayBlockMode() const { return m_internetGatewayBlockMode; }
    inline bool InternetGatewayBlockModeHasBeenSet() const { return m_internetGatewayBlockModeHasBeenSet; }
    inline void SetInternetGatewayBlockMode(InternetGatewayBlockMode value) { m_internetGatewayBlockModeHasBeenSet = true; m_internetGatewayBlockMode = value; }
    inline VpcBlockPublicAccessOptions& WithInternetGatewayBlockMode(InternetGatewayBlockMode value) { SetInternetGatewayBlockMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current state.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    VpcBlockPublicAccessOptions& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the VPC BPA mode was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const { return m_lastUpdateTimestamp; }
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    void SetLastUpdateTimestamp(LastUpdateTimestampT&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::forward<LastUpdateTimestampT>(value); }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    VpcBlockPublicAccessOptions& WithLastUpdateTimestamp(LastUpdateTimestampT&& value) { SetLastUpdateTimestamp(std::forward<LastUpdateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that manages the state of VPC BPA. Possible values include:</p>
     * <ul> <li> <p> <code>account</code> - The state is managed by the account.</p>
     * </li> <li> <p> <code>declarative-policy</code> - The state is managed by a
     * declarative policy and can't be modified by the account.</p> </li> </ul>
     */
    inline ManagedBy GetManagedBy() const { return m_managedBy; }
    inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
    inline void SetManagedBy(ManagedBy value) { m_managedByHasBeenSet = true; m_managedBy = value; }
    inline VpcBlockPublicAccessOptions& WithManagedBy(ManagedBy value) { SetManagedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if exclusions are allowed. If you have <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/security-vpc-bpa.html#security-vpc-bpa-exclusions-orgs">enabled
     * VPC BPA at the Organization level</a>, exclusions may be
     * <code>not-allowed</code>. Otherwise, they are <code>allowed</code>.</p>
     */
    inline VpcBlockPublicAccessExclusionsAllowed GetExclusionsAllowed() const { return m_exclusionsAllowed; }
    inline bool ExclusionsAllowedHasBeenSet() const { return m_exclusionsAllowedHasBeenSet; }
    inline void SetExclusionsAllowed(VpcBlockPublicAccessExclusionsAllowed value) { m_exclusionsAllowedHasBeenSet = true; m_exclusionsAllowed = value; }
    inline VpcBlockPublicAccessOptions& WithExclusionsAllowed(VpcBlockPublicAccessExclusionsAllowed value) { SetExclusionsAllowed(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    VpcBlockPublicAccessState m_state{VpcBlockPublicAccessState::NOT_SET};
    bool m_stateHasBeenSet = false;

    InternetGatewayBlockMode m_internetGatewayBlockMode{InternetGatewayBlockMode::NOT_SET};
    bool m_internetGatewayBlockModeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp{};
    bool m_lastUpdateTimestampHasBeenSet = false;

    ManagedBy m_managedBy{ManagedBy::NOT_SET};
    bool m_managedByHasBeenSet = false;

    VpcBlockPublicAccessExclusionsAllowed m_exclusionsAllowed{VpcBlockPublicAccessExclusionsAllowed::NOT_SET};
    bool m_exclusionsAllowedHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
