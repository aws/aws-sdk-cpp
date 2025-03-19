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
   * <p>Options for enabling a customizable text banner that will be displayed on
   * Amazon Web Services provided clients when a VPN session is
   * established.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientLoginBannerOptions">AWS
   * API Reference</a></p>
   */
  class ClientLoginBannerOptions
  {
  public:
    AWS_EC2_API ClientLoginBannerOptions() = default;
    AWS_EC2_API ClientLoginBannerOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientLoginBannerOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Enable or disable a customizable text banner that will be displayed on Amazon
     * Web Services provided clients when a VPN session is established.</p> <p>Valid
     * values: <code>true | false</code> </p> <p>Default value: <code>false</code> </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ClientLoginBannerOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. UTF-8 encoded characters
     * only. Maximum of 1400 characters.</p>
     */
    inline const Aws::String& GetBannerText() const { return m_bannerText; }
    inline bool BannerTextHasBeenSet() const { return m_bannerTextHasBeenSet; }
    template<typename BannerTextT = Aws::String>
    void SetBannerText(BannerTextT&& value) { m_bannerTextHasBeenSet = true; m_bannerText = std::forward<BannerTextT>(value); }
    template<typename BannerTextT = Aws::String>
    ClientLoginBannerOptions& WithBannerText(BannerTextT&& value) { SetBannerText(std::forward<BannerTextT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_bannerText;
    bool m_bannerTextHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
