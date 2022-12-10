/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/FacetAttributeDefinition.h>
#include <aws/clouddirectory/model/FacetAttributeReference.h>
#include <aws/clouddirectory/model/RequiredAttributeBehavior.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>An attribute that is associated with the <a>Facet</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/FacetAttribute">AWS
   * API Reference</a></p>
   */
  class FacetAttribute
  {
  public:
    AWS_CLOUDDIRECTORY_API FacetAttribute();
    AWS_CLOUDDIRECTORY_API FacetAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API FacetAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the facet attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the facet attribute.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the facet attribute.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the facet attribute.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

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
    inline FacetAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the facet attribute.</p>
     */
    inline FacetAttribute& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A facet attribute consists of either a definition or a reference. This
     * structure contains the attribute definition. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline const FacetAttributeDefinition& GetAttributeDefinition() const{ return m_attributeDefinition; }

    /**
     * <p>A facet attribute consists of either a definition or a reference. This
     * structure contains the attribute definition. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline bool AttributeDefinitionHasBeenSet() const { return m_attributeDefinitionHasBeenSet; }

    /**
     * <p>A facet attribute consists of either a definition or a reference. This
     * structure contains the attribute definition. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline void SetAttributeDefinition(const FacetAttributeDefinition& value) { m_attributeDefinitionHasBeenSet = true; m_attributeDefinition = value; }

    /**
     * <p>A facet attribute consists of either a definition or a reference. This
     * structure contains the attribute definition. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline void SetAttributeDefinition(FacetAttributeDefinition&& value) { m_attributeDefinitionHasBeenSet = true; m_attributeDefinition = std::move(value); }

    /**
     * <p>A facet attribute consists of either a definition or a reference. This
     * structure contains the attribute definition. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttribute& WithAttributeDefinition(const FacetAttributeDefinition& value) { SetAttributeDefinition(value); return *this;}

    /**
     * <p>A facet attribute consists of either a definition or a reference. This
     * structure contains the attribute definition. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttribute& WithAttributeDefinition(FacetAttributeDefinition&& value) { SetAttributeDefinition(std::move(value)); return *this;}


    /**
     * <p>An attribute reference that is associated with the attribute. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline const FacetAttributeReference& GetAttributeReference() const{ return m_attributeReference; }

    /**
     * <p>An attribute reference that is associated with the attribute. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline bool AttributeReferenceHasBeenSet() const { return m_attributeReferenceHasBeenSet; }

    /**
     * <p>An attribute reference that is associated with the attribute. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline void SetAttributeReference(const FacetAttributeReference& value) { m_attributeReferenceHasBeenSet = true; m_attributeReference = value; }

    /**
     * <p>An attribute reference that is associated with the attribute. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline void SetAttributeReference(FacetAttributeReference&& value) { m_attributeReferenceHasBeenSet = true; m_attributeReference = std::move(value); }

    /**
     * <p>An attribute reference that is associated with the attribute. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttribute& WithAttributeReference(const FacetAttributeReference& value) { SetAttributeReference(value); return *this;}

    /**
     * <p>An attribute reference that is associated with the attribute. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttribute& WithAttributeReference(FacetAttributeReference&& value) { SetAttributeReference(std::move(value)); return *this;}


    /**
     * <p>The required behavior of the <code>FacetAttribute</code>.</p>
     */
    inline const RequiredAttributeBehavior& GetRequiredBehavior() const{ return m_requiredBehavior; }

    /**
     * <p>The required behavior of the <code>FacetAttribute</code>.</p>
     */
    inline bool RequiredBehaviorHasBeenSet() const { return m_requiredBehaviorHasBeenSet; }

    /**
     * <p>The required behavior of the <code>FacetAttribute</code>.</p>
     */
    inline void SetRequiredBehavior(const RequiredAttributeBehavior& value) { m_requiredBehaviorHasBeenSet = true; m_requiredBehavior = value; }

    /**
     * <p>The required behavior of the <code>FacetAttribute</code>.</p>
     */
    inline void SetRequiredBehavior(RequiredAttributeBehavior&& value) { m_requiredBehaviorHasBeenSet = true; m_requiredBehavior = std::move(value); }

    /**
     * <p>The required behavior of the <code>FacetAttribute</code>.</p>
     */
    inline FacetAttribute& WithRequiredBehavior(const RequiredAttributeBehavior& value) { SetRequiredBehavior(value); return *this;}

    /**
     * <p>The required behavior of the <code>FacetAttribute</code>.</p>
     */
    inline FacetAttribute& WithRequiredBehavior(RequiredAttributeBehavior&& value) { SetRequiredBehavior(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FacetAttributeDefinition m_attributeDefinition;
    bool m_attributeDefinitionHasBeenSet = false;

    FacetAttributeReference m_attributeReference;
    bool m_attributeReferenceHasBeenSet = false;

    RequiredAttributeBehavior m_requiredBehavior;
    bool m_requiredBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
