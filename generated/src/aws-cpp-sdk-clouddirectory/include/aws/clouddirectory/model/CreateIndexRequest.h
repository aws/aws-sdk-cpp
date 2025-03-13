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
    AWS_CLOUDDIRECTORY_API CreateIndexRequest() = default;

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
    inline const Aws::String& GetDirectoryArn() const { return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    template<typename DirectoryArnT = Aws::String>
    void SetDirectoryArn(DirectoryArnT&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::forward<DirectoryArnT>(value); }
    template<typename DirectoryArnT = Aws::String>
    CreateIndexRequest& WithDirectoryArn(DirectoryArnT&& value) { SetDirectoryArn(std::forward<DirectoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline const Aws::Vector<AttributeKey>& GetOrderedIndexedAttributeList() const { return m_orderedIndexedAttributeList; }
    inline bool OrderedIndexedAttributeListHasBeenSet() const { return m_orderedIndexedAttributeListHasBeenSet; }
    template<typename OrderedIndexedAttributeListT = Aws::Vector<AttributeKey>>
    void SetOrderedIndexedAttributeList(OrderedIndexedAttributeListT&& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList = std::forward<OrderedIndexedAttributeListT>(value); }
    template<typename OrderedIndexedAttributeListT = Aws::Vector<AttributeKey>>
    CreateIndexRequest& WithOrderedIndexedAttributeList(OrderedIndexedAttributeListT&& value) { SetOrderedIndexedAttributeList(std::forward<OrderedIndexedAttributeListT>(value)); return *this;}
    template<typename OrderedIndexedAttributeListT = AttributeKey>
    CreateIndexRequest& AddOrderedIndexedAttributeList(OrderedIndexedAttributeListT&& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList.emplace_back(std::forward<OrderedIndexedAttributeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the attribute that is being indexed has unique values or
     * not.</p>
     */
    inline bool GetIsUnique() const { return m_isUnique; }
    inline bool IsUniqueHasBeenSet() const { return m_isUniqueHasBeenSet; }
    inline void SetIsUnique(bool value) { m_isUniqueHasBeenSet = true; m_isUnique = value; }
    inline CreateIndexRequest& WithIsUnique(bool value) { SetIsUnique(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to the parent object that contains the index object.</p>
     */
    inline const ObjectReference& GetParentReference() const { return m_parentReference; }
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }
    template<typename ParentReferenceT = ObjectReference>
    void SetParentReference(ParentReferenceT&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::forward<ParentReferenceT>(value); }
    template<typename ParentReferenceT = ObjectReference>
    CreateIndexRequest& WithParentReference(ParentReferenceT&& value) { SetParentReference(std::forward<ParentReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline const Aws::String& GetLinkName() const { return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    template<typename LinkNameT = Aws::String>
    void SetLinkName(LinkNameT&& value) { m_linkNameHasBeenSet = true; m_linkName = std::forward<LinkNameT>(value); }
    template<typename LinkNameT = Aws::String>
    CreateIndexRequest& WithLinkName(LinkNameT&& value) { SetLinkName(std::forward<LinkNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    Aws::Vector<AttributeKey> m_orderedIndexedAttributeList;
    bool m_orderedIndexedAttributeListHasBeenSet = false;

    bool m_isUnique{false};
    bool m_isUniqueHasBeenSet = false;

    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet = false;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
