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
    AWS_EC2_API ModifyVerifiedAccessEndpointRdsOptions() = default;
    AWS_EC2_API ModifyVerifiedAccessEndpointRdsOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ModifyVerifiedAccessEndpointRdsOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IDs of the subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    ModifyVerifiedAccessEndpointRdsOptions& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    ModifyVerifiedAccessEndpointRdsOptions& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The port.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ModifyVerifiedAccessEndpointRdsOptions& WithPort(int value) { SetPort(value); return *this;}
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
    ModifyVerifiedAccessEndpointRdsOptions& WithRdsEndpoint(RdsEndpointT&& value) { SetRdsEndpoint(std::forward<RdsEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_rdsEndpoint;
    bool m_rdsEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
