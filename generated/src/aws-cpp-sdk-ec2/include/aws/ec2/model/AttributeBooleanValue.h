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
   * <p>Describes a value for a resource attribute that is a Boolean
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttributeBooleanValue">AWS
   * API Reference</a></p>
   */
  class AttributeBooleanValue
  {
  public:
    AWS_EC2_API AttributeBooleanValue();
    AWS_EC2_API AttributeBooleanValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AttributeBooleanValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The attribute value. The valid values are <code>true</code> or
     * <code>false</code>.</p>
     */
    inline bool GetValue() const{ return m_value; }

    /**
     * <p>The attribute value. The valid values are <code>true</code> or
     * <code>false</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The attribute value. The valid values are <code>true</code> or
     * <code>false</code>.</p>
     */
    inline void SetValue(bool value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The attribute value. The valid values are <code>true</code> or
     * <code>false</code>.</p>
     */
    inline AttributeBooleanValue& WithValue(bool value) { SetValue(value); return *this;}

  private:

    bool m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
