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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AttributeValue.h>
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
   * <p>Describes a DHCP configuration option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DhcpConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DhcpConfiguration
  {
  public:
    DhcpConfiguration();
    DhcpConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    DhcpConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of a DHCP option.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of a DHCP option.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of a DHCP option.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of a DHCP option.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of a DHCP option.</p>
     */
    inline DhcpConfiguration& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of a DHCP option.</p>
     */
    inline DhcpConfiguration& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of a DHCP option.</p>
     */
    inline DhcpConfiguration& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>One or more values for the DHCP option.</p>
     */
    inline const Aws::Vector<AttributeValue>& GetValues() const{ return m_values; }

    /**
     * <p>One or more values for the DHCP option.</p>
     */
    inline void SetValues(const Aws::Vector<AttributeValue>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>One or more values for the DHCP option.</p>
     */
    inline void SetValues(Aws::Vector<AttributeValue>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>One or more values for the DHCP option.</p>
     */
    inline DhcpConfiguration& WithValues(const Aws::Vector<AttributeValue>& value) { SetValues(value); return *this;}

    /**
     * <p>One or more values for the DHCP option.</p>
     */
    inline DhcpConfiguration& WithValues(Aws::Vector<AttributeValue>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>One or more values for the DHCP option.</p>
     */
    inline DhcpConfiguration& AddValues(const AttributeValue& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>One or more values for the DHCP option.</p>
     */
    inline DhcpConfiguration& AddValues(AttributeValue&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<AttributeValue> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
