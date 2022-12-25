/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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

  class NewDhcpConfiguration
  {
  public:
    AWS_EC2_API NewDhcpConfiguration();
    AWS_EC2_API NewDhcpConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NewDhcpConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetKey() const{ return m_key; }

    
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    
    inline NewDhcpConfiguration& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    
    inline NewDhcpConfiguration& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    
    inline NewDhcpConfiguration& WithKey(const char* value) { SetKey(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    
    inline NewDhcpConfiguration& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    
    inline NewDhcpConfiguration& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    
    inline NewDhcpConfiguration& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    
    inline NewDhcpConfiguration& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    
    inline NewDhcpConfiguration& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
