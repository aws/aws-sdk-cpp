/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectType.h>
#include <aws/clouddirectory/model/FacetStyle.h>
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
   * <p>A structure that contains <code>Name</code>, <code>ARN</code>,
   * <code>Attributes</code>, <code> <a>Rule</a>s</code>, and
   * <code>ObjectTypes</code>. See <a
   * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_whatarefacets.html">Facets</a>
   * for more information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/Facet">AWS
   * API Reference</a></p>
   */
  class Facet
  {
  public:
    AWS_CLOUDDIRECTORY_API Facet() = default;
    AWS_CLOUDDIRECTORY_API Facet(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Facet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Facet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object type that is associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline ObjectType GetObjectType() const { return m_objectType; }
    inline bool ObjectTypeHasBeenSet() const { return m_objectTypeHasBeenSet; }
    inline void SetObjectType(ObjectType value) { m_objectTypeHasBeenSet = true; m_objectType = value; }
    inline Facet& WithObjectType(ObjectType value) { SetObjectType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>There are two different styles that you can define on any given facet,
     * <code>Static</code> and <code>Dynamic</code>. For static facets, all attributes
     * must be defined in the schema. For dynamic facets, attributes can be defined
     * during data plane operations.</p>
     */
    inline FacetStyle GetFacetStyle() const { return m_facetStyle; }
    inline bool FacetStyleHasBeenSet() const { return m_facetStyleHasBeenSet; }
    inline void SetFacetStyle(FacetStyle value) { m_facetStyleHasBeenSet = true; m_facetStyle = value; }
    inline Facet& WithFacetStyle(FacetStyle value) { SetFacetStyle(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ObjectType m_objectType{ObjectType::NOT_SET};
    bool m_objectTypeHasBeenSet = false;

    FacetStyle m_facetStyle{FacetStyle::NOT_SET};
    bool m_facetStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
