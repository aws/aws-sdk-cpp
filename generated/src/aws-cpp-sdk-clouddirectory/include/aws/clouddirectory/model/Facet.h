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
    AWS_CLOUDDIRECTORY_API Facet();
    AWS_CLOUDDIRECTORY_API Facet(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Facet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline Facet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline Facet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline Facet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The object type that is associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline const ObjectType& GetObjectType() const{ return m_objectType; }

    /**
     * <p>The object type that is associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline bool ObjectTypeHasBeenSet() const { return m_objectTypeHasBeenSet; }

    /**
     * <p>The object type that is associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline void SetObjectType(const ObjectType& value) { m_objectTypeHasBeenSet = true; m_objectType = value; }

    /**
     * <p>The object type that is associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline void SetObjectType(ObjectType&& value) { m_objectTypeHasBeenSet = true; m_objectType = std::move(value); }

    /**
     * <p>The object type that is associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline Facet& WithObjectType(const ObjectType& value) { SetObjectType(value); return *this;}

    /**
     * <p>The object type that is associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline Facet& WithObjectType(ObjectType&& value) { SetObjectType(std::move(value)); return *this;}


    /**
     * <p>There are two different styles that you can define on any given facet,
     * <code>Static</code> and <code>Dynamic</code>. For static facets, all attributes
     * must be defined in the schema. For dynamic facets, attributes can be defined
     * during data plane operations.</p>
     */
    inline const FacetStyle& GetFacetStyle() const{ return m_facetStyle; }

    /**
     * <p>There are two different styles that you can define on any given facet,
     * <code>Static</code> and <code>Dynamic</code>. For static facets, all attributes
     * must be defined in the schema. For dynamic facets, attributes can be defined
     * during data plane operations.</p>
     */
    inline bool FacetStyleHasBeenSet() const { return m_facetStyleHasBeenSet; }

    /**
     * <p>There are two different styles that you can define on any given facet,
     * <code>Static</code> and <code>Dynamic</code>. For static facets, all attributes
     * must be defined in the schema. For dynamic facets, attributes can be defined
     * during data plane operations.</p>
     */
    inline void SetFacetStyle(const FacetStyle& value) { m_facetStyleHasBeenSet = true; m_facetStyle = value; }

    /**
     * <p>There are two different styles that you can define on any given facet,
     * <code>Static</code> and <code>Dynamic</code>. For static facets, all attributes
     * must be defined in the schema. For dynamic facets, attributes can be defined
     * during data plane operations.</p>
     */
    inline void SetFacetStyle(FacetStyle&& value) { m_facetStyleHasBeenSet = true; m_facetStyle = std::move(value); }

    /**
     * <p>There are two different styles that you can define on any given facet,
     * <code>Static</code> and <code>Dynamic</code>. For static facets, all attributes
     * must be defined in the schema. For dynamic facets, attributes can be defined
     * during data plane operations.</p>
     */
    inline Facet& WithFacetStyle(const FacetStyle& value) { SetFacetStyle(value); return *this;}

    /**
     * <p>There are two different styles that you can define on any given facet,
     * <code>Static</code> and <code>Dynamic</code>. For static facets, all attributes
     * must be defined in the schema. For dynamic facets, attributes can be defined
     * during data plane operations.</p>
     */
    inline Facet& WithFacetStyle(FacetStyle&& value) { SetFacetStyle(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ObjectType m_objectType;
    bool m_objectTypeHasBeenSet = false;

    FacetStyle m_facetStyle;
    bool m_facetStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
