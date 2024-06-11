/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/clouddirectory/model/AttributeKeyAndValue.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AddFacetToObjectRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API AddFacetToObjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddFacetToObject"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where the object resides. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }
    inline AddFacetToObjectRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}
    inline AddFacetToObjectRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}
    inline AddFacetToObjectRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifiers for the facet that you are adding to the object. See
     * <a>SchemaFacet</a> for details.</p>
     */
    inline const SchemaFacet& GetSchemaFacet() const{ return m_schemaFacet; }
    inline bool SchemaFacetHasBeenSet() const { return m_schemaFacetHasBeenSet; }
    inline void SetSchemaFacet(const SchemaFacet& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = value; }
    inline void SetSchemaFacet(SchemaFacet&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = std::move(value); }
    inline AddFacetToObjectRequest& WithSchemaFacet(const SchemaFacet& value) { SetSchemaFacet(value); return *this;}
    inline AddFacetToObjectRequest& WithSchemaFacet(SchemaFacet&& value) { SetSchemaFacet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes on the facet that you are adding to the object.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetObjectAttributeList() const{ return m_objectAttributeList; }
    inline bool ObjectAttributeListHasBeenSet() const { return m_objectAttributeListHasBeenSet; }
    inline void SetObjectAttributeList(const Aws::Vector<AttributeKeyAndValue>& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = value; }
    inline void SetObjectAttributeList(Aws::Vector<AttributeKeyAndValue>&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = std::move(value); }
    inline AddFacetToObjectRequest& WithObjectAttributeList(const Aws::Vector<AttributeKeyAndValue>& value) { SetObjectAttributeList(value); return *this;}
    inline AddFacetToObjectRequest& WithObjectAttributeList(Aws::Vector<AttributeKeyAndValue>&& value) { SetObjectAttributeList(std::move(value)); return *this;}
    inline AddFacetToObjectRequest& AddObjectAttributeList(const AttributeKeyAndValue& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.push_back(value); return *this; }
    inline AddFacetToObjectRequest& AddObjectAttributeList(AttributeKeyAndValue&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A reference to the object you are adding the specified facet to.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }
    inline AddFacetToObjectRequest& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}
    inline AddFacetToObjectRequest& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    SchemaFacet m_schemaFacet;
    bool m_schemaFacetHasBeenSet = false;

    Aws::Vector<AttributeKeyAndValue> m_objectAttributeList;
    bool m_objectAttributeListHasBeenSet = false;

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
