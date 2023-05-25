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
   * <p>Current state of options for customizable text banner that will be displayed
   * on Amazon Web Services provided clients when a VPN session is
   * established.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientLoginBannerResponseOptions">AWS
   * API Reference</a></p>
   */
  class ClientLoginBannerResponseOptions
  {
  public:
    AWS_EC2_API ClientLoginBannerResponseOptions();
    AWS_EC2_API ClientLoginBannerResponseOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientLoginBannerResponseOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Current state of text banner feature.</p> <p>Valid values: <code>true |
     * false</code> </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Current state of text banner feature.</p> <p>Valid values: <code>true |
     * false</code> </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Current state of text banner feature.</p> <p>Valid values: <code>true |
     * false</code> </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Current state of text banner feature.</p> <p>Valid values: <code>true |
     * false</code> </p>
     */
    inline ClientLoginBannerResponseOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. UTF-8 encoded characters
     * only. Maximum of 1400 characters.</p>
     */
    inline const Aws::String& GetBannerText() const{ return m_bannerText; }

    /**
     * <p>Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. UTF-8 encoded characters
     * only. Maximum of 1400 characters.</p>
     */
    inline bool BannerTextHasBeenSet() const { return m_bannerTextHasBeenSet; }

    /**
     * <p>Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. UTF-8 encoded characters
     * only. Maximum of 1400 characters.</p>
     */
    inline void SetBannerText(const Aws::String& value) { m_bannerTextHasBeenSet = true; m_bannerText = value; }

    /**
     * <p>Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. UTF-8 encoded characters
     * only. Maximum of 1400 characters.</p>
     */
    inline void SetBannerText(Aws::String&& value) { m_bannerTextHasBeenSet = true; m_bannerText = std::move(value); }

    /**
     * <p>Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. UTF-8 encoded characters
     * only. Maximum of 1400 characters.</p>
     */
    inline void SetBannerText(const char* value) { m_bannerTextHasBeenSet = true; m_bannerText.assign(value); }

    /**
     * <p>Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. UTF-8 encoded characters
     * only. Maximum of 1400 characters.</p>
     */
    inline ClientLoginBannerResponseOptions& WithBannerText(const Aws::String& value) { SetBannerText(value); return *this;}

    /**
     * <p>Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. UTF-8 encoded characters
     * only. Maximum of 1400 characters.</p>
     */
    inline ClientLoginBannerResponseOptions& WithBannerText(Aws::String&& value) { SetBannerText(std::move(value)); return *this;}

    /**
     * <p>Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. UTF-8 encoded characters
     * only. Maximum of 1400 characters.</p>
     */
    inline ClientLoginBannerResponseOptions& WithBannerText(const char* value) { SetBannerText(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_bannerText;
    bool m_bannerTextHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
