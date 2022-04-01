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
   * <p> The response information for license configurations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportImageLicenseConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ImportImageLicenseConfigurationResponse
  {
  public:
    ImportImageLicenseConfigurationResponse();
    ImportImageLicenseConfigurationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    ImportImageLicenseConfigurationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ARN of a license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const{ return m_licenseConfigurationArn; }

    /**
     * <p>The ARN of a license configuration.</p>
     */
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }

    /**
     * <p>The ARN of a license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const Aws::String& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = value; }

    /**
     * <p>The ARN of a license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(Aws::String&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::move(value); }

    /**
     * <p>The ARN of a license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const char* value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn.assign(value); }

    /**
     * <p>The ARN of a license configuration.</p>
     */
    inline ImportImageLicenseConfigurationResponse& WithLicenseConfigurationArn(const Aws::String& value) { SetLicenseConfigurationArn(value); return *this;}

    /**
     * <p>The ARN of a license configuration.</p>
     */
    inline ImportImageLicenseConfigurationResponse& WithLicenseConfigurationArn(Aws::String&& value) { SetLicenseConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a license configuration.</p>
     */
    inline ImportImageLicenseConfigurationResponse& WithLicenseConfigurationArn(const char* value) { SetLicenseConfigurationArn(value); return *this;}

  private:

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
