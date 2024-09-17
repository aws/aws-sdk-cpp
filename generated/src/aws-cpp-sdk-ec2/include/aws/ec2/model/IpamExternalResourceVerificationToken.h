/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/TokenState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpamExternalResourceVerificationTokenState.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>A verification token is an Amazon Web Services-generated random value that
   * you can use to prove ownership of an external resource. For example, you can use
   * a verification token to validate that you control a public IP address range when
   * you bring an IP address range to Amazon Web Services (BYOIP). </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamExternalResourceVerificationToken">AWS
   * API Reference</a></p>
   */
  class IpamExternalResourceVerificationToken
  {
  public:
    AWS_EC2_API IpamExternalResourceVerificationToken();
    AWS_EC2_API IpamExternalResourceVerificationToken(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamExternalResourceVerificationToken& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the token.</p>
     */
    inline const Aws::String& GetIpamExternalResourceVerificationTokenId() const{ return m_ipamExternalResourceVerificationTokenId; }
    inline bool IpamExternalResourceVerificationTokenIdHasBeenSet() const { return m_ipamExternalResourceVerificationTokenIdHasBeenSet; }
    inline void SetIpamExternalResourceVerificationTokenId(const Aws::String& value) { m_ipamExternalResourceVerificationTokenIdHasBeenSet = true; m_ipamExternalResourceVerificationTokenId = value; }
    inline void SetIpamExternalResourceVerificationTokenId(Aws::String&& value) { m_ipamExternalResourceVerificationTokenIdHasBeenSet = true; m_ipamExternalResourceVerificationTokenId = std::move(value); }
    inline void SetIpamExternalResourceVerificationTokenId(const char* value) { m_ipamExternalResourceVerificationTokenIdHasBeenSet = true; m_ipamExternalResourceVerificationTokenId.assign(value); }
    inline IpamExternalResourceVerificationToken& WithIpamExternalResourceVerificationTokenId(const Aws::String& value) { SetIpamExternalResourceVerificationTokenId(value); return *this;}
    inline IpamExternalResourceVerificationToken& WithIpamExternalResourceVerificationTokenId(Aws::String&& value) { SetIpamExternalResourceVerificationTokenId(std::move(value)); return *this;}
    inline IpamExternalResourceVerificationToken& WithIpamExternalResourceVerificationTokenId(const char* value) { SetIpamExternalResourceVerificationTokenId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token ARN.</p>
     */
    inline const Aws::String& GetIpamExternalResourceVerificationTokenArn() const{ return m_ipamExternalResourceVerificationTokenArn; }
    inline bool IpamExternalResourceVerificationTokenArnHasBeenSet() const { return m_ipamExternalResourceVerificationTokenArnHasBeenSet; }
    inline void SetIpamExternalResourceVerificationTokenArn(const Aws::String& value) { m_ipamExternalResourceVerificationTokenArnHasBeenSet = true; m_ipamExternalResourceVerificationTokenArn = value; }
    inline void SetIpamExternalResourceVerificationTokenArn(Aws::String&& value) { m_ipamExternalResourceVerificationTokenArnHasBeenSet = true; m_ipamExternalResourceVerificationTokenArn = std::move(value); }
    inline void SetIpamExternalResourceVerificationTokenArn(const char* value) { m_ipamExternalResourceVerificationTokenArnHasBeenSet = true; m_ipamExternalResourceVerificationTokenArn.assign(value); }
    inline IpamExternalResourceVerificationToken& WithIpamExternalResourceVerificationTokenArn(const Aws::String& value) { SetIpamExternalResourceVerificationTokenArn(value); return *this;}
    inline IpamExternalResourceVerificationToken& WithIpamExternalResourceVerificationTokenArn(Aws::String&& value) { SetIpamExternalResourceVerificationTokenArn(std::move(value)); return *this;}
    inline IpamExternalResourceVerificationToken& WithIpamExternalResourceVerificationTokenArn(const char* value) { SetIpamExternalResourceVerificationTokenArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM that created the token.</p>
     */
    inline const Aws::String& GetIpamId() const{ return m_ipamId; }
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
    inline void SetIpamId(const Aws::String& value) { m_ipamIdHasBeenSet = true; m_ipamId = value; }
    inline void SetIpamId(Aws::String&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::move(value); }
    inline void SetIpamId(const char* value) { m_ipamIdHasBeenSet = true; m_ipamId.assign(value); }
    inline IpamExternalResourceVerificationToken& WithIpamId(const Aws::String& value) { SetIpamId(value); return *this;}
    inline IpamExternalResourceVerificationToken& WithIpamId(Aws::String&& value) { SetIpamId(std::move(value)); return *this;}
    inline IpamExternalResourceVerificationToken& WithIpamId(const char* value) { SetIpamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the IPAM that created the token.</p>
     */
    inline const Aws::String& GetIpamArn() const{ return m_ipamArn; }
    inline bool IpamArnHasBeenSet() const { return m_ipamArnHasBeenSet; }
    inline void SetIpamArn(const Aws::String& value) { m_ipamArnHasBeenSet = true; m_ipamArn = value; }
    inline void SetIpamArn(Aws::String&& value) { m_ipamArnHasBeenSet = true; m_ipamArn = std::move(value); }
    inline void SetIpamArn(const char* value) { m_ipamArnHasBeenSet = true; m_ipamArn.assign(value); }
    inline IpamExternalResourceVerificationToken& WithIpamArn(const Aws::String& value) { SetIpamArn(value); return *this;}
    inline IpamExternalResourceVerificationToken& WithIpamArn(Aws::String&& value) { SetIpamArn(std::move(value)); return *this;}
    inline IpamExternalResourceVerificationToken& WithIpamArn(const char* value) { SetIpamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of the IPAM that created the token.</p>
     */
    inline const Aws::String& GetIpamRegion() const{ return m_ipamRegion; }
    inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }
    inline void SetIpamRegion(const Aws::String& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = value; }
    inline void SetIpamRegion(Aws::String&& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = std::move(value); }
    inline void SetIpamRegion(const char* value) { m_ipamRegionHasBeenSet = true; m_ipamRegion.assign(value); }
    inline IpamExternalResourceVerificationToken& WithIpamRegion(const Aws::String& value) { SetIpamRegion(value); return *this;}
    inline IpamExternalResourceVerificationToken& WithIpamRegion(Aws::String&& value) { SetIpamRegion(std::move(value)); return *this;}
    inline IpamExternalResourceVerificationToken& WithIpamRegion(const char* value) { SetIpamRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token value.</p>
     */
    inline const Aws::String& GetTokenValue() const{ return m_tokenValue; }
    inline bool TokenValueHasBeenSet() const { return m_tokenValueHasBeenSet; }
    inline void SetTokenValue(const Aws::String& value) { m_tokenValueHasBeenSet = true; m_tokenValue = value; }
    inline void SetTokenValue(Aws::String&& value) { m_tokenValueHasBeenSet = true; m_tokenValue = std::move(value); }
    inline void SetTokenValue(const char* value) { m_tokenValueHasBeenSet = true; m_tokenValue.assign(value); }
    inline IpamExternalResourceVerificationToken& WithTokenValue(const Aws::String& value) { SetTokenValue(value); return *this;}
    inline IpamExternalResourceVerificationToken& WithTokenValue(Aws::String&& value) { SetTokenValue(std::move(value)); return *this;}
    inline IpamExternalResourceVerificationToken& WithTokenValue(const char* value) { SetTokenValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token name.</p>
     */
    inline const Aws::String& GetTokenName() const{ return m_tokenName; }
    inline bool TokenNameHasBeenSet() const { return m_tokenNameHasBeenSet; }
    inline void SetTokenName(const Aws::String& value) { m_tokenNameHasBeenSet = true; m_tokenName = value; }
    inline void SetTokenName(Aws::String&& value) { m_tokenNameHasBeenSet = true; m_tokenName = std::move(value); }
    inline void SetTokenName(const char* value) { m_tokenNameHasBeenSet = true; m_tokenName.assign(value); }
    inline IpamExternalResourceVerificationToken& WithTokenName(const Aws::String& value) { SetTokenName(value); return *this;}
    inline IpamExternalResourceVerificationToken& WithTokenName(Aws::String&& value) { SetTokenName(std::move(value)); return *this;}
    inline IpamExternalResourceVerificationToken& WithTokenName(const char* value) { SetTokenName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token expiration.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const{ return m_notAfter; }
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
    inline void SetNotAfter(const Aws::Utils::DateTime& value) { m_notAfterHasBeenSet = true; m_notAfter = value; }
    inline void SetNotAfter(Aws::Utils::DateTime&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::move(value); }
    inline IpamExternalResourceVerificationToken& WithNotAfter(const Aws::Utils::DateTime& value) { SetNotAfter(value); return *this;}
    inline IpamExternalResourceVerificationToken& WithNotAfter(Aws::Utils::DateTime&& value) { SetNotAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token status.</p>
     */
    inline const TokenState& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TokenState& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TokenState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline IpamExternalResourceVerificationToken& WithStatus(const TokenState& value) { SetStatus(value); return *this;}
    inline IpamExternalResourceVerificationToken& WithStatus(TokenState&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline IpamExternalResourceVerificationToken& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline IpamExternalResourceVerificationToken& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline IpamExternalResourceVerificationToken& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline IpamExternalResourceVerificationToken& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token state.</p>
     */
    inline const IpamExternalResourceVerificationTokenState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const IpamExternalResourceVerificationTokenState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(IpamExternalResourceVerificationTokenState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline IpamExternalResourceVerificationToken& WithState(const IpamExternalResourceVerificationTokenState& value) { SetState(value); return *this;}
    inline IpamExternalResourceVerificationToken& WithState(IpamExternalResourceVerificationTokenState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipamExternalResourceVerificationTokenId;
    bool m_ipamExternalResourceVerificationTokenIdHasBeenSet = false;

    Aws::String m_ipamExternalResourceVerificationTokenArn;
    bool m_ipamExternalResourceVerificationTokenArnHasBeenSet = false;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

    Aws::String m_ipamArn;
    bool m_ipamArnHasBeenSet = false;

    Aws::String m_ipamRegion;
    bool m_ipamRegionHasBeenSet = false;

    Aws::String m_tokenValue;
    bool m_tokenValueHasBeenSet = false;

    Aws::String m_tokenName;
    bool m_tokenNameHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter;
    bool m_notAfterHasBeenSet = false;

    TokenState m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    IpamExternalResourceVerificationTokenState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
