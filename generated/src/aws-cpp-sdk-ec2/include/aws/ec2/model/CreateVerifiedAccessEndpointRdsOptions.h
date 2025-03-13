/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VerifiedAccessEndpointProtocol.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes the RDS options for a Verified Access endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVerifiedAccessEndpointRdsOptions">AWS
   * API Reference</a></p>
   */
  class CreateVerifiedAccessEndpointRdsOptions
  {
  public:
    AWS_EC2_API CreateVerifiedAccessEndpointRdsOptions() = default;
    AWS_EC2_API CreateVerifiedAccessEndpointRdsOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateVerifiedAccessEndpointRdsOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The protocol.</p>
     */
    inline VerifiedAccessEndpointProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(VerifiedAccessEndpointProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline CreateVerifiedAccessEndpointRdsOptions& WithProtocol(VerifiedAccessEndpointProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateVerifiedAccessEndpointRdsOptions& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the RDS instance.</p>
     */
    inline const Aws::String& GetRdsDbInstanceArn() const { return m_rdsDbInstanceArn; }
    inline bool RdsDbInstanceArnHasBeenSet() const { return m_rdsDbInstanceArnHasBeenSet; }
    template<typename RdsDbInstanceArnT = Aws::String>
    void SetRdsDbInstanceArn(RdsDbInstanceArnT&& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = std::forward<RdsDbInstanceArnT>(value); }
    template<typename RdsDbInstanceArnT = Aws::String>
    CreateVerifiedAccessEndpointRdsOptions& WithRdsDbInstanceArn(RdsDbInstanceArnT&& value) { SetRdsDbInstanceArn(std::forward<RdsDbInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the DB cluster.</p>
     */
    inline const Aws::String& GetRdsDbClusterArn() const { return m_rdsDbClusterArn; }
    inline bool RdsDbClusterArnHasBeenSet() const { return m_rdsDbClusterArnHasBeenSet; }
    template<typename RdsDbClusterArnT = Aws::String>
    void SetRdsDbClusterArn(RdsDbClusterArnT&& value) { m_rdsDbClusterArnHasBeenSet = true; m_rdsDbClusterArn = std::forward<RdsDbClusterArnT>(value); }
    template<typename RdsDbClusterArnT = Aws::String>
    CreateVerifiedAccessEndpointRdsOptions& WithRdsDbClusterArn(RdsDbClusterArnT&& value) { SetRdsDbClusterArn(std::forward<RdsDbClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the RDS proxy.</p>
     */
    inline const Aws::String& GetRdsDbProxyArn() const { return m_rdsDbProxyArn; }
    inline bool RdsDbProxyArnHasBeenSet() const { return m_rdsDbProxyArnHasBeenSet; }
    template<typename RdsDbProxyArnT = Aws::String>
    void SetRdsDbProxyArn(RdsDbProxyArnT&& value) { m_rdsDbProxyArnHasBeenSet = true; m_rdsDbProxyArn = std::forward<RdsDbProxyArnT>(value); }
    template<typename RdsDbProxyArnT = Aws::String>
    CreateVerifiedAccessEndpointRdsOptions& WithRdsDbProxyArn(RdsDbProxyArnT&& value) { SetRdsDbProxyArn(std::forward<RdsDbProxyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RDS endpoint.</p>
     */
    inline const Aws::String& GetRdsEndpoint() const { return m_rdsEndpoint; }
    inline bool RdsEndpointHasBeenSet() const { return m_rdsEndpointHasBeenSet; }
    template<typename RdsEndpointT = Aws::String>
    void SetRdsEndpoint(RdsEndpointT&& value) { m_rdsEndpointHasBeenSet = true; m_rdsEndpoint = std::forward<RdsEndpointT>(value); }
    template<typename RdsEndpointT = Aws::String>
    CreateVerifiedAccessEndpointRdsOptions& WithRdsEndpoint(RdsEndpointT&& value) { SetRdsEndpoint(std::forward<RdsEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets. You can specify only one subnet per Availability
     * Zone.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateVerifiedAccessEndpointRdsOptions& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateVerifiedAccessEndpointRdsOptions& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}
  private:

    VerifiedAccessEndpointProtocol m_protocol{VerifiedAccessEndpointProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_rdsDbInstanceArn;
    bool m_rdsDbInstanceArnHasBeenSet = false;

    Aws::String m_rdsDbClusterArn;
    bool m_rdsDbClusterArnHasBeenSet = false;

    Aws::String m_rdsDbProxyArn;
    bool m_rdsDbProxyArnHasBeenSet = false;

    Aws::String m_rdsEndpoint;
    bool m_rdsEndpointHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
