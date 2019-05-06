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
  class AWS_CLOUDDIRECTORY_API CreateIndexRequest : public CloudDirectoryRequest
  {
  public:
    CreateIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIndex"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the directory where the index should be created.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The ARN of the directory where the index should be created.</p>
     */
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }

    /**
     * <p>The ARN of the directory where the index should be created.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The ARN of the directory where the index should be created.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }

    /**
     * <p>The ARN of the directory where the index should be created.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The ARN of the directory where the index should be created.</p>
     */
    inline CreateIndexRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the directory where the index should be created.</p>
     */
    inline CreateIndexRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the directory where the index should be created.</p>
     */
    inline CreateIndexRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline const Aws::Vector<AttributeKey>& GetOrderedIndexedAttributeList() const{ return m_orderedIndexedAttributeList; }

    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline bool OrderedIndexedAttributeListHasBeenSet() const { return m_orderedIndexedAttributeListHasBeenSet; }

    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline void SetOrderedIndexedAttributeList(const Aws::Vector<AttributeKey>& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList = value; }

    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline void SetOrderedIndexedAttributeList(Aws::Vector<AttributeKey>&& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList = std::move(value); }

    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline CreateIndexRequest& WithOrderedIndexedAttributeList(const Aws::Vector<AttributeKey>& value) { SetOrderedIndexedAttributeList(value); return *this;}

    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline CreateIndexRequest& WithOrderedIndexedAttributeList(Aws::Vector<AttributeKey>&& value) { SetOrderedIndexedAttributeList(std::move(value)); return *this;}

    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline CreateIndexRequest& AddOrderedIndexedAttributeList(const AttributeKey& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList.push_back(value); return *this; }

    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline CreateIndexRequest& AddOrderedIndexedAttributeList(AttributeKey&& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the attribute that is being indexed has unique values or
     * not.</p>
     */
    inline bool GetIsUnique() const{ return m_isUnique; }

    /**
     * <p>Indicates whether the attribute that is being indexed has unique values or
     * not.</p>
     */
    inline bool IsUniqueHasBeenSet() const { return m_isUniqueHasBeenSet; }

    /**
     * <p>Indicates whether the attribute that is being indexed has unique values or
     * not.</p>
     */
    inline void SetIsUnique(bool value) { m_isUniqueHasBeenSet = true; m_isUnique = value; }

    /**
     * <p>Indicates whether the attribute that is being indexed has unique values or
     * not.</p>
     */
    inline CreateIndexRequest& WithIsUnique(bool value) { SetIsUnique(value); return *this;}


    /**
     * <p>A reference to the parent object that contains the index object.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }

    /**
     * <p>A reference to the parent object that contains the index object.</p>
     */
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }

    /**
     * <p>A reference to the parent object that contains the index object.</p>
     */
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }

    /**
     * <p>A reference to the parent object that contains the index object.</p>
     */
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::move(value); }

    /**
     * <p>A reference to the parent object that contains the index object.</p>
     */
    inline CreateIndexRequest& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}

    /**
     * <p>A reference to the parent object that contains the index object.</p>
     */
    inline CreateIndexRequest& WithParentReference(ObjectReference&& value) { SetParentReference(std::move(value)); return *this;}


    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }

    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }

    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }

    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }

    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }

    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline CreateIndexRequest& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}

    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline CreateIndexRequest& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}

    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline CreateIndexRequest& WithLinkName(const char* value) { SetLinkName(value); return *this;}

  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;

    Aws::Vector<AttributeKey> m_orderedIndexedAttributeList;
    bool m_orderedIndexedAttributeListHasBeenSet;

    bool m_isUnique;
    bool m_isUniqueHasBeenSet;

    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
