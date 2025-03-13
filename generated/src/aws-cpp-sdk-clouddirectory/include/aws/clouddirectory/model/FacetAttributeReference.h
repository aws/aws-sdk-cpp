/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class FacetAttributeReference
  {
  public:
    AWS_CLOUDDIRECTORY_API FacetAttributeReference() = default;
    AWS_CLOUDDIRECTORY_API FacetAttributeReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API FacetAttributeReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target facet name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline const Aws::String& GetTargetFacetName() const { return m_targetFacetName; }
    inline bool TargetFacetNameHasBeenSet() const { return m_targetFacetNameHasBeenSet; }
    template<typename TargetFacetNameT = Aws::String>
    void SetTargetFacetName(TargetFacetNameT&& value) { m_targetFacetNameHasBeenSet = true; m_targetFacetName = std::forward<TargetFacetNameT>(value); }
    template<typename TargetFacetNameT = Aws::String>
    FacetAttributeReference& WithTargetFacetName(TargetFacetNameT&& value) { SetTargetFacetName(std::forward<TargetFacetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target attribute name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline const Aws::String& GetTargetAttributeName() const { return m_targetAttributeName; }
    inline bool TargetAttributeNameHasBeenSet() const { return m_targetAttributeNameHasBeenSet; }
    template<typename TargetAttributeNameT = Aws::String>
    void SetTargetAttributeName(TargetAttributeNameT&& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = std::forward<TargetAttributeNameT>(value); }
    template<typename TargetAttributeNameT = Aws::String>
    FacetAttributeReference& WithTargetAttributeName(TargetAttributeNameT&& value) { SetTargetAttributeName(std::forward<TargetAttributeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetFacetName;
    bool m_targetFacetNameHasBeenSet = false;

    Aws::String m_targetAttributeName;
    bool m_targetAttributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
