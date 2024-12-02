/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ModifyVerifiedAccessEndpointPortRange.h>
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
   * <p>The CIDR options for a Verified Access endpoint.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessEndpointCidrOptions">AWS
   * API Reference</a></p>
   */
  class ModifyVerifiedAccessEndpointCidrOptions
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessEndpointCidrOptions();
    AWS_EC2_API ModifyVerifiedAccessEndpointCidrOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ModifyVerifiedAccessEndpointCidrOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The port ranges.</p>
     */
    inline const Aws::Vector<ModifyVerifiedAccessEndpointPortRange>& GetPortRanges() const{ return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    inline void SetPortRanges(const Aws::Vector<ModifyVerifiedAccessEndpointPortRange>& value) { m_portRangesHasBeenSet = true; m_portRanges = value; }
    inline void SetPortRanges(Aws::Vector<ModifyVerifiedAccessEndpointPortRange>&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::move(value); }
    inline ModifyVerifiedAccessEndpointCidrOptions& WithPortRanges(const Aws::Vector<ModifyVerifiedAccessEndpointPortRange>& value) { SetPortRanges(value); return *this;}
    inline ModifyVerifiedAccessEndpointCidrOptions& WithPortRanges(Aws::Vector<ModifyVerifiedAccessEndpointPortRange>&& value) { SetPortRanges(std::move(value)); return *this;}
    inline ModifyVerifiedAccessEndpointCidrOptions& AddPortRanges(const ModifyVerifiedAccessEndpointPortRange& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(value); return *this; }
    inline ModifyVerifiedAccessEndpointCidrOptions& AddPortRanges(ModifyVerifiedAccessEndpointPortRange&& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ModifyVerifiedAccessEndpointPortRange> m_portRanges;
    bool m_portRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
