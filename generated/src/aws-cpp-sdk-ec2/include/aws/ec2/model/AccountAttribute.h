/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AccountAttributeValue.h>
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
   * <p>Describes an account attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AccountAttribute">AWS
   * API Reference</a></p>
   */
  class AccountAttribute
  {
  public:
    AWS_EC2_API AccountAttribute();
    AWS_EC2_API AccountAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AccountAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the account attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the account attribute.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the account attribute.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the account attribute.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the account attribute.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the account attribute.</p>
     */
    inline AccountAttribute& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the account attribute.</p>
     */
    inline AccountAttribute& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the account attribute.</p>
     */
    inline AccountAttribute& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The values for the account attribute.</p>
     */
    inline const Aws::Vector<AccountAttributeValue>& GetAttributeValues() const{ return m_attributeValues; }

    /**
     * <p>The values for the account attribute.</p>
     */
    inline bool AttributeValuesHasBeenSet() const { return m_attributeValuesHasBeenSet; }

    /**
     * <p>The values for the account attribute.</p>
     */
    inline void SetAttributeValues(const Aws::Vector<AccountAttributeValue>& value) { m_attributeValuesHasBeenSet = true; m_attributeValues = value; }

    /**
     * <p>The values for the account attribute.</p>
     */
    inline void SetAttributeValues(Aws::Vector<AccountAttributeValue>&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues = std::move(value); }

    /**
     * <p>The values for the account attribute.</p>
     */
    inline AccountAttribute& WithAttributeValues(const Aws::Vector<AccountAttributeValue>& value) { SetAttributeValues(value); return *this;}

    /**
     * <p>The values for the account attribute.</p>
     */
    inline AccountAttribute& WithAttributeValues(Aws::Vector<AccountAttributeValue>&& value) { SetAttributeValues(std::move(value)); return *this;}

    /**
     * <p>The values for the account attribute.</p>
     */
    inline AccountAttribute& AddAttributeValues(const AccountAttributeValue& value) { m_attributeValuesHasBeenSet = true; m_attributeValues.push_back(value); return *this; }

    /**
     * <p>The values for the account attribute.</p>
     */
    inline AccountAttribute& AddAttributeValues(AccountAttributeValue&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Vector<AccountAttributeValue> m_attributeValues;
    bool m_attributeValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
