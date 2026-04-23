/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html#hibernating-prerequisites">hibernation
   * prerequisites</a>. Hibernation is currently supported only for Amazon Linux. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Hibernate.html">Hibernate
   * Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HibernationOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API HibernationOptionsRequest
  {
  public:
    HibernationOptionsRequest();
    HibernationOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    HibernationOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>If you set this parameter to <code>true</code>, your instance is enabled for
     * hibernation.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetConfigured() const{ return m_configured; }

    /**
     * <p>If you set this parameter to <code>true</code>, your instance is enabled for
     * hibernation.</p> <p>Default: <code>false</code> </p>
     */
    inline bool ConfiguredHasBeenSet() const { return m_configuredHasBeenSet; }

    /**
     * <p>If you set this parameter to <code>true</code>, your instance is enabled for
     * hibernation.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetConfigured(bool value) { m_configuredHasBeenSet = true; m_configured = value; }

    /**
     * <p>If you set this parameter to <code>true</code>, your instance is enabled for
     * hibernation.</p> <p>Default: <code>false</code> </p>
     */
    inline HibernationOptionsRequest& WithConfigured(bool value) { SetConfigured(value); return *this;}

  private:

    bool m_configured;
    bool m_configuredHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
