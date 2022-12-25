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
   * <p>Indicates whether an instance is configured for hibernation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateHibernationOptions">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateHibernationOptions
  {
  public:
    AWS_EC2_API LaunchTemplateHibernationOptions();
    AWS_EC2_API LaunchTemplateHibernationOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateHibernationOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>If this parameter is set to <code>true</code>, the instance is enabled for
     * hibernation; otherwise, it is not enabled for hibernation.</p>
     */
    inline bool GetConfigured() const{ return m_configured; }

    /**
     * <p>If this parameter is set to <code>true</code>, the instance is enabled for
     * hibernation; otherwise, it is not enabled for hibernation.</p>
     */
    inline bool ConfiguredHasBeenSet() const { return m_configuredHasBeenSet; }

    /**
     * <p>If this parameter is set to <code>true</code>, the instance is enabled for
     * hibernation; otherwise, it is not enabled for hibernation.</p>
     */
    inline void SetConfigured(bool value) { m_configuredHasBeenSet = true; m_configured = value; }

    /**
     * <p>If this parameter is set to <code>true</code>, the instance is enabled for
     * hibernation; otherwise, it is not enabled for hibernation.</p>
     */
    inline LaunchTemplateHibernationOptions& WithConfigured(bool value) { SetConfigured(value); return *this;}

  private:

    bool m_configured;
    bool m_configuredHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
