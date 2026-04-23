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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The facet attribute reference that specifies the attribute definition that
   * contains the attribute facet name and attribute name.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/FacetAttributeReference">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API FacetAttributeReference
  {
  public:
    FacetAttributeReference();
    FacetAttributeReference(Aws::Utils::Json::JsonView jsonValue);
    FacetAttributeReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target facet name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline const Aws::String& GetTargetFacetName() const{ return m_targetFacetName; }

    /**
     * <p>The target facet name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline bool TargetFacetNameHasBeenSet() const { return m_targetFacetNameHasBeenSet; }

    /**
     * <p>The target facet name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline void SetTargetFacetName(const Aws::String& value) { m_targetFacetNameHasBeenSet = true; m_targetFacetName = value; }

    /**
     * <p>The target facet name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline void SetTargetFacetName(Aws::String&& value) { m_targetFacetNameHasBeenSet = true; m_targetFacetName = std::move(value); }

    /**
     * <p>The target facet name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline void SetTargetFacetName(const char* value) { m_targetFacetNameHasBeenSet = true; m_targetFacetName.assign(value); }

    /**
     * <p>The target facet name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttributeReference& WithTargetFacetName(const Aws::String& value) { SetTargetFacetName(value); return *this;}

    /**
     * <p>The target facet name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttributeReference& WithTargetFacetName(Aws::String&& value) { SetTargetFacetName(std::move(value)); return *this;}

    /**
     * <p>The target facet name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttributeReference& WithTargetFacetName(const char* value) { SetTargetFacetName(value); return *this;}


    /**
     * <p>The target attribute name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline const Aws::String& GetTargetAttributeName() const{ return m_targetAttributeName; }

    /**
     * <p>The target attribute name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline bool TargetAttributeNameHasBeenSet() const { return m_targetAttributeNameHasBeenSet; }

    /**
     * <p>The target attribute name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline void SetTargetAttributeName(const Aws::String& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = value; }

    /**
     * <p>The target attribute name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline void SetTargetAttributeName(Aws::String&& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = std::move(value); }

    /**
     * <p>The target attribute name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline void SetTargetAttributeName(const char* value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName.assign(value); }

    /**
     * <p>The target attribute name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttributeReference& WithTargetAttributeName(const Aws::String& value) { SetTargetAttributeName(value); return *this;}

    /**
     * <p>The target attribute name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttributeReference& WithTargetAttributeName(Aws::String&& value) { SetTargetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The target attribute name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttributeReference& WithTargetAttributeName(const char* value) { SetTargetAttributeName(value); return *this;}

  private:

    Aws::String m_targetFacetName;
    bool m_targetFacetNameHasBeenSet;

    Aws::String m_targetAttributeName;
    bool m_targetAttributeNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
