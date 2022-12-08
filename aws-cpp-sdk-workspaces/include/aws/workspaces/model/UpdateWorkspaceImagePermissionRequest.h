/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class UpdateWorkspaceImagePermissionRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API UpdateWorkspaceImagePermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkspaceImagePermission"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The identifier of the image.</p>
     */
    inline UpdateWorkspaceImagePermissionRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline UpdateWorkspaceImagePermissionRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline UpdateWorkspaceImagePermissionRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The permission to copy the image. This permission can be revoked only after
     * an image has been shared.</p>
     */
    inline bool GetAllowCopyImage() const{ return m_allowCopyImage; }

    /**
     * <p>The permission to copy the image. This permission can be revoked only after
     * an image has been shared.</p>
     */
    inline bool AllowCopyImageHasBeenSet() const { return m_allowCopyImageHasBeenSet; }

    /**
     * <p>The permission to copy the image. This permission can be revoked only after
     * an image has been shared.</p>
     */
    inline void SetAllowCopyImage(bool value) { m_allowCopyImageHasBeenSet = true; m_allowCopyImage = value; }

    /**
     * <p>The permission to copy the image. This permission can be revoked only after
     * an image has been shared.</p>
     */
    inline UpdateWorkspaceImagePermissionRequest& WithAllowCopyImage(bool value) { SetAllowCopyImage(value); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services account to share or unshare the
     * image with.</p>  <p>Before sharing the image, confirm that you are
     * sharing to the correct Amazon Web Services account ID.</p> 
     */
    inline const Aws::String& GetSharedAccountId() const{ return m_sharedAccountId; }

    /**
     * <p>The identifier of the Amazon Web Services account to share or unshare the
     * image with.</p>  <p>Before sharing the image, confirm that you are
     * sharing to the correct Amazon Web Services account ID.</p> 
     */
    inline bool SharedAccountIdHasBeenSet() const { return m_sharedAccountIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services account to share or unshare the
     * image with.</p>  <p>Before sharing the image, confirm that you are
     * sharing to the correct Amazon Web Services account ID.</p> 
     */
    inline void SetSharedAccountId(const Aws::String& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = value; }

    /**
     * <p>The identifier of the Amazon Web Services account to share or unshare the
     * image with.</p>  <p>Before sharing the image, confirm that you are
     * sharing to the correct Amazon Web Services account ID.</p> 
     */
    inline void SetSharedAccountId(Aws::String&& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services account to share or unshare the
     * image with.</p>  <p>Before sharing the image, confirm that you are
     * sharing to the correct Amazon Web Services account ID.</p> 
     */
    inline void SetSharedAccountId(const char* value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services account to share or unshare the
     * image with.</p>  <p>Before sharing the image, confirm that you are
     * sharing to the correct Amazon Web Services account ID.</p> 
     */
    inline UpdateWorkspaceImagePermissionRequest& WithSharedAccountId(const Aws::String& value) { SetSharedAccountId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account to share or unshare the
     * image with.</p>  <p>Before sharing the image, confirm that you are
     * sharing to the correct Amazon Web Services account ID.</p> 
     */
    inline UpdateWorkspaceImagePermissionRequest& WithSharedAccountId(Aws::String&& value) { SetSharedAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account to share or unshare the
     * image with.</p>  <p>Before sharing the image, confirm that you are
     * sharing to the correct Amazon Web Services account ID.</p> 
     */
    inline UpdateWorkspaceImagePermissionRequest& WithSharedAccountId(const char* value) { SetSharedAccountId(value); return *this;}

  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    bool m_allowCopyImage;
    bool m_allowCopyImageHasBeenSet = false;

    Aws::String m_sharedAccountId;
    bool m_sharedAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
