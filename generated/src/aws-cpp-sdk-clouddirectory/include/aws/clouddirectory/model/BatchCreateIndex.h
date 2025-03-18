/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchCreateIndex
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchCreateIndex() = default;
    AWS_CLOUDDIRECTORY_API BatchCreateIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchCreateIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    BatchCreateIndex& WithOrderedIndexedAttributeList(OrderedIndexedAttributeListT&& value) { SetOrderedIndexedAttributeList(std::forward<OrderedIndexedAttributeListT>(value)); return *this;}
    template<typename OrderedIndexedAttributeListT = AttributeKey>
    BatchCreateIndex& AddOrderedIndexedAttributeList(OrderedIndexedAttributeListT&& value) { m_orderedIndexedAttributeListHasBeenSet = true; m_orderedIndexedAttributeList.emplace_back(std::forward<OrderedIndexedAttributeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the attribute that is being indexed has unique values or
     * not.</p>
     */
    inline bool GetIsUnique() const { return m_isUnique; }
    inline bool IsUniqueHasBeenSet() const { return m_isUniqueHasBeenSet; }
    inline void SetIsUnique(bool value) { m_isUniqueHasBeenSet = true; m_isUnique = value; }
    inline BatchCreateIndex& WithIsUnique(bool value) { SetIsUnique(value); return *this;}
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
    BatchCreateIndex& WithParentReference(ParentReferenceT&& value) { SetParentReference(std::forward<ParentReferenceT>(value)); return *this;}
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
    BatchCreateIndex& WithLinkName(LinkNameT&& value) { SetLinkName(std::forward<LinkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline const Aws::String& GetBatchReferenceName() const { return m_batchReferenceName; }
    inline bool BatchReferenceNameHasBeenSet() const { return m_batchReferenceNameHasBeenSet; }
    template<typename BatchReferenceNameT = Aws::String>
    void SetBatchReferenceName(BatchReferenceNameT&& value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName = std::forward<BatchReferenceNameT>(value); }
    template<typename BatchReferenceNameT = Aws::String>
    BatchCreateIndex& WithBatchReferenceName(BatchReferenceNameT&& value) { SetBatchReferenceName(std::forward<BatchReferenceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeKey> m_orderedIndexedAttributeList;
    bool m_orderedIndexedAttributeListHasBeenSet = false;

    bool m_isUnique{false};
    bool m_isUniqueHasBeenSet = false;

    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet = false;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet = false;

    Aws::String m_batchReferenceName;
    bool m_batchReferenceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
