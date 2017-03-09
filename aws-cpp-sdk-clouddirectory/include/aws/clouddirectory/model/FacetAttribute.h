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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/FacetAttributeDefinition.h>
#include <aws/clouddirectory/model/FacetAttributeReference.h>
#include <aws/clouddirectory/model/RequiredAttributeBehavior.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Attribute associated with the <a>Facet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/FacetAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API FacetAttribute
  {
  public:
    FacetAttribute();
    FacetAttribute(const Aws::Utils::Json::JsonValue& jsonValue);
    FacetAttribute& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the facet attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the facet attribute.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the facet attribute.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the facet attribute.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the facet attribute.</p>
     */
    inline FacetAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the facet attribute.</p>
     */
    inline FacetAttribute& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the facet attribute.</p>
     */
    inline FacetAttribute& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A facet attribute consists of either a definition or a reference. This
     * structure contains the attribute definition. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline const FacetAttributeDefinition& GetAttributeDefinition() const{ return m_attributeDefinition; }

    /**
     * <p>A facet attribute consists of either a definition or a reference. This
     * structure contains the attribute definition. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline void SetAttributeDefinition(const FacetAttributeDefinition& value) { m_attributeDefinitionHasBeenSet = true; m_attributeDefinition = value; }

    /**
     * <p>A facet attribute consists of either a definition or a reference. This
     * structure contains the attribute definition. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline void SetAttributeDefinition(FacetAttributeDefinition&& value) { m_attributeDefinitionHasBeenSet = true; m_attributeDefinition = value; }

    /**
     * <p>A facet attribute consists of either a definition or a reference. This
     * structure contains the attribute definition. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttribute& WithAttributeDefinition(const FacetAttributeDefinition& value) { SetAttributeDefinition(value); return *this;}

    /**
     * <p>A facet attribute consists of either a definition or a reference. This
     * structure contains the attribute definition. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttribute& WithAttributeDefinition(FacetAttributeDefinition&& value) { SetAttributeDefinition(value); return *this;}

    /**
     * <p>Attribute reference associated with the attribute. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline const FacetAttributeReference& GetAttributeReference() const{ return m_attributeReference; }

    /**
     * <p>Attribute reference associated with the attribute. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline void SetAttributeReference(const FacetAttributeReference& value) { m_attributeReferenceHasBeenSet = true; m_attributeReference = value; }

    /**
     * <p>Attribute reference associated with the attribute. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline void SetAttributeReference(FacetAttributeReference&& value) { m_attributeReferenceHasBeenSet = true; m_attributeReference = value; }

    /**
     * <p>Attribute reference associated with the attribute. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttribute& WithAttributeReference(const FacetAttributeReference& value) { SetAttributeReference(value); return *this;}

    /**
     * <p>Attribute reference associated with the attribute. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttribute& WithAttributeReference(FacetAttributeReference&& value) { SetAttributeReference(value); return *this;}

    /**
     * <p>The required behavior of the <code>FacetAttribute</code>.</p>
     */
    inline const RequiredAttributeBehavior& GetRequiredBehavior() const{ return m_requiredBehavior; }

    /**
     * <p>The required behavior of the <code>FacetAttribute</code>.</p>
     */
    inline void SetRequiredBehavior(const RequiredAttributeBehavior& value) { m_requiredBehaviorHasBeenSet = true; m_requiredBehavior = value; }

    /**
     * <p>The required behavior of the <code>FacetAttribute</code>.</p>
     */
    inline void SetRequiredBehavior(RequiredAttributeBehavior&& value) { m_requiredBehaviorHasBeenSet = true; m_requiredBehavior = value; }

    /**
     * <p>The required behavior of the <code>FacetAttribute</code>.</p>
     */
    inline FacetAttribute& WithRequiredBehavior(const RequiredAttributeBehavior& value) { SetRequiredBehavior(value); return *this;}

    /**
     * <p>The required behavior of the <code>FacetAttribute</code>.</p>
     */
    inline FacetAttribute& WithRequiredBehavior(RequiredAttributeBehavior&& value) { SetRequiredBehavior(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    FacetAttributeDefinition m_attributeDefinition;
    bool m_attributeDefinitionHasBeenSet;
    FacetAttributeReference m_attributeReference;
    bool m_attributeReferenceHasBeenSet;
    RequiredAttributeBehavior m_requiredBehavior;
    bool m_requiredBehaviorHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
