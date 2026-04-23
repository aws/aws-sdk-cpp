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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/AttributeValueTarget.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>A name value pair that describes an aspect of an account. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AccountAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API AccountAttribute
  {
  public:
    AccountAttribute();
    AccountAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccountAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the attribute.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the attribute.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the attribute.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the attribute.</p>
     */
    inline AccountAttribute& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute.</p>
     */
    inline AccountAttribute& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute.</p>
     */
    inline AccountAttribute& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>A list of attribute values.</p>
     */
    inline const Aws::Vector<AttributeValueTarget>& GetAttributeValues() const{ return m_attributeValues; }

    /**
     * <p>A list of attribute values.</p>
     */
    inline bool AttributeValuesHasBeenSet() const { return m_attributeValuesHasBeenSet; }

    /**
     * <p>A list of attribute values.</p>
     */
    inline void SetAttributeValues(const Aws::Vector<AttributeValueTarget>& value) { m_attributeValuesHasBeenSet = true; m_attributeValues = value; }

    /**
     * <p>A list of attribute values.</p>
     */
    inline void SetAttributeValues(Aws::Vector<AttributeValueTarget>&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues = std::move(value); }

    /**
     * <p>A list of attribute values.</p>
     */
    inline AccountAttribute& WithAttributeValues(const Aws::Vector<AttributeValueTarget>& value) { SetAttributeValues(value); return *this;}

    /**
     * <p>A list of attribute values.</p>
     */
    inline AccountAttribute& WithAttributeValues(Aws::Vector<AttributeValueTarget>&& value) { SetAttributeValues(std::move(value)); return *this;}

    /**
     * <p>A list of attribute values.</p>
     */
    inline AccountAttribute& AddAttributeValues(const AttributeValueTarget& value) { m_attributeValuesHasBeenSet = true; m_attributeValues.push_back(value); return *this; }

    /**
     * <p>A list of attribute values.</p>
     */
    inline AccountAttribute& AddAttributeValues(AttributeValueTarget&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    Aws::Vector<AttributeValueTarget> m_attributeValues;
    bool m_attributeValuesHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
