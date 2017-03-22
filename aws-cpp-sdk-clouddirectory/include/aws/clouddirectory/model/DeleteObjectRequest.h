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
  class AWS_CLOUDDIRECTORY_API DeleteObjectRequest : public CloudDirectoryRequest
  {
  public:
    DeleteObjectRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ARN associated with the <a>Directory</a> where the object resides. For more
     * information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>ARN associated with the <a>Directory</a> where the object resides. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the <a>Directory</a> where the object resides. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the <a>Directory</a> where the object resides. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>ARN associated with the <a>Directory</a> where the object resides. For more
     * information, see <a>arns</a>.</p>
     */
    inline DeleteObjectRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a> where the object resides. For more
     * information, see <a>arns</a>.</p>
     */
    inline DeleteObjectRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a> where the object resides. For more
     * information, see <a>arns</a>.</p>
     */
    inline DeleteObjectRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>Reference that identifies the object.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }

    /**
     * <p>Reference that identifies the object.</p>
     */
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>Reference that identifies the object.</p>
     */
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>Reference that identifies the object.</p>
     */
    inline DeleteObjectRequest& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>Reference that identifies the object.</p>
     */
    inline DeleteObjectRequest& WithObjectReference(ObjectReference&& value) { SetObjectReference(value); return *this;}

  private:
    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;
    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
