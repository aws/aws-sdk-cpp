/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectType.h>
#include <aws/clouddirectory/model/FacetStyle.h>
#include <aws/clouddirectory/model/FacetAttribute.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class CreateFacetRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API CreateFacetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFacet"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The schema ARN in which the new <a>Facet</a> will be created. For more
     * information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const { return m_schemaArn; }
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }
    template<typename SchemaArnT = Aws::String>
    void SetSchemaArn(SchemaArnT&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::forward<SchemaArnT>(value); }
    template<typename SchemaArnT = Aws::String>
    CreateFacetRequest& WithSchemaArn(SchemaArnT&& value) { SetSchemaArn(std::forward<SchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <a>Facet</a>, which is unique for a given schema.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateFacetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes that are associated with the <a>Facet</a>.</p>
     */
    inline const Aws::Vector<FacetAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<FacetAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<FacetAttribute>>
    CreateFacetRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = FacetAttribute>
    CreateFacetRequest& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether a given object created from this facet is of type node,
     * leaf node, policy or index.</p> <ul> <li> <p>Node: Can have multiple children
     * but one parent.</p> </li> </ul> <ul> <li> <p>Leaf node: Cannot have children but
     * can have multiple parents.</p> </li> </ul> <ul> <li> <p>Policy: Allows you to
     * store a policy document and policy type. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     * </li> </ul> <ul> <li> <p>Index: Can be created with the Index API.</p> </li>
     * </ul>
     */
    inline ObjectType GetObjectType() const { return m_objectType; }
    inline bool ObjectTypeHasBeenSet() const { return m_objectTypeHasBeenSet; }
    inline void SetObjectType(ObjectType value) { m_objectTypeHasBeenSet = true; m_objectType = value; }
    inline CreateFacetRequest& WithObjectType(ObjectType value) { SetObjectType(value); return *this;}
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
    inline CreateFacetRequest& WithFacetStyle(FacetStyle value) { SetFacetStyle(value); return *this;}
    ///@}
  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<FacetAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    ObjectType m_objectType{ObjectType::NOT_SET};
    bool m_objectTypeHasBeenSet = false;

    FacetStyle m_facetStyle{FacetStyle::NOT_SET};
    bool m_facetStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
