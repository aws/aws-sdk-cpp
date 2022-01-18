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

  class AWS_EC2_API ClientLoginBannerOptions
  {
  public:
    ClientLoginBannerOptions();
    ClientLoginBannerOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClientLoginBannerOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline bool GetEnabled() const{ return m_enabled; }

    
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    
    inline ClientLoginBannerOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


    
    inline const Aws::String& GetBannerText() const{ return m_bannerText; }

    
    inline bool BannerTextHasBeenSet() const { return m_bannerTextHasBeenSet; }

    
    inline void SetBannerText(const Aws::String& value) { m_bannerTextHasBeenSet = true; m_bannerText = value; }

    
    inline void SetBannerText(Aws::String&& value) { m_bannerTextHasBeenSet = true; m_bannerText = std::move(value); }

    
    inline void SetBannerText(const char* value) { m_bannerTextHasBeenSet = true; m_bannerText.assign(value); }

    
    inline ClientLoginBannerOptions& WithBannerText(const Aws::String& value) { SetBannerText(value); return *this;}

    
    inline ClientLoginBannerOptions& WithBannerText(Aws::String&& value) { SetBannerText(std::move(value)); return *this;}

    
    inline ClientLoginBannerOptions& WithBannerText(const char* value) { SetBannerText(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_bannerText;
    bool m_bannerTextHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
