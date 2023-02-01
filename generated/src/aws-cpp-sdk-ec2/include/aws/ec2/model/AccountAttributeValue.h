/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a value of an account attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AccountAttributeValue">AWS
   * API Reference</a></p>
   */
  class AccountAttributeValue
  {
  public:
    AWS_EC2_API AccountAttributeValue();
    AWS_EC2_API AccountAttributeValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AccountAttributeValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The value of the attribute.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }

    /**
     * <p>The value of the attribute.</p>
     */
    inline AccountAttributeValue& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline AccountAttributeValue& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline AccountAttributeValue& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}

  private:

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
