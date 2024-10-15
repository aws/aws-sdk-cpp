/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/WarningType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/WarningProperty.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The warnings generated for a specific resource for this generated
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/WarningDetail">AWS
   * API Reference</a></p>
   */
  class WarningDetail
  {
  public:
    AWS_CLOUDFORMATION_API WarningDetail();
    AWS_CLOUDFORMATION_API WarningDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API WarningDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of this warning. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/generate-IaC-write-only-properties.html">Resolve
     * write-only properties</a> in the <i>CloudFormation User Guide</i>.</p> <ul> <li>
     * <p> <code>MUTUALLY_EXCLUSIVE_PROPERTIES</code> - The resource requires
     * mutually-exclusive write-only properties. The IaC generator selects one set of
     * mutually exclusive properties and converts the included properties into
     * parameters. The parameter names have a suffix <code>OneOf</code> and the
     * parameter descriptions indicate that the corresponding property can be replaced
     * with other exclusive properties.</p> </li> <li> <p>
     * <code>UNSUPPORTED_PROPERTIES</code> - Unsupported properties are present in the
     * resource. One example of unsupported properties would be a required write-only
     * property that is an array, because a parameter cannot be an array. Another
     * example is an optional write-only property.</p> </li> <li> <p>
     * <code>MUTUALLY_EXCLUSIVE_TYPES</code> - One or more required write-only
     * properties are found in the resource, and the type of that property can be any
     * of several types.</p> </li> </ul>  <p>Currently the resource and property
     * reference documentation does not indicate if a property uses a type of
     * <code>oneOf</code> or <code>anyOf</code>. You need to look at the resource
     * provider schema.</p> 
     */
    inline const WarningType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const WarningType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(WarningType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline WarningDetail& WithType(const WarningType& value) { SetType(value); return *this;}
    inline WarningDetail& WithType(WarningType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the resource that are impacted by this warning.</p>
     */
    inline const Aws::Vector<WarningProperty>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Vector<WarningProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Vector<WarningProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline WarningDetail& WithProperties(const Aws::Vector<WarningProperty>& value) { SetProperties(value); return *this;}
    inline WarningDetail& WithProperties(Aws::Vector<WarningProperty>&& value) { SetProperties(std::move(value)); return *this;}
    inline WarningDetail& AddProperties(const WarningProperty& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }
    inline WarningDetail& AddProperties(WarningProperty&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }
    ///@}
  private:

    WarningType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<WarningProperty> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
