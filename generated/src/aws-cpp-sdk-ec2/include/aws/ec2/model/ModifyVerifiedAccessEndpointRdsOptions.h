/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The RDS options for a Verified Access endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessEndpointRdsOptions">AWS
   * API Reference</a></p>
   */
  class ModifyVerifiedAccessEndpointRdsOptions
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessEndpointRdsOptions();
    AWS_EC2_API ModifyVerifiedAccessEndpointRdsOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ModifyVerifiedAccessEndpointRdsOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IDs of the subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline ModifyVerifiedAccessEndpointRdsOptions& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline ModifyVerifiedAccessEndpointRdsOptions& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline ModifyVerifiedAccessEndpointRdsOptions& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline ModifyVerifiedAccessEndpointRdsOptions& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline ModifyVerifiedAccessEndpointRdsOptions& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The port.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ModifyVerifiedAccessEndpointRdsOptions& WithPort(int value) { SetPort(value); return *this;}
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
    inline ModifyVerifiedAccessEndpointRdsOptions& WithRdsEndpoint(const Aws::String& value) { SetRdsEndpoint(value); return *this;}
    inline ModifyVerifiedAccessEndpointRdsOptions& WithRdsEndpoint(Aws::String&& value) { SetRdsEndpoint(std::move(value)); return *this;}
    inline ModifyVerifiedAccessEndpointRdsOptions& WithRdsEndpoint(const char* value) { SetRdsEndpoint(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_rdsEndpoint;
    bool m_rdsEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
