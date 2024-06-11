/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
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
  class CreateObjectRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API CreateObjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateObject"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * in which the object will be created. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }
    inline CreateObjectRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}
    inline CreateObjectRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}
    inline CreateObjectRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of schema facets to be associated with the object. Do not provide
     * minor version components. See <a>SchemaFacet</a> for details.</p>
     */
    inline const Aws::Vector<SchemaFacet>& GetSchemaFacets() const{ return m_schemaFacets; }
    inline bool SchemaFacetsHasBeenSet() const { return m_schemaFacetsHasBeenSet; }
    inline void SetSchemaFacets(const Aws::Vector<SchemaFacet>& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets = value; }
    inline void SetSchemaFacets(Aws::Vector<SchemaFacet>&& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets = std::move(value); }
    inline CreateObjectRequest& WithSchemaFacets(const Aws::Vector<SchemaFacet>& value) { SetSchemaFacets(value); return *this;}
    inline CreateObjectRequest& WithSchemaFacets(Aws::Vector<SchemaFacet>&& value) { SetSchemaFacets(std::move(value)); return *this;}
    inline CreateObjectRequest& AddSchemaFacets(const SchemaFacet& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets.push_back(value); return *this; }
    inline CreateObjectRequest& AddSchemaFacets(SchemaFacet&& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attribute map whose attribute ARN contains the key and attribute value as
     * the map value.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetObjectAttributeList() const{ return m_objectAttributeList; }
    inline bool ObjectAttributeListHasBeenSet() const { return m_objectAttributeListHasBeenSet; }
    inline void SetObjectAttributeList(const Aws::Vector<AttributeKeyAndValue>& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = value; }
    inline void SetObjectAttributeList(Aws::Vector<AttributeKeyAndValue>&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = std::move(value); }
    inline CreateObjectRequest& WithObjectAttributeList(const Aws::Vector<AttributeKeyAndValue>& value) { SetObjectAttributeList(value); return *this;}
    inline CreateObjectRequest& WithObjectAttributeList(Aws::Vector<AttributeKeyAndValue>&& value) { SetObjectAttributeList(std::move(value)); return *this;}
    inline CreateObjectRequest& AddObjectAttributeList(const AttributeKeyAndValue& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.push_back(value); return *this; }
    inline CreateObjectRequest& AddObjectAttributeList(AttributeKeyAndValue&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If specified, the parent reference to which this object will be attached.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::move(value); }
    inline CreateObjectRequest& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}
    inline CreateObjectRequest& WithParentReference(ObjectReference&& value) { SetParentReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of link that is used to attach this object to a parent.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }
    inline CreateObjectRequest& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}
    inline CreateObjectRequest& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}
    inline CreateObjectRequest& WithLinkName(const char* value) { SetLinkName(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    Aws::Vector<SchemaFacet> m_schemaFacets;
    bool m_schemaFacetsHasBeenSet = false;

    Aws::Vector<AttributeKeyAndValue> m_objectAttributeList;
    bool m_objectAttributeListHasBeenSet = false;

    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet = false;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
