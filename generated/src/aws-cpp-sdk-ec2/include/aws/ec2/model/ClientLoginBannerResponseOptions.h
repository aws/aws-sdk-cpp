﻿/**
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
    AWS_EC2_API ClientLoginBannerResponseOptions() = default;
    AWS_EC2_API ClientLoginBannerResponseOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientLoginBannerResponseOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Current state of text banner feature.</p> <p>Valid values: <code>true |
     * false</code> </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ClientLoginBannerResponseOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}
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
    ClientLoginBannerResponseOptions& WithBannerText(BannerTextT&& value) { SetBannerText(std::forward<BannerTextT>(value)); return *this;}
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
