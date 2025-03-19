/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AsnState.h>
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
   * <p>The Autonomous System Number (ASN) and BYOIP CIDR association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Byoasn">AWS API
   * Reference</a></p>
   */
  class Byoasn
  {
  public:
    AWS_EC2_API Byoasn() = default;
    AWS_EC2_API Byoasn(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Byoasn& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A public 2-byte or 4-byte ASN.</p>
     */
    inline const Aws::String& GetAsn() const { return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    template<typename AsnT = Aws::String>
    void SetAsn(AsnT&& value) { m_asnHasBeenSet = true; m_asn = std::forward<AsnT>(value); }
    template<typename AsnT = Aws::String>
    Byoasn& WithAsn(AsnT&& value) { SetAsn(std::forward<AsnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IPAM ID.</p>
     */
    inline const Aws::String& GetIpamId() const { return m_ipamId; }
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
    template<typename IpamIdT = Aws::String>
    void SetIpamId(IpamIdT&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::forward<IpamIdT>(value); }
    template<typename IpamIdT = Aws::String>
    Byoasn& WithIpamId(IpamIdT&& value) { SetIpamId(std::forward<IpamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    Byoasn& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning state of the BYOASN.</p>
     */
    inline AsnState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AsnState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Byoasn& WithState(AsnState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_asn;
    bool m_asnHasBeenSet = false;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    AsnState m_state{AsnState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
