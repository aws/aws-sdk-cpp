/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about a policy attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/PolicyAttribute">AWS
   * API Reference</a></p>
   */
  class PolicyAttribute
  {
  public:
    AWS_ELASTICLOADBALANCING_API PolicyAttribute();
    AWS_ELASTICLOADBALANCING_API PolicyAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API PolicyAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline PolicyAttribute& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute.</p>
     */
    inline PolicyAttribute& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute.</p>
     */
    inline PolicyAttribute& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


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
    inline PolicyAttribute& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline PolicyAttribute& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline PolicyAttribute& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
