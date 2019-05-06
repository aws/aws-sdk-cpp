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
  class AWS_CLOUDDIRECTORY_API CreateFacetRequest : public CloudDirectoryRequest
  {
  public:
    CreateFacetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFacet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The schema ARN in which the new <a>Facet</a> will be created. For more
     * information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The schema ARN in which the new <a>Facet</a> will be created. For more
     * information, see <a>arns</a>.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The schema ARN in which the new <a>Facet</a> will be created. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The schema ARN in which the new <a>Facet</a> will be created. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The schema ARN in which the new <a>Facet</a> will be created. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The schema ARN in which the new <a>Facet</a> will be created. For more
     * information, see <a>arns</a>.</p>
     */
    inline CreateFacetRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The schema ARN in which the new <a>Facet</a> will be created. For more
     * information, see <a>arns</a>.</p>
     */
    inline CreateFacetRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The schema ARN in which the new <a>Facet</a> will be created. For more
     * information, see <a>arns</a>.</p>
     */
    inline CreateFacetRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The name of the <a>Facet</a>, which is unique for a given schema.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <a>Facet</a>, which is unique for a given schema.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <a>Facet</a>, which is unique for a given schema.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <a>Facet</a>, which is unique for a given schema.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <a>Facet</a>, which is unique for a given schema.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <a>Facet</a>, which is unique for a given schema.</p>
     */
    inline CreateFacetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <a>Facet</a>, which is unique for a given schema.</p>
     */
    inline CreateFacetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <a>Facet</a>, which is unique for a given schema.</p>
     */
    inline CreateFacetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The attributes that are associated with the <a>Facet</a>.</p>
     */
    inline const Aws::Vector<FacetAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes that are associated with the <a>Facet</a>.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attributes that are associated with the <a>Facet</a>.</p>
     */
    inline void SetAttributes(const Aws::Vector<FacetAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes that are associated with the <a>Facet</a>.</p>
     */
    inline void SetAttributes(Aws::Vector<FacetAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes that are associated with the <a>Facet</a>.</p>
     */
    inline CreateFacetRequest& WithAttributes(const Aws::Vector<FacetAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes that are associated with the <a>Facet</a>.</p>
     */
    inline CreateFacetRequest& WithAttributes(Aws::Vector<FacetAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes that are associated with the <a>Facet</a>.</p>
     */
    inline CreateFacetRequest& AddAttributes(const FacetAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes that are associated with the <a>Facet</a>.</p>
     */
    inline CreateFacetRequest& AddAttributes(FacetAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


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
    inline const ObjectType& GetObjectType() const{ return m_objectType; }

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
    inline bool ObjectTypeHasBeenSet() const { return m_objectTypeHasBeenSet; }

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
    inline void SetObjectType(const ObjectType& value) { m_objectTypeHasBeenSet = true; m_objectType = value; }

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
    inline void SetObjectType(ObjectType&& value) { m_objectTypeHasBeenSet = true; m_objectType = std::move(value); }

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
    inline CreateFacetRequest& WithObjectType(const ObjectType& value) { SetObjectType(value); return *this;}

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
    inline CreateFacetRequest& WithObjectType(ObjectType&& value) { SetObjectType(std::move(value)); return *this;}


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
    inline CreateFacetRequest& WithFacetStyle(const FacetStyle& value) { SetFacetStyle(value); return *this;}

    /**
     * <p>There are two different styles that you can define on any given facet,
     * <code>Static</code> and <code>Dynamic</code>. For static facets, all attributes
     * must be defined in the schema. For dynamic facets, attributes can be defined
     * during data plane operations.</p>
     */
    inline CreateFacetRequest& WithFacetStyle(FacetStyle&& value) { SetFacetStyle(std::move(value)); return *this;}

  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<FacetAttribute> m_attributes;
    bool m_attributesHasBeenSet;

    ObjectType m_objectType;
    bool m_objectTypeHasBeenSet;

    FacetStyle m_facetStyle;
    bool m_facetStyleHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
