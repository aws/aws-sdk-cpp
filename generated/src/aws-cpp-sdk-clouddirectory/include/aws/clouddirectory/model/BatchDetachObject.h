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
    AWS_CLOUDDIRECTORY_API BatchDetachObject();
    AWS_CLOUDDIRECTORY_API BatchDetachObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchDetachObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::move(value); }
    inline BatchDetachObject& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}
    inline BatchDetachObject& WithParentReference(ObjectReference&& value) { SetParentReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the link.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }
    inline BatchDetachObject& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}
    inline BatchDetachObject& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}
    inline BatchDetachObject& WithLinkName(const char* value) { SetLinkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline const Aws::String& GetBatchReferenceName() const{ return m_batchReferenceName; }
    inline bool BatchReferenceNameHasBeenSet() const { return m_batchReferenceNameHasBeenSet; }
    inline void SetBatchReferenceName(const Aws::String& value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName = value; }
    inline void SetBatchReferenceName(Aws::String&& value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName = std::move(value); }
    inline void SetBatchReferenceName(const char* value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName.assign(value); }
    inline BatchDetachObject& WithBatchReferenceName(const Aws::String& value) { SetBatchReferenceName(value); return *this;}
    inline BatchDetachObject& WithBatchReferenceName(Aws::String&& value) { SetBatchReferenceName(std::move(value)); return *this;}
    inline BatchDetachObject& WithBatchReferenceName(const char* value) { SetBatchReferenceName(value); return *this;}
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
