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


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) that is associated with the <a>Directory</a> where
     * both objects reside. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }
    inline AttachObjectRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}
    inline AttachObjectRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}
    inline AttachObjectRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent object reference.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::move(value); }
    inline AttachObjectRequest& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}
    inline AttachObjectRequest& WithParentReference(ObjectReference&& value) { SetParentReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The child object reference to be attached to the object.</p>
     */
    inline const ObjectReference& GetChildReference() const{ return m_childReference; }
    inline bool ChildReferenceHasBeenSet() const { return m_childReferenceHasBeenSet; }
    inline void SetChildReference(const ObjectReference& value) { m_childReferenceHasBeenSet = true; m_childReference = value; }
    inline void SetChildReference(ObjectReference&& value) { m_childReferenceHasBeenSet = true; m_childReference = std::move(value); }
    inline AttachObjectRequest& WithChildReference(const ObjectReference& value) { SetChildReference(value); return *this;}
    inline AttachObjectRequest& WithChildReference(ObjectReference&& value) { SetChildReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The link name with which the child object is attached to the parent.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }
    inline AttachObjectRequest& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}
    inline AttachObjectRequest& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}
    inline AttachObjectRequest& WithLinkName(const char* value) { SetLinkName(value); return *this;}
    ///@}
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
