/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AsnAssociationState.h>
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
   * <p>An Autonomous System Number (ASN) and BYOIP CIDR association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AsnAssociation">AWS
   * API Reference</a></p>
   */
  class AsnAssociation
  {
  public:
    AWS_EC2_API AsnAssociation();
    AWS_EC2_API AsnAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AsnAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The association's ASN.</p>
     */
    inline const Aws::String& GetAsn() const{ return m_asn; }

    /**
     * <p>The association's ASN.</p>
     */
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }

    /**
     * <p>The association's ASN.</p>
     */
    inline void SetAsn(const Aws::String& value) { m_asnHasBeenSet = true; m_asn = value; }

    /**
     * <p>The association's ASN.</p>
     */
    inline void SetAsn(Aws::String&& value) { m_asnHasBeenSet = true; m_asn = std::move(value); }

    /**
     * <p>The association's ASN.</p>
     */
    inline void SetAsn(const char* value) { m_asnHasBeenSet = true; m_asn.assign(value); }

    /**
     * <p>The association's ASN.</p>
     */
    inline AsnAssociation& WithAsn(const Aws::String& value) { SetAsn(value); return *this;}

    /**
     * <p>The association's ASN.</p>
     */
    inline AsnAssociation& WithAsn(Aws::String&& value) { SetAsn(std::move(value)); return *this;}

    /**
     * <p>The association's ASN.</p>
     */
    inline AsnAssociation& WithAsn(const char* value) { SetAsn(value); return *this;}


    /**
     * <p>The association's CIDR.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The association's CIDR.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The association's CIDR.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The association's CIDR.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The association's CIDR.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The association's CIDR.</p>
     */
    inline AsnAssociation& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The association's CIDR.</p>
     */
    inline AsnAssociation& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The association's CIDR.</p>
     */
    inline AsnAssociation& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The association's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The association's status message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The association's status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The association's status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The association's status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The association's status message.</p>
     */
    inline AsnAssociation& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The association's status message.</p>
     */
    inline AsnAssociation& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The association's status message.</p>
     */
    inline AsnAssociation& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The association's state.</p>
     */
    inline const AsnAssociationState& GetState() const{ return m_state; }

    /**
     * <p>The association's state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The association's state.</p>
     */
    inline void SetState(const AsnAssociationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The association's state.</p>
     */
    inline void SetState(AsnAssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The association's state.</p>
     */
    inline AsnAssociation& WithState(const AsnAssociationState& value) { SetState(value); return *this;}

    /**
     * <p>The association's state.</p>
     */
    inline AsnAssociation& WithState(AsnAssociationState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_asn;
    bool m_asnHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    AsnAssociationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
