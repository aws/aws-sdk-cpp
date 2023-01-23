/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/ObjectReference.h>
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
   * <p>Detaches the specified object from the specified index inside a
   * <a>BatchRead</a> operation. For more information, see <a>DetachFromIndex</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchDetachFromIndex">AWS
   * API Reference</a></p>
   */
  class BatchDetachFromIndex
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchDetachFromIndex();
    AWS_CLOUDDIRECTORY_API BatchDetachFromIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchDetachFromIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to the index object.</p>
     */
    inline const ObjectReference& GetIndexReference() const{ return m_indexReference; }

    /**
     * <p>A reference to the index object.</p>
     */
    inline bool IndexReferenceHasBeenSet() const { return m_indexReferenceHasBeenSet; }

    /**
     * <p>A reference to the index object.</p>
     */
    inline void SetIndexReference(const ObjectReference& value) { m_indexReferenceHasBeenSet = true; m_indexReference = value; }

    /**
     * <p>A reference to the index object.</p>
     */
    inline void SetIndexReference(ObjectReference&& value) { m_indexReferenceHasBeenSet = true; m_indexReference = std::move(value); }

    /**
     * <p>A reference to the index object.</p>
     */
    inline BatchDetachFromIndex& WithIndexReference(const ObjectReference& value) { SetIndexReference(value); return *this;}

    /**
     * <p>A reference to the index object.</p>
     */
    inline BatchDetachFromIndex& WithIndexReference(ObjectReference&& value) { SetIndexReference(std::move(value)); return *this;}


    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline const ObjectReference& GetTargetReference() const{ return m_targetReference; }

    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline bool TargetReferenceHasBeenSet() const { return m_targetReferenceHasBeenSet; }

    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline void SetTargetReference(const ObjectReference& value) { m_targetReferenceHasBeenSet = true; m_targetReference = value; }

    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline void SetTargetReference(ObjectReference&& value) { m_targetReferenceHasBeenSet = true; m_targetReference = std::move(value); }

    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline BatchDetachFromIndex& WithTargetReference(const ObjectReference& value) { SetTargetReference(value); return *this;}

    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline BatchDetachFromIndex& WithTargetReference(ObjectReference&& value) { SetTargetReference(std::move(value)); return *this;}

  private:

    ObjectReference m_indexReference;
    bool m_indexReferenceHasBeenSet = false;

    ObjectReference m_targetReference;
    bool m_targetReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
