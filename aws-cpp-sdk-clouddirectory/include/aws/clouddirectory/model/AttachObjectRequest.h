﻿/*
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
  class AWS_CLOUDDIRECTORY_API AttachObjectRequest : public CloudDirectoryRequest
  {
  public:
    AttachObjectRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>ARN associated with the <a>Directory</a> where both objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>ARN associated with the <a>Directory</a> where both objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the <a>Directory</a> where both objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the <a>Directory</a> where both objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>ARN associated with the <a>Directory</a> where both objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline AttachObjectRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a> where both objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline AttachObjectRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a> where both objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline AttachObjectRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>Parent object reference.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }

    /**
     * <p>Parent object reference.</p>
     */
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }

    /**
     * <p>Parent object reference.</p>
     */
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }

    /**
     * <p>Parent object reference.</p>
     */
    inline AttachObjectRequest& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}

    /**
     * <p>Parent object reference.</p>
     */
    inline AttachObjectRequest& WithParentReference(ObjectReference&& value) { SetParentReference(value); return *this;}

    /**
     * <p>Child object reference to be attached to the object.</p>
     */
    inline const ObjectReference& GetChildReference() const{ return m_childReference; }

    /**
     * <p>Child object reference to be attached to the object.</p>
     */
    inline void SetChildReference(const ObjectReference& value) { m_childReferenceHasBeenSet = true; m_childReference = value; }

    /**
     * <p>Child object reference to be attached to the object.</p>
     */
    inline void SetChildReference(ObjectReference&& value) { m_childReferenceHasBeenSet = true; m_childReference = value; }

    /**
     * <p>Child object reference to be attached to the object.</p>
     */
    inline AttachObjectRequest& WithChildReference(const ObjectReference& value) { SetChildReference(value); return *this;}

    /**
     * <p>Child object reference to be attached to the object.</p>
     */
    inline AttachObjectRequest& WithChildReference(ObjectReference&& value) { SetChildReference(value); return *this;}

    /**
     * <p>Link name with which the child object is attached to the parent.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }

    /**
     * <p>Link name with which the child object is attached to the parent.</p>
     */
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }

    /**
     * <p>Link name with which the child object is attached to the parent.</p>
     */
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = value; }

    /**
     * <p>Link name with which the child object is attached to the parent.</p>
     */
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }

    /**
     * <p>Link name with which the child object is attached to the parent.</p>
     */
    inline AttachObjectRequest& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}

    /**
     * <p>Link name with which the child object is attached to the parent.</p>
     */
    inline AttachObjectRequest& WithLinkName(Aws::String&& value) { SetLinkName(value); return *this;}

    /**
     * <p>Link name with which the child object is attached to the parent.</p>
     */
    inline AttachObjectRequest& WithLinkName(const char* value) { SetLinkName(value); return *this;}

  private:
    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;
    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet;
    ObjectReference m_childReference;
    bool m_childReferenceHasBeenSet;
    Aws::String m_linkName;
    bool m_linkNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
