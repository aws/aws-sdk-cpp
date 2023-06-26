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
    AWS_CLOUDDIRECTORY_API DetachFromIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachFromIndex"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the directory the index and object exist
     * in.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory the index and object exist
     * in.</p>
     */
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory the index and object exist
     * in.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory the index and object exist
     * in.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory the index and object exist
     * in.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory the index and object exist
     * in.</p>
     */
    inline DetachFromIndexRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the directory the index and object exist
     * in.</p>
     */
    inline DetachFromIndexRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the directory the index and object exist
     * in.</p>
     */
    inline DetachFromIndexRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


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
    inline DetachFromIndexRequest& WithIndexReference(const ObjectReference& value) { SetIndexReference(value); return *this;}

    /**
     * <p>A reference to the index object.</p>
     */
    inline DetachFromIndexRequest& WithIndexReference(ObjectReference&& value) { SetIndexReference(std::move(value)); return *this;}


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
    inline DetachFromIndexRequest& WithTargetReference(const ObjectReference& value) { SetTargetReference(value); return *this;}

    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline DetachFromIndexRequest& WithTargetReference(ObjectReference&& value) { SetTargetReference(std::move(value)); return *this;}

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
