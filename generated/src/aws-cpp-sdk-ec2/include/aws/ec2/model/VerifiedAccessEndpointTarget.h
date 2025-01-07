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
    AWS_EC2_API VerifiedAccessEndpointTarget();
    AWS_EC2_API VerifiedAccessEndpointTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessEndpointTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Verified Access endpoint.</p>
     */
    inline const Aws::String& GetVerifiedAccessEndpointId() const{ return m_verifiedAccessEndpointId; }
    inline bool VerifiedAccessEndpointIdHasBeenSet() const { return m_verifiedAccessEndpointIdHasBeenSet; }
    inline void SetVerifiedAccessEndpointId(const Aws::String& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = value; }
    inline void SetVerifiedAccessEndpointId(Aws::String&& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = std::move(value); }
    inline void SetVerifiedAccessEndpointId(const char* value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId.assign(value); }
    inline VerifiedAccessEndpointTarget& WithVerifiedAccessEndpointId(const Aws::String& value) { SetVerifiedAccessEndpointId(value); return *this;}
    inline VerifiedAccessEndpointTarget& WithVerifiedAccessEndpointId(Aws::String&& value) { SetVerifiedAccessEndpointId(std::move(value)); return *this;}
    inline VerifiedAccessEndpointTarget& WithVerifiedAccessEndpointId(const char* value) { SetVerifiedAccessEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the target.</p>
     */
    inline const Aws::String& GetVerifiedAccessEndpointTargetIpAddress() const{ return m_verifiedAccessEndpointTargetIpAddress; }
    inline bool VerifiedAccessEndpointTargetIpAddressHasBeenSet() const { return m_verifiedAccessEndpointTargetIpAddressHasBeenSet; }
    inline void SetVerifiedAccessEndpointTargetIpAddress(const Aws::String& value) { m_verifiedAccessEndpointTargetIpAddressHasBeenSet = true; m_verifiedAccessEndpointTargetIpAddress = value; }
    inline void SetVerifiedAccessEndpointTargetIpAddress(Aws::String&& value) { m_verifiedAccessEndpointTargetIpAddressHasBeenSet = true; m_verifiedAccessEndpointTargetIpAddress = std::move(value); }
    inline void SetVerifiedAccessEndpointTargetIpAddress(const char* value) { m_verifiedAccessEndpointTargetIpAddressHasBeenSet = true; m_verifiedAccessEndpointTargetIpAddress.assign(value); }
    inline VerifiedAccessEndpointTarget& WithVerifiedAccessEndpointTargetIpAddress(const Aws::String& value) { SetVerifiedAccessEndpointTargetIpAddress(value); return *this;}
    inline VerifiedAccessEndpointTarget& WithVerifiedAccessEndpointTargetIpAddress(Aws::String&& value) { SetVerifiedAccessEndpointTargetIpAddress(std::move(value)); return *this;}
    inline VerifiedAccessEndpointTarget& WithVerifiedAccessEndpointTargetIpAddress(const char* value) { SetVerifiedAccessEndpointTargetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the target.</p>
     */
    inline const Aws::String& GetVerifiedAccessEndpointTargetDns() const{ return m_verifiedAccessEndpointTargetDns; }
    inline bool VerifiedAccessEndpointTargetDnsHasBeenSet() const { return m_verifiedAccessEndpointTargetDnsHasBeenSet; }
    inline void SetVerifiedAccessEndpointTargetDns(const Aws::String& value) { m_verifiedAccessEndpointTargetDnsHasBeenSet = true; m_verifiedAccessEndpointTargetDns = value; }
    inline void SetVerifiedAccessEndpointTargetDns(Aws::String&& value) { m_verifiedAccessEndpointTargetDnsHasBeenSet = true; m_verifiedAccessEndpointTargetDns = std::move(value); }
    inline void SetVerifiedAccessEndpointTargetDns(const char* value) { m_verifiedAccessEndpointTargetDnsHasBeenSet = true; m_verifiedAccessEndpointTargetDns.assign(value); }
    inline VerifiedAccessEndpointTarget& WithVerifiedAccessEndpointTargetDns(const Aws::String& value) { SetVerifiedAccessEndpointTargetDns(value); return *this;}
    inline VerifiedAccessEndpointTarget& WithVerifiedAccessEndpointTargetDns(Aws::String&& value) { SetVerifiedAccessEndpointTargetDns(std::move(value)); return *this;}
    inline VerifiedAccessEndpointTarget& WithVerifiedAccessEndpointTargetDns(const char* value) { SetVerifiedAccessEndpointTargetDns(value); return *this;}
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
