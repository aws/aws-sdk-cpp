/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents the output of a <a>DetachObject</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchDetachObject">AWS
   * API Reference</a></p>
   */
  class BatchDetachObject
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchDetachObject() = default;
    AWS_CLOUDDIRECTORY_API BatchDetachObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchDetachObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline const ObjectReference& GetParentReference() const { return m_parentReference; }
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }
    template<typename ParentReferenceT = ObjectReference>
    void SetParentReference(ParentReferenceT&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::forward<ParentReferenceT>(value); }
    template<typename ParentReferenceT = ObjectReference>
    BatchDetachObject& WithParentReference(ParentReferenceT&& value) { SetParentReference(std::forward<ParentReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the link.</p>
     */
    inline const Aws::String& GetLinkName() const { return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    template<typename LinkNameT = Aws::String>
    void SetLinkName(LinkNameT&& value) { m_linkNameHasBeenSet = true; m_linkName = std::forward<LinkNameT>(value); }
    template<typename LinkNameT = Aws::String>
    BatchDetachObject& WithLinkName(LinkNameT&& value) { SetLinkName(std::forward<LinkNameT>(value)); return *this;}
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
    BatchDetachObject& WithBatchReferenceName(BatchReferenceNameT&& value) { SetBatchReferenceName(std::forward<BatchReferenceNameT>(value)); return *this;}
    ///@}
  private:

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
