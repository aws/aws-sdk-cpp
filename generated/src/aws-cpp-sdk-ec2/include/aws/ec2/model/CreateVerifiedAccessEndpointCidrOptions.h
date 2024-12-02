/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VerifiedAccessEndpointProtocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CreateVerifiedAccessEndpointPortRange.h>
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
   * <p>Describes the CIDR options for a Verified Access endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVerifiedAccessEndpointCidrOptions">AWS
   * API Reference</a></p>
   */
  class CreateVerifiedAccessEndpointCidrOptions
  {
  public:
    AWS_EC2_API CreateVerifiedAccessEndpointCidrOptions();
    AWS_EC2_API CreateVerifiedAccessEndpointCidrOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateVerifiedAccessEndpointCidrOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline CreateVerifiedAccessEndpointCidrOptions& WithProtocol(const VerifiedAccessEndpointProtocol& value) { SetProtocol(value); return *this;}
    inline CreateVerifiedAccessEndpointCidrOptions& WithProtocol(VerifiedAccessEndpointProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline CreateVerifiedAccessEndpointCidrOptions& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline CreateVerifiedAccessEndpointCidrOptions& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline CreateVerifiedAccessEndpointCidrOptions& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline CreateVerifiedAccessEndpointCidrOptions& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline CreateVerifiedAccessEndpointCidrOptions& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CIDR.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline CreateVerifiedAccessEndpointCidrOptions& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline CreateVerifiedAccessEndpointCidrOptions& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline CreateVerifiedAccessEndpointCidrOptions& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port ranges.</p>
     */
    inline const Aws::Vector<CreateVerifiedAccessEndpointPortRange>& GetPortRanges() const{ return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    inline void SetPortRanges(const Aws::Vector<CreateVerifiedAccessEndpointPortRange>& value) { m_portRangesHasBeenSet = true; m_portRanges = value; }
    inline void SetPortRanges(Aws::Vector<CreateVerifiedAccessEndpointPortRange>&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::move(value); }
    inline CreateVerifiedAccessEndpointCidrOptions& WithPortRanges(const Aws::Vector<CreateVerifiedAccessEndpointPortRange>& value) { SetPortRanges(value); return *this;}
    inline CreateVerifiedAccessEndpointCidrOptions& WithPortRanges(Aws::Vector<CreateVerifiedAccessEndpointPortRange>&& value) { SetPortRanges(std::move(value)); return *this;}
    inline CreateVerifiedAccessEndpointCidrOptions& AddPortRanges(const CreateVerifiedAccessEndpointPortRange& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(value); return *this; }
    inline CreateVerifiedAccessEndpointCidrOptions& AddPortRanges(CreateVerifiedAccessEndpointPortRange&& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(std::move(value)); return *this; }
    ///@}
  private:

    VerifiedAccessEndpointProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::Vector<CreateVerifiedAccessEndpointPortRange> m_portRanges;
    bool m_portRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
