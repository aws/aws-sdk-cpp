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
  class AWS_CLOUDDIRECTORY_API BatchDetachObject
  {
  public:
    BatchDetachObject();
    BatchDetachObject(Aws::Utils::Json::JsonView jsonValue);
    BatchDetachObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }

    /**
     * <p>Parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }

    /**
     * <p>Parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }

    /**
     * <p>Parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::move(value); }

    /**
     * <p>Parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline BatchDetachObject& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}

    /**
     * <p>Parent reference from which the object with the specified link name is
     * detached.</p>
     */
    inline BatchDetachObject& WithParentReference(ObjectReference&& value) { SetParentReference(std::move(value)); return *this;}


    /**
     * <p>The name of the link.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }

    /**
     * <p>The name of the link.</p>
     */
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }

    /**
     * <p>The name of the link.</p>
     */
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }

    /**
     * <p>The name of the link.</p>
     */
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }

    /**
     * <p>The name of the link.</p>
     */
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }

    /**
     * <p>The name of the link.</p>
     */
    inline BatchDetachObject& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}

    /**
     * <p>The name of the link.</p>
     */
    inline BatchDetachObject& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}

    /**
     * <p>The name of the link.</p>
     */
    inline BatchDetachObject& WithLinkName(const char* value) { SetLinkName(value); return *this;}


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
    inline BatchDetachObject& WithBatchReferenceName(const Aws::String& value) { SetBatchReferenceName(value); return *this;}

    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline BatchDetachObject& WithBatchReferenceName(Aws::String&& value) { SetBatchReferenceName(std::move(value)); return *this;}

    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline BatchDetachObject& WithBatchReferenceName(const char* value) { SetBatchReferenceName(value); return *this;}

  private:

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
