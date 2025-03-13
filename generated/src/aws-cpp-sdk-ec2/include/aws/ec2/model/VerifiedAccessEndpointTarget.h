/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
   * <p>Describes the targets for the specified Verified Access
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessEndpointTarget">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessEndpointTarget
  {
  public:
    AWS_EC2_API VerifiedAccessEndpointTarget() = default;
    AWS_EC2_API VerifiedAccessEndpointTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessEndpointTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Verified Access endpoint.</p>
     */
    inline const Aws::String& GetVerifiedAccessEndpointId() const { return m_verifiedAccessEndpointId; }
    inline bool VerifiedAccessEndpointIdHasBeenSet() const { return m_verifiedAccessEndpointIdHasBeenSet; }
    template<typename VerifiedAccessEndpointIdT = Aws::String>
    void SetVerifiedAccessEndpointId(VerifiedAccessEndpointIdT&& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = std::forward<VerifiedAccessEndpointIdT>(value); }
    template<typename VerifiedAccessEndpointIdT = Aws::String>
    VerifiedAccessEndpointTarget& WithVerifiedAccessEndpointId(VerifiedAccessEndpointIdT&& value) { SetVerifiedAccessEndpointId(std::forward<VerifiedAccessEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the target.</p>
     */
    inline const Aws::String& GetVerifiedAccessEndpointTargetIpAddress() const { return m_verifiedAccessEndpointTargetIpAddress; }
    inline bool VerifiedAccessEndpointTargetIpAddressHasBeenSet() const { return m_verifiedAccessEndpointTargetIpAddressHasBeenSet; }
    template<typename VerifiedAccessEndpointTargetIpAddressT = Aws::String>
    void SetVerifiedAccessEndpointTargetIpAddress(VerifiedAccessEndpointTargetIpAddressT&& value) { m_verifiedAccessEndpointTargetIpAddressHasBeenSet = true; m_verifiedAccessEndpointTargetIpAddress = std::forward<VerifiedAccessEndpointTargetIpAddressT>(value); }
    template<typename VerifiedAccessEndpointTargetIpAddressT = Aws::String>
    VerifiedAccessEndpointTarget& WithVerifiedAccessEndpointTargetIpAddress(VerifiedAccessEndpointTargetIpAddressT&& value) { SetVerifiedAccessEndpointTargetIpAddress(std::forward<VerifiedAccessEndpointTargetIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the target.</p>
     */
    inline const Aws::String& GetVerifiedAccessEndpointTargetDns() const { return m_verifiedAccessEndpointTargetDns; }
    inline bool VerifiedAccessEndpointTargetDnsHasBeenSet() const { return m_verifiedAccessEndpointTargetDnsHasBeenSet; }
    template<typename VerifiedAccessEndpointTargetDnsT = Aws::String>
    void SetVerifiedAccessEndpointTargetDns(VerifiedAccessEndpointTargetDnsT&& value) { m_verifiedAccessEndpointTargetDnsHasBeenSet = true; m_verifiedAccessEndpointTargetDns = std::forward<VerifiedAccessEndpointTargetDnsT>(value); }
    template<typename VerifiedAccessEndpointTargetDnsT = Aws::String>
    VerifiedAccessEndpointTarget& WithVerifiedAccessEndpointTargetDns(VerifiedAccessEndpointTargetDnsT&& value) { SetVerifiedAccessEndpointTargetDns(std::forward<VerifiedAccessEndpointTargetDnsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedAccessEndpointId;
    bool m_verifiedAccessEndpointIdHasBeenSet = false;

    Aws::String m_verifiedAccessEndpointTargetIpAddress;
    bool m_verifiedAccessEndpointTargetIpAddressHasBeenSet = false;

    Aws::String m_verifiedAccessEndpointTargetDns;
    bool m_verifiedAccessEndpointTargetDnsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
