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
    AWS_EC2_API CreateVerifiedAccessEndpointRdsOptions();
    AWS_EC2_API CreateVerifiedAccessEndpointRdsOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateVerifiedAccessEndpointRdsOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The protocol.</p>
     */
    inline const VerifiedAccessEndpointProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const VerifiedAccessEndpointProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(VerifiedAccessEndpointProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline CreateVerifiedAccessEndpointRdsOptions& WithProtocol(const VerifiedAccessEndpointProtocol& value) { SetProtocol(value); return *this;}
    inline CreateVerifiedAccessEndpointRdsOptions& WithProtocol(VerifiedAccessEndpointProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateVerifiedAccessEndpointRdsOptions& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the RDS instance.</p>
     */
    inline const Aws::String& GetRdsDbInstanceArn() const{ return m_rdsDbInstanceArn; }
    inline bool RdsDbInstanceArnHasBeenSet() const { return m_rdsDbInstanceArnHasBeenSet; }
    inline void SetRdsDbInstanceArn(const Aws::String& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = value; }
    inline void SetRdsDbInstanceArn(Aws::String&& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = std::move(value); }
    inline void SetRdsDbInstanceArn(const char* value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn.assign(value); }
    inline CreateVerifiedAccessEndpointRdsOptions& WithRdsDbInstanceArn(const Aws::String& value) { SetRdsDbInstanceArn(value); return *this;}
    inline CreateVerifiedAccessEndpointRdsOptions& WithRdsDbInstanceArn(Aws::String&& value) { SetRdsDbInstanceArn(std::move(value)); return *this;}
    inline CreateVerifiedAccessEndpointRdsOptions& WithRdsDbInstanceArn(const char* value) { SetRdsDbInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the DB cluster.</p>
     */
    inline const Aws::String& GetRdsDbClusterArn() const{ return m_rdsDbClusterArn; }
    inline bool RdsDbClusterArnHasBeenSet() const { return m_rdsDbClusterArnHasBeenSet; }
    inline void SetRdsDbClusterArn(const Aws::String& value) { m_rdsDbClusterArnHasBeenSet = true; m_rdsDbClusterArn = value; }
    inline void SetRdsDbClusterArn(Aws::String&& value) { m_rdsDbClusterArnHasBeenSet = true; m_rdsDbClusterArn = std::move(value); }
    inline void SetRdsDbClusterArn(const char* value) { m_rdsDbClusterArnHasBeenSet = true; m_rdsDbClusterArn.assign(value); }
    inline CreateVerifiedAccessEndpointRdsOptions& WithRdsDbClusterArn(const Aws::String& value) { SetRdsDbClusterArn(value); return *this;}
    inline CreateVerifiedAccessEndpointRdsOptions& WithRdsDbClusterArn(Aws::String&& value) { SetRdsDbClusterArn(std::move(value)); return *this;}
    inline CreateVerifiedAccessEndpointRdsOptions& WithRdsDbClusterArn(const char* value) { SetRdsDbClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the RDS proxy.</p>
     */
    inline const Aws::String& GetRdsDbProxyArn() const{ return m_rdsDbProxyArn; }
    inline bool RdsDbProxyArnHasBeenSet() const { return m_rdsDbProxyArnHasBeenSet; }
    inline void SetRdsDbProxyArn(const Aws::String& value) { m_rdsDbProxyArnHasBeenSet = true; m_rdsDbProxyArn = value; }
    inline void SetRdsDbProxyArn(Aws::String&& value) { m_rdsDbProxyArnHasBeenSet = true; m_rdsDbProxyArn = std::move(value); }
    inline void SetRdsDbProxyArn(const char* value) { m_rdsDbProxyArnHasBeenSet = true; m_rdsDbProxyArn.assign(value); }
    inline CreateVerifiedAccessEndpointRdsOptions& WithRdsDbProxyArn(const Aws::String& value) { SetRdsDbProxyArn(value); return *this;}
    inline CreateVerifiedAccessEndpointRdsOptions& WithRdsDbProxyArn(Aws::String&& value) { SetRdsDbProxyArn(std::move(value)); return *this;}
    inline CreateVerifiedAccessEndpointRdsOptions& WithRdsDbProxyArn(const char* value) { SetRdsDbProxyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RDS endpoint.</p>
     */
    inline const Aws::String& GetRdsEndpoint() const{ return m_rdsEndpoint; }
    inline bool RdsEndpointHasBeenSet() const { return m_rdsEndpointHasBeenSet; }
    inline void SetRdsEndpoint(const Aws::String& value) { m_rdsEndpointHasBeenSet = true; m_rdsEndpoint = value; }
    inline void SetRdsEndpoint(Aws::String&& value) { m_rdsEndpointHasBeenSet = true; m_rdsEndpoint = std::move(value); }
    inline void SetRdsEndpoint(const char* value) { m_rdsEndpointHasBeenSet = true; m_rdsEndpoint.assign(value); }
    inline CreateVerifiedAccessEndpointRdsOptions& WithRdsEndpoint(const Aws::String& value) { SetRdsEndpoint(value); return *this;}
    inline CreateVerifiedAccessEndpointRdsOptions& WithRdsEndpoint(Aws::String&& value) { SetRdsEndpoint(std::move(value)); return *this;}
    inline CreateVerifiedAccessEndpointRdsOptions& WithRdsEndpoint(const char* value) { SetRdsEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline CreateVerifiedAccessEndpointRdsOptions& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline CreateVerifiedAccessEndpointRdsOptions& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline CreateVerifiedAccessEndpointRdsOptions& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline CreateVerifiedAccessEndpointRdsOptions& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline CreateVerifiedAccessEndpointRdsOptions& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}
  private:

    VerifiedAccessEndpointProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_port;
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
