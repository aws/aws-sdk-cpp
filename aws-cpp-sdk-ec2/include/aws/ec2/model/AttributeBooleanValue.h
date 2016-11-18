﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>The value to use when a resource attribute accepts a Boolean value.</p>
   */
  class AWS_EC2_API AttributeBooleanValue
  {
  public:
    AttributeBooleanValue();
    AttributeBooleanValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AttributeBooleanValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Valid values are <code>true</code> or <code>false</code>.</p>
     */
    inline bool GetValue() const{ return m_value; }

    /**
     * <p>Valid values are <code>true</code> or <code>false</code>.</p>
     */
    inline void SetValue(bool value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Valid values are <code>true</code> or <code>false</code>.</p>
     */
    inline AttributeBooleanValue& WithValue(bool value) { SetValue(value); return *this;}

  private:
    bool m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
