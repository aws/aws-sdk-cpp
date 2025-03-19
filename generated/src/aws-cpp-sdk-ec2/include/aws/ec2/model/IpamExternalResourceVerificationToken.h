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
    AWS_EC2_API IpamExternalResourceVerificationToken() = default;
    AWS_EC2_API IpamExternalResourceVerificationToken(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamExternalResourceVerificationToken& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the token.</p>
     */
    inline const Aws::String& GetIpamExternalResourceVerificationTokenId() const { return m_ipamExternalResourceVerificationTokenId; }
    inline bool IpamExternalResourceVerificationTokenIdHasBeenSet() const { return m_ipamExternalResourceVerificationTokenIdHasBeenSet; }
    template<typename IpamExternalResourceVerificationTokenIdT = Aws::String>
    void SetIpamExternalResourceVerificationTokenId(IpamExternalResourceVerificationTokenIdT&& value) { m_ipamExternalResourceVerificationTokenIdHasBeenSet = true; m_ipamExternalResourceVerificationTokenId = std::forward<IpamExternalResourceVerificationTokenIdT>(value); }
    template<typename IpamExternalResourceVerificationTokenIdT = Aws::String>
    IpamExternalResourceVerificationToken& WithIpamExternalResourceVerificationTokenId(IpamExternalResourceVerificationTokenIdT&& value) { SetIpamExternalResourceVerificationTokenId(std::forward<IpamExternalResourceVerificationTokenIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token ARN.</p>
     */
    inline const Aws::String& GetIpamExternalResourceVerificationTokenArn() const { return m_ipamExternalResourceVerificationTokenArn; }
    inline bool IpamExternalResourceVerificationTokenArnHasBeenSet() const { return m_ipamExternalResourceVerificationTokenArnHasBeenSet; }
    template<typename IpamExternalResourceVerificationTokenArnT = Aws::String>
    void SetIpamExternalResourceVerificationTokenArn(IpamExternalResourceVerificationTokenArnT&& value) { m_ipamExternalResourceVerificationTokenArnHasBeenSet = true; m_ipamExternalResourceVerificationTokenArn = std::forward<IpamExternalResourceVerificationTokenArnT>(value); }
    template<typename IpamExternalResourceVerificationTokenArnT = Aws::String>
    IpamExternalResourceVerificationToken& WithIpamExternalResourceVerificationTokenArn(IpamExternalResourceVerificationTokenArnT&& value) { SetIpamExternalResourceVerificationTokenArn(std::forward<IpamExternalResourceVerificationTokenArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM that created the token.</p>
     */
    inline const Aws::String& GetIpamId() const { return m_ipamId; }
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
    template<typename IpamIdT = Aws::String>
    void SetIpamId(IpamIdT&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::forward<IpamIdT>(value); }
    template<typename IpamIdT = Aws::String>
    IpamExternalResourceVerificationToken& WithIpamId(IpamIdT&& value) { SetIpamId(std::forward<IpamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the IPAM that created the token.</p>
     */
    inline const Aws::String& GetIpamArn() const { return m_ipamArn; }
    inline bool IpamArnHasBeenSet() const { return m_ipamArnHasBeenSet; }
    template<typename IpamArnT = Aws::String>
    void SetIpamArn(IpamArnT&& value) { m_ipamArnHasBeenSet = true; m_ipamArn = std::forward<IpamArnT>(value); }
    template<typename IpamArnT = Aws::String>
    IpamExternalResourceVerificationToken& WithIpamArn(IpamArnT&& value) { SetIpamArn(std::forward<IpamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of the IPAM that created the token.</p>
     */
    inline const Aws::String& GetIpamRegion() const { return m_ipamRegion; }
    inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }
    template<typename IpamRegionT = Aws::String>
    void SetIpamRegion(IpamRegionT&& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = std::forward<IpamRegionT>(value); }
    template<typename IpamRegionT = Aws::String>
    IpamExternalResourceVerificationToken& WithIpamRegion(IpamRegionT&& value) { SetIpamRegion(std::forward<IpamRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token value.</p>
     */
    inline const Aws::String& GetTokenValue() const { return m_tokenValue; }
    inline bool TokenValueHasBeenSet() const { return m_tokenValueHasBeenSet; }
    template<typename TokenValueT = Aws::String>
    void SetTokenValue(TokenValueT&& value) { m_tokenValueHasBeenSet = true; m_tokenValue = std::forward<TokenValueT>(value); }
    template<typename TokenValueT = Aws::String>
    IpamExternalResourceVerificationToken& WithTokenValue(TokenValueT&& value) { SetTokenValue(std::forward<TokenValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token name.</p>
     */
    inline const Aws::String& GetTokenName() const { return m_tokenName; }
    inline bool TokenNameHasBeenSet() const { return m_tokenNameHasBeenSet; }
    template<typename TokenNameT = Aws::String>
    void SetTokenName(TokenNameT&& value) { m_tokenNameHasBeenSet = true; m_tokenName = std::forward<TokenNameT>(value); }
    template<typename TokenNameT = Aws::String>
    IpamExternalResourceVerificationToken& WithTokenName(TokenNameT&& value) { SetTokenName(std::forward<TokenNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token expiration.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const { return m_notAfter; }
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
    template<typename NotAfterT = Aws::Utils::DateTime>
    void SetNotAfter(NotAfterT&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::forward<NotAfterT>(value); }
    template<typename NotAfterT = Aws::Utils::DateTime>
    IpamExternalResourceVerificationToken& WithNotAfter(NotAfterT&& value) { SetNotAfter(std::forward<NotAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token status.</p>
     */
    inline TokenState GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TokenState value) { m_statusHasBeenSet = true; m_status = value; }
    inline IpamExternalResourceVerificationToken& WithStatus(TokenState value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    IpamExternalResourceVerificationToken& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    IpamExternalResourceVerificationToken& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token state.</p>
     */
    inline IpamExternalResourceVerificationTokenState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(IpamExternalResourceVerificationTokenState value) { m_stateHasBeenSet = true; m_state = value; }
    inline IpamExternalResourceVerificationToken& WithState(IpamExternalResourceVerificationTokenState value) { SetState(value); return *this;}
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

    Aws::Utils::DateTime m_notAfter{};
    bool m_notAfterHasBeenSet = false;

    TokenState m_status{TokenState::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    IpamExternalResourceVerificationTokenState m_state{IpamExternalResourceVerificationTokenState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
