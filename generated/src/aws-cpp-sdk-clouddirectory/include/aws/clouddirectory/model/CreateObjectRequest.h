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
    AWS_CLOUDDIRECTORY_API CreateObjectRequest() = default;

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
    inline const Aws::String& GetDirectoryArn() const { return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    template<typename DirectoryArnT = Aws::String>
    void SetDirectoryArn(DirectoryArnT&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::forward<DirectoryArnT>(value); }
    template<typename DirectoryArnT = Aws::String>
    CreateObjectRequest& WithDirectoryArn(DirectoryArnT&& value) { SetDirectoryArn(std::forward<DirectoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of schema facets to be associated with the object. Do not provide
     * minor version components. See <a>SchemaFacet</a> for details.</p>
     */
    inline const Aws::Vector<SchemaFacet>& GetSchemaFacets() const { return m_schemaFacets; }
    inline bool SchemaFacetsHasBeenSet() const { return m_schemaFacetsHasBeenSet; }
    template<typename SchemaFacetsT = Aws::Vector<SchemaFacet>>
    void SetSchemaFacets(SchemaFacetsT&& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets = std::forward<SchemaFacetsT>(value); }
    template<typename SchemaFacetsT = Aws::Vector<SchemaFacet>>
    CreateObjectRequest& WithSchemaFacets(SchemaFacetsT&& value) { SetSchemaFacets(std::forward<SchemaFacetsT>(value)); return *this;}
    template<typename SchemaFacetsT = SchemaFacet>
    CreateObjectRequest& AddSchemaFacets(SchemaFacetsT&& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets.emplace_back(std::forward<SchemaFacetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attribute map whose attribute ARN contains the key and attribute value as
     * the map value.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetObjectAttributeList() const { return m_objectAttributeList; }
    inline bool ObjectAttributeListHasBeenSet() const { return m_objectAttributeListHasBeenSet; }
    template<typename ObjectAttributeListT = Aws::Vector<AttributeKeyAndValue>>
    void SetObjectAttributeList(ObjectAttributeListT&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = std::forward<ObjectAttributeListT>(value); }
    template<typename ObjectAttributeListT = Aws::Vector<AttributeKeyAndValue>>
    CreateObjectRequest& WithObjectAttributeList(ObjectAttributeListT&& value) { SetObjectAttributeList(std::forward<ObjectAttributeListT>(value)); return *this;}
    template<typename ObjectAttributeListT = AttributeKeyAndValue>
    CreateObjectRequest& AddObjectAttributeList(ObjectAttributeListT&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.emplace_back(std::forward<ObjectAttributeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If specified, the parent reference to which this object will be attached.</p>
     */
    inline const ObjectReference& GetParentReference() const { return m_parentReference; }
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }
    template<typename ParentReferenceT = ObjectReference>
    void SetParentReference(ParentReferenceT&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::forward<ParentReferenceT>(value); }
    template<typename ParentReferenceT = ObjectReference>
    CreateObjectRequest& WithParentReference(ParentReferenceT&& value) { SetParentReference(std::forward<ParentReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of link that is used to attach this object to a parent.</p>
     */
    inline const Aws::String& GetLinkName() const { return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    template<typename LinkNameT = Aws::String>
    void SetLinkName(LinkNameT&& value) { m_linkNameHasBeenSet = true; m_linkName = std::forward<LinkNameT>(value); }
    template<typename LinkNameT = Aws::String>
    CreateObjectRequest& WithLinkName(LinkNameT&& value) { SetLinkName(std::forward<LinkNameT>(value)); return *this;}
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
