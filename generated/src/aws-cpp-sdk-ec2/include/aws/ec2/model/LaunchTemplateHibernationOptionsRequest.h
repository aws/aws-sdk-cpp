/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>Indicates whether the instance is configured for hibernation. This parameter
   * is valid only if the instance meets the <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/hibernating-prerequisites.html">hibernation
   * prerequisites</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateHibernationOptionsRequest">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateHibernationOptionsRequest
  {
  public:
    AWS_EC2_API LaunchTemplateHibernationOptionsRequest();
    AWS_EC2_API LaunchTemplateHibernationOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateHibernationOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>If you set this parameter to <code>true</code>, the instance is enabled for
     * hibernation.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetConfigured() const{ return m_configured; }

    /**
     * <p>If you set this parameter to <code>true</code>, the instance is enabled for
     * hibernation.</p> <p>Default: <code>false</code> </p>
     */
    inline bool ConfiguredHasBeenSet() const { return m_configuredHasBeenSet; }

    /**
     * <p>If you set this parameter to <code>true</code>, the instance is enabled for
     * hibernation.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetConfigured(bool value) { m_configuredHasBeenSet = true; m_configured = value; }

    /**
     * <p>If you set this parameter to <code>true</code>, the instance is enabled for
     * hibernation.</p> <p>Default: <code>false</code> </p>
     */
    inline LaunchTemplateHibernationOptionsRequest& WithConfigured(bool value) { SetConfigured(value); return *this;}

  private:

    bool m_configured;
    bool m_configuredHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
