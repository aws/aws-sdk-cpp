﻿/**
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
    AWS_EC2_API Byoasn();
    AWS_EC2_API Byoasn(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Byoasn& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A public 2-byte or 4-byte ASN.</p>
     */
    inline const Aws::String& GetAsn() const{ return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    inline void SetAsn(const Aws::String& value) { m_asnHasBeenSet = true; m_asn = value; }
    inline void SetAsn(Aws::String&& value) { m_asnHasBeenSet = true; m_asn = std::move(value); }
    inline void SetAsn(const char* value) { m_asnHasBeenSet = true; m_asn.assign(value); }
    inline Byoasn& WithAsn(const Aws::String& value) { SetAsn(value); return *this;}
    inline Byoasn& WithAsn(Aws::String&& value) { SetAsn(std::move(value)); return *this;}
    inline Byoasn& WithAsn(const char* value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IPAM ID.</p>
     */
    inline const Aws::String& GetIpamId() const{ return m_ipamId; }
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
    inline void SetIpamId(const Aws::String& value) { m_ipamIdHasBeenSet = true; m_ipamId = value; }
    inline void SetIpamId(Aws::String&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::move(value); }
    inline void SetIpamId(const char* value) { m_ipamIdHasBeenSet = true; m_ipamId.assign(value); }
    inline Byoasn& WithIpamId(const Aws::String& value) { SetIpamId(value); return *this;}
    inline Byoasn& WithIpamId(Aws::String&& value) { SetIpamId(std::move(value)); return *this;}
    inline Byoasn& WithIpamId(const char* value) { SetIpamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline Byoasn& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline Byoasn& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline Byoasn& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning state of the BYOASN.</p>
     */
    inline const AsnState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const AsnState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(AsnState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Byoasn& WithState(const AsnState& value) { SetState(value); return *this;}
    inline Byoasn& WithState(AsnState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_asn;
    bool m_asnHasBeenSet = false;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    AsnState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
