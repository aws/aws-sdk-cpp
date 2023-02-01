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
  class AttachObjectRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API AttachObjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachObject"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) that is associated with the <a>Directory</a> where
     * both objects reside. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>Amazon Resource Name (ARN) that is associated with the <a>Directory</a> where
     * both objects reside. For more information, see <a>arns</a>.</p>
     */
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) that is associated with the <a>Directory</a> where
     * both objects reside. For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) that is associated with the <a>Directory</a> where
     * both objects reside. For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) that is associated with the <a>Directory</a> where
     * both objects reside. For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) that is associated with the <a>Directory</a> where
     * both objects reside. For more information, see <a>arns</a>.</p>
     */
    inline AttachObjectRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) that is associated with the <a>Directory</a> where
     * both objects reside. For more information, see <a>arns</a>.</p>
     */
    inline AttachObjectRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) that is associated with the <a>Directory</a> where
     * both objects reside. For more information, see <a>arns</a>.</p>
     */
    inline AttachObjectRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


    /**
     * <p>The parent object reference.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }

    /**
     * <p>The parent object reference.</p>
     */
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }

    /**
     * <p>The parent object reference.</p>
     */
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }

    /**
     * <p>The parent object reference.</p>
     */
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::move(value); }

    /**
     * <p>The parent object reference.</p>
     */
    inline AttachObjectRequest& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}

    /**
     * <p>The parent object reference.</p>
     */
    inline AttachObjectRequest& WithParentReference(ObjectReference&& value) { SetParentReference(std::move(value)); return *this;}


    /**
     * <p>The child object reference to be attached to the object.</p>
     */
    inline const ObjectReference& GetChildReference() const{ return m_childReference; }

    /**
     * <p>The child object reference to be attached to the object.</p>
     */
    inline bool ChildReferenceHasBeenSet() const { return m_childReferenceHasBeenSet; }

    /**
     * <p>The child object reference to be attached to the object.</p>
     */
    inline void SetChildReference(const ObjectReference& value) { m_childReferenceHasBeenSet = true; m_childReference = value; }

    /**
     * <p>The child object reference to be attached to the object.</p>
     */
    inline void SetChildReference(ObjectReference&& value) { m_childReferenceHasBeenSet = true; m_childReference = std::move(value); }

    /**
     * <p>The child object reference to be attached to the object.</p>
     */
    inline AttachObjectRequest& WithChildReference(const ObjectReference& value) { SetChildReference(value); return *this;}

    /**
     * <p>The child object reference to be attached to the object.</p>
     */
    inline AttachObjectRequest& WithChildReference(ObjectReference&& value) { SetChildReference(std::move(value)); return *this;}


    /**
     * <p>The link name with which the child object is attached to the parent.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }

    /**
     * <p>The link name with which the child object is attached to the parent.</p>
     */
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }

    /**
     * <p>The link name with which the child object is attached to the parent.</p>
     */
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }

    /**
     * <p>The link name with which the child object is attached to the parent.</p>
     */
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }

    /**
     * <p>The link name with which the child object is attached to the parent.</p>
     */
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }

    /**
     * <p>The link name with which the child object is attached to the parent.</p>
     */
    inline AttachObjectRequest& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}

    /**
     * <p>The link name with which the child object is attached to the parent.</p>
     */
    inline AttachObjectRequest& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}

    /**
     * <p>The link name with which the child object is attached to the parent.</p>
     */
    inline AttachObjectRequest& WithLinkName(const char* value) { SetLinkName(value); return *this;}

  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet = false;

    ObjectReference m_childReference;
    bool m_childReferenceHasBeenSet = false;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
