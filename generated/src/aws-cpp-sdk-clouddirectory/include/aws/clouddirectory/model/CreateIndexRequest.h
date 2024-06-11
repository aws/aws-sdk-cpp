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
#include <aws/clouddirectory/model/AttributeKey.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class CreateIndexRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API CreateIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIndex"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the directory where the index should be created.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }
    inline CreateIndexRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}
    inline CreateIndexRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}
    inline CreateIndexRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline const Aws::Vector<AttributeKey>& GetOrderedIndexedAttributeList() const{ return m_orderedIndexedAttributeList; }
    inline bool OrderedIndexedAttributeListHasBeenSet() const { return m_orderedIndexedAttributeListHasBeenSet; }
    inline void SetOrderedIndexedAttributeList(const Aws::Vector<AttributeKey>& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList = value; }
    inline void SetOrderedIndexedAttributeList(Aws::Vector<AttributeKey>&& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList = std::move(value); }
    inline CreateIndexRequest& WithOrderedIndexedAttributeList(const Aws::Vector<AttributeKey>& value) { SetOrderedIndexedAttributeList(value); return *this;}
    inline CreateIndexRequest& WithOrderedIndexedAttributeList(Aws::Vector<AttributeKey>&& value) { SetOrderedIndexedAttributeList(std::move(value)); return *this;}
    inline CreateIndexRequest& AddOrderedIndexedAttributeList(const AttributeKey& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList.push_back(value); return *this; }
    inline CreateIndexRequest& AddOrderedIndexedAttributeList(AttributeKey&& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the attribute that is being indexed has unique values or
     * not.</p>
     */
    inline bool GetIsUnique() const{ return m_isUnique; }
    inline bool IsUniqueHasBeenSet() const { return m_isUniqueHasBeenSet; }
    inline void SetIsUnique(bool value) { m_isUniqueHasBeenSet = true; m_isUnique = value; }
    inline CreateIndexRequest& WithIsUnique(bool value) { SetIsUnique(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to the parent object that contains the index object.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::move(value); }
    inline CreateIndexRequest& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}
    inline CreateIndexRequest& WithParentReference(ObjectReference&& value) { SetParentReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }
    inline CreateIndexRequest& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}
    inline CreateIndexRequest& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}
    inline CreateIndexRequest& WithLinkName(const char* value) { SetLinkName(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    Aws::Vector<AttributeKey> m_orderedIndexedAttributeList;
    bool m_orderedIndexedAttributeListHasBeenSet = false;

    bool m_isUnique;
    bool m_isUniqueHasBeenSet = false;

    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet = false;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
