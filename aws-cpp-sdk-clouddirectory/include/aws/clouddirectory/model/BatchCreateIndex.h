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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/AttributeKey.h>
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
   * <p>Creates an index object inside of a <a>BatchRead</a> operation. For more
   * information, see <a>CreateIndex</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchCreateIndex">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchCreateIndex
  {
  public:
    BatchCreateIndex();
    BatchCreateIndex(Aws::Utils::Json::JsonView jsonValue);
    BatchCreateIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline BatchCreateIndex& WithOrderedIndexedAttributeList(const Aws::Vector<AttributeKey>& value) { SetOrderedIndexedAttributeList(value); return *this;}

    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline BatchCreateIndex& WithOrderedIndexedAttributeList(Aws::Vector<AttributeKey>&& value) { SetOrderedIndexedAttributeList(std::move(value)); return *this;}

    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline BatchCreateIndex& AddOrderedIndexedAttributeList(const AttributeKey& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList.push_back(value); return *this; }

    /**
     * <p>Specifies the attributes that should be indexed on. Currently only a single
     * attribute is supported.</p>
     */
    inline BatchCreateIndex& AddOrderedIndexedAttributeList(AttributeKey&& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList.push_back(std::move(value)); return *this; }


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
    inline BatchCreateIndex& WithIsUnique(bool value) { SetIsUnique(value); return *this;}


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
    inline BatchCreateIndex& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}

    /**
     * <p>A reference to the parent object that contains the index object.</p>
     */
    inline BatchCreateIndex& WithParentReference(ObjectReference&& value) { SetParentReference(std::move(value)); return *this;}


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
    inline BatchCreateIndex& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}

    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline BatchCreateIndex& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}

    /**
     * <p>The name of the link between the parent object and the index object.</p>
     */
    inline BatchCreateIndex& WithLinkName(const char* value) { SetLinkName(value); return *this;}


    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline const Aws::String& GetBatchReferenceName() const{ return m_batchReferenceName; }

    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline bool BatchReferenceNameHasBeenSet() const { return m_batchReferenceNameHasBeenSet; }

    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline void SetBatchReferenceName(const Aws::String& value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName = value; }

    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline void SetBatchReferenceName(Aws::String&& value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName = std::move(value); }

    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline void SetBatchReferenceName(const char* value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName.assign(value); }

    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline BatchCreateIndex& WithBatchReferenceName(const Aws::String& value) { SetBatchReferenceName(value); return *this;}

    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline BatchCreateIndex& WithBatchReferenceName(Aws::String&& value) { SetBatchReferenceName(std::move(value)); return *this;}

    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline BatchCreateIndex& WithBatchReferenceName(const char* value) { SetBatchReferenceName(value); return *this;}

  private:

    Aws::Vector<AttributeKey> m_orderedIndexedAttributeList;
    bool m_orderedIndexedAttributeListHasBeenSet;

    bool m_isUnique;
    bool m_isUniqueHasBeenSet;

    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet;

    Aws::String m_batchReferenceName;
    bool m_batchReferenceNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
