/*
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
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>The value to use for a resource attribute.</p>
   */
  class AWS_EC2_API AttributeValue
  {
  public:
    AttributeValue();
    AttributeValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AttributeValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Valid values are case-sensitive and vary by action.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Valid values are case-sensitive and vary by action.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Valid values are case-sensitive and vary by action.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Valid values are case-sensitive and vary by action.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Valid values are case-sensitive and vary by action.</p>
     */
    inline AttributeValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Valid values are case-sensitive and vary by action.</p>
     */
    inline AttributeValue& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>Valid values are case-sensitive and vary by action.</p>
     */
    inline AttributeValue& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
