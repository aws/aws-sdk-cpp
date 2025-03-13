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
   * <p>Attaches the specified object to the specified index inside a
   * <a>BatchRead</a> operation. For more information, see <a>AttachToIndex</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchAttachToIndex">AWS
   * API Reference</a></p>
   */
  class BatchAttachToIndex
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchAttachToIndex() = default;
    AWS_CLOUDDIRECTORY_API BatchAttachToIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchAttachToIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to the index that you are attaching the object to.</p>
     */
    inline const ObjectReference& GetIndexReference() const { return m_indexReference; }
    inline bool IndexReferenceHasBeenSet() const { return m_indexReferenceHasBeenSet; }
    template<typename IndexReferenceT = ObjectReference>
    void SetIndexReference(IndexReferenceT&& value) { m_indexReferenceHasBeenSet = true; m_indexReference = std::forward<IndexReferenceT>(value); }
    template<typename IndexReferenceT = ObjectReference>
    BatchAttachToIndex& WithIndexReference(IndexReferenceT&& value) { SetIndexReference(std::forward<IndexReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to the object that you are attaching to the index.</p>
     */
    inline const ObjectReference& GetTargetReference() const { return m_targetReference; }
    inline bool TargetReferenceHasBeenSet() const { return m_targetReferenceHasBeenSet; }
    template<typename TargetReferenceT = ObjectReference>
    void SetTargetReference(TargetReferenceT&& value) { m_targetReferenceHasBeenSet = true; m_targetReference = std::forward<TargetReferenceT>(value); }
    template<typename TargetReferenceT = ObjectReference>
    BatchAttachToIndex& WithTargetReference(TargetReferenceT&& value) { SetTargetReference(std::forward<TargetReferenceT>(value)); return *this;}
    ///@}
  private:

    ObjectReference m_indexReference;
    bool m_indexReferenceHasBeenSet = false;

    ObjectReference m_targetReference;
    bool m_targetReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
