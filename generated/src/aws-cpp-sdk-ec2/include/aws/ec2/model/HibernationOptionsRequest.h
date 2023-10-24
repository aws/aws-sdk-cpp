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
   * <p>Indicates whether your instance is configured for hibernation. This parameter
   * is valid only if the instance meets the <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/hibernating-prerequisites.html">hibernation
   * prerequisites</a>. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
   * your instance</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HibernationOptionsRequest">AWS
   * API Reference</a></p>
   */
  class HibernationOptionsRequest
  {
  public:
    AWS_EC2_API HibernationOptionsRequest();
    AWS_EC2_API HibernationOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API HibernationOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Set to <code>true</code> to enable your instance for hibernation.</p> <p>For
     * Spot Instances, if you set <code>Configured</code> to <code>true</code>, either
     * omit the <code>InstanceInterruptionBehavior</code> parameter (for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotMarketOptions.html">
     * <code>SpotMarketOptions</code> </a>), or set it to <code>hibernate</code>. When
     * <code>Configured</code> is true:</p> <ul> <li> <p>If you omit
     * <code>InstanceInterruptionBehavior</code>, it defaults to
     * <code>hibernate</code>.</p> </li> <li> <p>If you set
     * <code>InstanceInterruptionBehavior</code> to a value other than
     * <code>hibernate</code>, you'll get an error.</p> </li> </ul> <p>Default:
     * <code>false</code> </p>
     */
    inline bool GetConfigured() const{ return m_configured; }

    /**
     * <p>Set to <code>true</code> to enable your instance for hibernation.</p> <p>For
     * Spot Instances, if you set <code>Configured</code> to <code>true</code>, either
     * omit the <code>InstanceInterruptionBehavior</code> parameter (for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotMarketOptions.html">
     * <code>SpotMarketOptions</code> </a>), or set it to <code>hibernate</code>. When
     * <code>Configured</code> is true:</p> <ul> <li> <p>If you omit
     * <code>InstanceInterruptionBehavior</code>, it defaults to
     * <code>hibernate</code>.</p> </li> <li> <p>If you set
     * <code>InstanceInterruptionBehavior</code> to a value other than
     * <code>hibernate</code>, you'll get an error.</p> </li> </ul> <p>Default:
     * <code>false</code> </p>
     */
    inline bool ConfiguredHasBeenSet() const { return m_configuredHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to enable your instance for hibernation.</p> <p>For
     * Spot Instances, if you set <code>Configured</code> to <code>true</code>, either
     * omit the <code>InstanceInterruptionBehavior</code> parameter (for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotMarketOptions.html">
     * <code>SpotMarketOptions</code> </a>), or set it to <code>hibernate</code>. When
     * <code>Configured</code> is true:</p> <ul> <li> <p>If you omit
     * <code>InstanceInterruptionBehavior</code>, it defaults to
     * <code>hibernate</code>.</p> </li> <li> <p>If you set
     * <code>InstanceInterruptionBehavior</code> to a value other than
     * <code>hibernate</code>, you'll get an error.</p> </li> </ul> <p>Default:
     * <code>false</code> </p>
     */
    inline void SetConfigured(bool value) { m_configuredHasBeenSet = true; m_configured = value; }

    /**
     * <p>Set to <code>true</code> to enable your instance for hibernation.</p> <p>For
     * Spot Instances, if you set <code>Configured</code> to <code>true</code>, either
     * omit the <code>InstanceInterruptionBehavior</code> parameter (for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotMarketOptions.html">
     * <code>SpotMarketOptions</code> </a>), or set it to <code>hibernate</code>. When
     * <code>Configured</code> is true:</p> <ul> <li> <p>If you omit
     * <code>InstanceInterruptionBehavior</code>, it defaults to
     * <code>hibernate</code>.</p> </li> <li> <p>If you set
     * <code>InstanceInterruptionBehavior</code> to a value other than
     * <code>hibernate</code>, you'll get an error.</p> </li> </ul> <p>Default:
     * <code>false</code> </p>
     */
    inline HibernationOptionsRequest& WithConfigured(bool value) { SetConfigured(value); return *this;}

  private:

    bool m_configured;
    bool m_configuredHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
