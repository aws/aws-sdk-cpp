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
   * <p>Facet attribute reference that specifies the attribute definition which
   * contains attribute facet name and attribute name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/FacetAttributeReference">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API FacetAttributeReference
  {
  public:
    FacetAttributeReference();
    FacetAttributeReference(const Aws::Utils::Json::JsonValue& jsonValue);
    FacetAttributeReference& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Target facet name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline const Aws::String& GetTargetFacetName() const{ return m_targetFacetName; }

    /**
     * <p>Target facet name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline void SetTargetFacetName(const Aws::String& value) { m_targetFacetNameHasBeenSet = true; m_targetFacetName = value; }

    /**
     * <p>Target facet name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline void SetTargetFacetName(Aws::String&& value) { m_targetFacetNameHasBeenSet = true; m_targetFacetName = value; }

    /**
     * <p>Target facet name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline void SetTargetFacetName(const char* value) { m_targetFacetNameHasBeenSet = true; m_targetFacetName.assign(value); }

    /**
     * <p>Target facet name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttributeReference& WithTargetFacetName(const Aws::String& value) { SetTargetFacetName(value); return *this;}

    /**
     * <p>Target facet name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttributeReference& WithTargetFacetName(Aws::String&& value) { SetTargetFacetName(value); return *this;}

    /**
     * <p>Target facet name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttributeReference& WithTargetFacetName(const char* value) { SetTargetFacetName(value); return *this;}

    /**
     * <p>Target attribute name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline const Aws::String& GetTargetAttributeName() const{ return m_targetAttributeName; }

    /**
     * <p>Target attribute name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline void SetTargetAttributeName(const Aws::String& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = value; }

    /**
     * <p>Target attribute name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline void SetTargetAttributeName(Aws::String&& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = value; }

    /**
     * <p>Target attribute name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline void SetTargetAttributeName(const char* value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName.assign(value); }

    /**
     * <p>Target attribute name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttributeReference& WithTargetAttributeName(const Aws::String& value) { SetTargetAttributeName(value); return *this;}

    /**
     * <p>Target attribute name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
     * References</a> for more information.</p>
     */
    inline FacetAttributeReference& WithTargetAttributeName(Aws::String&& value) { SetTargetAttributeName(value); return *this;}

    /**
     * <p>Target attribute name associated with the facet reference. See <a
     * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
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
