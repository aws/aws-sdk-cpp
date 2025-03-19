/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class DetachFromIndexRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API DetachFromIndexRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachFromIndex"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the directory the index and object exist
     * in.</p>
     */
    inline const Aws::String& GetDirectoryArn() const { return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    template<typename DirectoryArnT = Aws::String>
    void SetDirectoryArn(DirectoryArnT&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::forward<DirectoryArnT>(value); }
    template<typename DirectoryArnT = Aws::String>
    DetachFromIndexRequest& WithDirectoryArn(DirectoryArnT&& value) { SetDirectoryArn(std::forward<DirectoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to the index object.</p>
     */
    inline const ObjectReference& GetIndexReference() const { return m_indexReference; }
    inline bool IndexReferenceHasBeenSet() const { return m_indexReferenceHasBeenSet; }
    template<typename IndexReferenceT = ObjectReference>
    void SetIndexReference(IndexReferenceT&& value) { m_indexReferenceHasBeenSet = true; m_indexReference = std::forward<IndexReferenceT>(value); }
    template<typename IndexReferenceT = ObjectReference>
    DetachFromIndexRequest& WithIndexReference(IndexReferenceT&& value) { SetIndexReference(std::forward<IndexReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline const ObjectReference& GetTargetReference() const { return m_targetReference; }
    inline bool TargetReferenceHasBeenSet() const { return m_targetReferenceHasBeenSet; }
    template<typename TargetReferenceT = ObjectReference>
    void SetTargetReference(TargetReferenceT&& value) { m_targetReferenceHasBeenSet = true; m_targetReference = std::forward<TargetReferenceT>(value); }
    template<typename TargetReferenceT = ObjectReference>
    DetachFromIndexRequest& WithTargetReference(TargetReferenceT&& value) { SetTargetReference(std::forward<TargetReferenceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    ObjectReference m_indexReference;
    bool m_indexReferenceHasBeenSet = false;

    ObjectReference m_targetReference;
    bool m_targetReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
