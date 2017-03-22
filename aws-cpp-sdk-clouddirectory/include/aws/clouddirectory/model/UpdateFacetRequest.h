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
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectType.h>
#include <aws/clouddirectory/model/FacetAttributeUpdate.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API UpdateFacetRequest : public CloudDirectoryRequest
  {
  public:
    UpdateFacetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline UpdateFacetRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline UpdateFacetRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Facet</a>. For more information, see
     * <a>arns</a>.</p>
     */
    inline UpdateFacetRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}

    /**
     * <p> </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> </p>
     */
    inline UpdateFacetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> </p>
     */
    inline UpdateFacetRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p> </p>
     */
    inline UpdateFacetRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>List of attributes that need to be updated in a given schema <a>Facet</a>.
     * Each attribute is followed by AttributeAction, which specifies the type of
     * update operation to perform. </p>
     */
    inline const Aws::Vector<FacetAttributeUpdate>& GetAttributeUpdates() const{ return m_attributeUpdates; }

    /**
     * <p>List of attributes that need to be updated in a given schema <a>Facet</a>.
     * Each attribute is followed by AttributeAction, which specifies the type of
     * update operation to perform. </p>
     */
    inline void SetAttributeUpdates(const Aws::Vector<FacetAttributeUpdate>& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = value; }

    /**
     * <p>List of attributes that need to be updated in a given schema <a>Facet</a>.
     * Each attribute is followed by AttributeAction, which specifies the type of
     * update operation to perform. </p>
     */
    inline void SetAttributeUpdates(Aws::Vector<FacetAttributeUpdate>&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = value; }

    /**
     * <p>List of attributes that need to be updated in a given schema <a>Facet</a>.
     * Each attribute is followed by AttributeAction, which specifies the type of
     * update operation to perform. </p>
     */
    inline UpdateFacetRequest& WithAttributeUpdates(const Aws::Vector<FacetAttributeUpdate>& value) { SetAttributeUpdates(value); return *this;}

    /**
     * <p>List of attributes that need to be updated in a given schema <a>Facet</a>.
     * Each attribute is followed by AttributeAction, which specifies the type of
     * update operation to perform. </p>
     */
    inline UpdateFacetRequest& WithAttributeUpdates(Aws::Vector<FacetAttributeUpdate>&& value) { SetAttributeUpdates(value); return *this;}

    /**
     * <p>List of attributes that need to be updated in a given schema <a>Facet</a>.
     * Each attribute is followed by AttributeAction, which specifies the type of
     * update operation to perform. </p>
     */
    inline UpdateFacetRequest& AddAttributeUpdates(const FacetAttributeUpdate& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.push_back(value); return *this; }

    /**
     * <p>List of attributes that need to be updated in a given schema <a>Facet</a>.
     * Each attribute is followed by AttributeAction, which specifies the type of
     * update operation to perform. </p>
     */
    inline UpdateFacetRequest& AddAttributeUpdates(FacetAttributeUpdate&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.push_back(value); return *this; }

    /**
     * <p>Object type associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline const ObjectType& GetObjectType() const{ return m_objectType; }

    /**
     * <p>Object type associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline void SetObjectType(const ObjectType& value) { m_objectTypeHasBeenSet = true; m_objectType = value; }

    /**
     * <p>Object type associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline void SetObjectType(ObjectType&& value) { m_objectTypeHasBeenSet = true; m_objectType = value; }

    /**
     * <p>Object type associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline UpdateFacetRequest& WithObjectType(const ObjectType& value) { SetObjectType(value); return *this;}

    /**
     * <p>Object type associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline UpdateFacetRequest& WithObjectType(ObjectType&& value) { SetObjectType(value); return *this;}

  private:
    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Vector<FacetAttributeUpdate> m_attributeUpdates;
    bool m_attributeUpdatesHasBeenSet;
    ObjectType m_objectType;
    bool m_objectTypeHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
