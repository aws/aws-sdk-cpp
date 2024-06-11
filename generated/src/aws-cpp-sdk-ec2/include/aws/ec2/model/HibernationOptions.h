﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HibernationOptions">AWS
   * API Reference</a></p>
   */
  class HibernationOptions
  {
  public:
    AWS_EC2_API HibernationOptions();
    AWS_EC2_API HibernationOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API HibernationOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>If <code>true</code>, your instance is enabled for hibernation; otherwise, it
     * is not enabled for hibernation.</p>
     */
    inline bool GetConfigured() const{ return m_configured; }
    inline bool ConfiguredHasBeenSet() const { return m_configuredHasBeenSet; }
    inline void SetConfigured(bool value) { m_configuredHasBeenSet = true; m_configured = value; }
    inline HibernationOptions& WithConfigured(bool value) { SetConfigured(value); return *this;}
    ///@}
  private:

    bool m_configured;
    bool m_configuredHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
