/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/ResourceAttribute.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/RequiresRecreation.h>
#include <aws/cloudformation/model/AttributeChangeType.h>
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
   * <p>The field that CloudFormation will change, such as the name of a resource's
   * property, and whether the resource will be recreated.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ResourceTargetDefinition">AWS
   * API Reference</a></p>
   */
  class ResourceTargetDefinition
  {
  public:
    AWS_CLOUDFORMATION_API ResourceTargetDefinition();
    AWS_CLOUDFORMATION_API ResourceTargetDefinition(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ResourceTargetDefinition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates which resource attribute is triggering this update, such as a
     * change in the resource attribute's <code>Metadata</code>,
     * <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline const ResourceAttribute& GetAttribute() const{ return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(const ResourceAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline void SetAttribute(ResourceAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }
    inline ResourceTargetDefinition& WithAttribute(const ResourceAttribute& value) { SetAttribute(value); return *this;}
    inline ResourceTargetDefinition& WithAttribute(ResourceAttribute&& value) { SetAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, the name of
     * the property. For all other attributes, the value is null.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResourceTargetDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResourceTargetDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResourceTargetDefinition& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, indicates
     * whether a change to this property causes the resource to be recreated. The value
     * can be <code>Never</code>, <code>Always</code>, or <code>Conditionally</code>.
     * To determine the conditions for a <code>Conditionally</code> recreation, see the
     * update behavior for that property in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services resource and property types reference</a> in the <i>CloudFormation
     * User Guide</i>.</p>
     */
    inline const RequiresRecreation& GetRequiresRecreation() const{ return m_requiresRecreation; }
    inline bool RequiresRecreationHasBeenSet() const { return m_requiresRecreationHasBeenSet; }
    inline void SetRequiresRecreation(const RequiresRecreation& value) { m_requiresRecreationHasBeenSet = true; m_requiresRecreation = value; }
    inline void SetRequiresRecreation(RequiresRecreation&& value) { m_requiresRecreationHasBeenSet = true; m_requiresRecreation = std::move(value); }
    inline ResourceTargetDefinition& WithRequiresRecreation(const RequiresRecreation& value) { SetRequiresRecreation(value); return *this;}
    inline ResourceTargetDefinition& WithRequiresRecreation(RequiresRecreation&& value) { SetRequiresRecreation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property path of the property.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline ResourceTargetDefinition& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline ResourceTargetDefinition& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline ResourceTargetDefinition& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the property before the change is executed. Large values can be
     * truncated.</p>
     */
    inline const Aws::String& GetBeforeValue() const{ return m_beforeValue; }
    inline bool BeforeValueHasBeenSet() const { return m_beforeValueHasBeenSet; }
    inline void SetBeforeValue(const Aws::String& value) { m_beforeValueHasBeenSet = true; m_beforeValue = value; }
    inline void SetBeforeValue(Aws::String&& value) { m_beforeValueHasBeenSet = true; m_beforeValue = std::move(value); }
    inline void SetBeforeValue(const char* value) { m_beforeValueHasBeenSet = true; m_beforeValue.assign(value); }
    inline ResourceTargetDefinition& WithBeforeValue(const Aws::String& value) { SetBeforeValue(value); return *this;}
    inline ResourceTargetDefinition& WithBeforeValue(Aws::String&& value) { SetBeforeValue(std::move(value)); return *this;}
    inline ResourceTargetDefinition& WithBeforeValue(const char* value) { SetBeforeValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the property after the change is executed. Large values can be
     * truncated.</p>
     */
    inline const Aws::String& GetAfterValue() const{ return m_afterValue; }
    inline bool AfterValueHasBeenSet() const { return m_afterValueHasBeenSet; }
    inline void SetAfterValue(const Aws::String& value) { m_afterValueHasBeenSet = true; m_afterValue = value; }
    inline void SetAfterValue(Aws::String&& value) { m_afterValueHasBeenSet = true; m_afterValue = std::move(value); }
    inline void SetAfterValue(const char* value) { m_afterValueHasBeenSet = true; m_afterValue.assign(value); }
    inline ResourceTargetDefinition& WithAfterValue(const Aws::String& value) { SetAfterValue(value); return *this;}
    inline ResourceTargetDefinition& WithAfterValue(Aws::String&& value) { SetAfterValue(std::move(value)); return *this;}
    inline ResourceTargetDefinition& WithAfterValue(const char* value) { SetAfterValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of change to be made to the property if the change is executed.</p>
     * <ul> <li> <p> <code>Add</code> The item will be added.</p> </li> <li> <p>
     * <code>Remove</code> The item will be removed.</p> </li> <li> <p>
     * <code>Modify</code> The item will be modified.</p> </li> </ul>
     */
    inline const AttributeChangeType& GetAttributeChangeType() const{ return m_attributeChangeType; }
    inline bool AttributeChangeTypeHasBeenSet() const { return m_attributeChangeTypeHasBeenSet; }
    inline void SetAttributeChangeType(const AttributeChangeType& value) { m_attributeChangeTypeHasBeenSet = true; m_attributeChangeType = value; }
    inline void SetAttributeChangeType(AttributeChangeType&& value) { m_attributeChangeTypeHasBeenSet = true; m_attributeChangeType = std::move(value); }
    inline ResourceTargetDefinition& WithAttributeChangeType(const AttributeChangeType& value) { SetAttributeChangeType(value); return *this;}
    inline ResourceTargetDefinition& WithAttributeChangeType(AttributeChangeType&& value) { SetAttributeChangeType(std::move(value)); return *this;}
    ///@}
  private:

    ResourceAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RequiresRecreation m_requiresRecreation;
    bool m_requiresRecreationHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_beforeValue;
    bool m_beforeValueHasBeenSet = false;

    Aws::String m_afterValue;
    bool m_afterValueHasBeenSet = false;

    AttributeChangeType m_attributeChangeType;
    bool m_attributeChangeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
