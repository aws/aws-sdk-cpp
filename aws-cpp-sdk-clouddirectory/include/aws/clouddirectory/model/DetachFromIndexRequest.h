/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/model/ObjectReference.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API DetachFromIndexRequest : public CloudDirectoryRequest
  {
  public:
    DetachFromIndexRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the directory the index and object exist in.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The ARN of the directory the index and object exist in.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The ARN of the directory the index and object exist in.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The ARN of the directory the index and object exist in.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The ARN of the directory the index and object exist in.</p>
     */
    inline DetachFromIndexRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the directory the index and object exist in.</p>
     */
    inline DetachFromIndexRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the directory the index and object exist in.</p>
     */
    inline DetachFromIndexRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>A reference to the index object.</p>
     */
    inline const ObjectReference& GetIndexReference() const{ return m_indexReference; }

    /**
     * <p>A reference to the index object.</p>
     */
    inline void SetIndexReference(const ObjectReference& value) { m_indexReferenceHasBeenSet = true; m_indexReference = value; }

    /**
     * <p>A reference to the index object.</p>
     */
    inline void SetIndexReference(ObjectReference&& value) { m_indexReferenceHasBeenSet = true; m_indexReference = value; }

    /**
     * <p>A reference to the index object.</p>
     */
    inline DetachFromIndexRequest& WithIndexReference(const ObjectReference& value) { SetIndexReference(value); return *this;}

    /**
     * <p>A reference to the index object.</p>
     */
    inline DetachFromIndexRequest& WithIndexReference(ObjectReference&& value) { SetIndexReference(value); return *this;}

    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline const ObjectReference& GetTargetReference() const{ return m_targetReference; }

    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline void SetTargetReference(const ObjectReference& value) { m_targetReferenceHasBeenSet = true; m_targetReference = value; }

    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline void SetTargetReference(ObjectReference&& value) { m_targetReferenceHasBeenSet = true; m_targetReference = value; }

    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline DetachFromIndexRequest& WithTargetReference(const ObjectReference& value) { SetTargetReference(value); return *this;}

    /**
     * <p>A reference to the object being detached from the index.</p>
     */
    inline DetachFromIndexRequest& WithTargetReference(ObjectReference&& value) { SetTargetReference(value); return *this;}

  private:
    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;
    ObjectReference m_indexReference;
    bool m_indexReferenceHasBeenSet;
    ObjectReference m_targetReference;
    bool m_targetReferenceHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
