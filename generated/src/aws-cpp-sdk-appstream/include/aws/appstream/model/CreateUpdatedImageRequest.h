/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class CreateUpdatedImageRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API CreateUpdatedImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUpdatedImage"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the image to update.</p>
     */
    inline const Aws::String& GetExistingImageName() const{ return m_existingImageName; }

    /**
     * <p>The name of the image to update.</p>
     */
    inline bool ExistingImageNameHasBeenSet() const { return m_existingImageNameHasBeenSet; }

    /**
     * <p>The name of the image to update.</p>
     */
    inline void SetExistingImageName(const Aws::String& value) { m_existingImageNameHasBeenSet = true; m_existingImageName = value; }

    /**
     * <p>The name of the image to update.</p>
     */
    inline void SetExistingImageName(Aws::String&& value) { m_existingImageNameHasBeenSet = true; m_existingImageName = std::move(value); }

    /**
     * <p>The name of the image to update.</p>
     */
    inline void SetExistingImageName(const char* value) { m_existingImageNameHasBeenSet = true; m_existingImageName.assign(value); }

    /**
     * <p>The name of the image to update.</p>
     */
    inline CreateUpdatedImageRequest& WithExistingImageName(const Aws::String& value) { SetExistingImageName(value); return *this;}

    /**
     * <p>The name of the image to update.</p>
     */
    inline CreateUpdatedImageRequest& WithExistingImageName(Aws::String&& value) { SetExistingImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the image to update.</p>
     */
    inline CreateUpdatedImageRequest& WithExistingImageName(const char* value) { SetExistingImageName(value); return *this;}


    /**
     * <p>The name of the new image. The name must be unique within the AWS account and
     * Region.</p>
     */
    inline const Aws::String& GetNewImageName() const{ return m_newImageName; }

    /**
     * <p>The name of the new image. The name must be unique within the AWS account and
     * Region.</p>
     */
    inline bool NewImageNameHasBeenSet() const { return m_newImageNameHasBeenSet; }

    /**
     * <p>The name of the new image. The name must be unique within the AWS account and
     * Region.</p>
     */
    inline void SetNewImageName(const Aws::String& value) { m_newImageNameHasBeenSet = true; m_newImageName = value; }

    /**
     * <p>The name of the new image. The name must be unique within the AWS account and
     * Region.</p>
     */
    inline void SetNewImageName(Aws::String&& value) { m_newImageNameHasBeenSet = true; m_newImageName = std::move(value); }

    /**
     * <p>The name of the new image. The name must be unique within the AWS account and
     * Region.</p>
     */
    inline void SetNewImageName(const char* value) { m_newImageNameHasBeenSet = true; m_newImageName.assign(value); }

    /**
     * <p>The name of the new image. The name must be unique within the AWS account and
     * Region.</p>
     */
    inline CreateUpdatedImageRequest& WithNewImageName(const Aws::String& value) { SetNewImageName(value); return *this;}

    /**
     * <p>The name of the new image. The name must be unique within the AWS account and
     * Region.</p>
     */
    inline CreateUpdatedImageRequest& WithNewImageName(Aws::String&& value) { SetNewImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the new image. The name must be unique within the AWS account and
     * Region.</p>
     */
    inline CreateUpdatedImageRequest& WithNewImageName(const char* value) { SetNewImageName(value); return *this;}


    /**
     * <p>The description to display for the new image.</p>
     */
    inline const Aws::String& GetNewImageDescription() const{ return m_newImageDescription; }

    /**
     * <p>The description to display for the new image.</p>
     */
    inline bool NewImageDescriptionHasBeenSet() const { return m_newImageDescriptionHasBeenSet; }

    /**
     * <p>The description to display for the new image.</p>
     */
    inline void SetNewImageDescription(const Aws::String& value) { m_newImageDescriptionHasBeenSet = true; m_newImageDescription = value; }

    /**
     * <p>The description to display for the new image.</p>
     */
    inline void SetNewImageDescription(Aws::String&& value) { m_newImageDescriptionHasBeenSet = true; m_newImageDescription = std::move(value); }

    /**
     * <p>The description to display for the new image.</p>
     */
    inline void SetNewImageDescription(const char* value) { m_newImageDescriptionHasBeenSet = true; m_newImageDescription.assign(value); }

    /**
     * <p>The description to display for the new image.</p>
     */
    inline CreateUpdatedImageRequest& WithNewImageDescription(const Aws::String& value) { SetNewImageDescription(value); return *this;}

    /**
     * <p>The description to display for the new image.</p>
     */
    inline CreateUpdatedImageRequest& WithNewImageDescription(Aws::String&& value) { SetNewImageDescription(std::move(value)); return *this;}

    /**
     * <p>The description to display for the new image.</p>
     */
    inline CreateUpdatedImageRequest& WithNewImageDescription(const char* value) { SetNewImageDescription(value); return *this;}


    /**
     * <p>The name to display for the new image.</p>
     */
    inline const Aws::String& GetNewImageDisplayName() const{ return m_newImageDisplayName; }

    /**
     * <p>The name to display for the new image.</p>
     */
    inline bool NewImageDisplayNameHasBeenSet() const { return m_newImageDisplayNameHasBeenSet; }

    /**
     * <p>The name to display for the new image.</p>
     */
    inline void SetNewImageDisplayName(const Aws::String& value) { m_newImageDisplayNameHasBeenSet = true; m_newImageDisplayName = value; }

    /**
     * <p>The name to display for the new image.</p>
     */
    inline void SetNewImageDisplayName(Aws::String&& value) { m_newImageDisplayNameHasBeenSet = true; m_newImageDisplayName = std::move(value); }

    /**
     * <p>The name to display for the new image.</p>
     */
    inline void SetNewImageDisplayName(const char* value) { m_newImageDisplayNameHasBeenSet = true; m_newImageDisplayName.assign(value); }

    /**
     * <p>The name to display for the new image.</p>
     */
    inline CreateUpdatedImageRequest& WithNewImageDisplayName(const Aws::String& value) { SetNewImageDisplayName(value); return *this;}

    /**
     * <p>The name to display for the new image.</p>
     */
    inline CreateUpdatedImageRequest& WithNewImageDisplayName(Aws::String&& value) { SetNewImageDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name to display for the new image.</p>
     */
    inline CreateUpdatedImageRequest& WithNewImageDisplayName(const char* value) { SetNewImageDisplayName(value); return *this;}


    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetNewImageTags() const{ return m_newImageTags; }

    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline bool NewImageTagsHasBeenSet() const { return m_newImageTagsHasBeenSet; }

    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline void SetNewImageTags(const Aws::Map<Aws::String, Aws::String>& value) { m_newImageTagsHasBeenSet = true; m_newImageTags = value; }

    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline void SetNewImageTags(Aws::Map<Aws::String, Aws::String>&& value) { m_newImageTagsHasBeenSet = true; m_newImageTags = std::move(value); }

    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline CreateUpdatedImageRequest& WithNewImageTags(const Aws::Map<Aws::String, Aws::String>& value) { SetNewImageTags(value); return *this;}

    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline CreateUpdatedImageRequest& WithNewImageTags(Aws::Map<Aws::String, Aws::String>&& value) { SetNewImageTags(std::move(value)); return *this;}

    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline CreateUpdatedImageRequest& AddNewImageTags(const Aws::String& key, const Aws::String& value) { m_newImageTagsHasBeenSet = true; m_newImageTags.emplace(key, value); return *this; }

    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline CreateUpdatedImageRequest& AddNewImageTags(Aws::String&& key, const Aws::String& value) { m_newImageTagsHasBeenSet = true; m_newImageTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline CreateUpdatedImageRequest& AddNewImageTags(const Aws::String& key, Aws::String&& value) { m_newImageTagsHasBeenSet = true; m_newImageTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline CreateUpdatedImageRequest& AddNewImageTags(Aws::String&& key, Aws::String&& value) { m_newImageTagsHasBeenSet = true; m_newImageTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline CreateUpdatedImageRequest& AddNewImageTags(const char* key, Aws::String&& value) { m_newImageTagsHasBeenSet = true; m_newImageTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline CreateUpdatedImageRequest& AddNewImageTags(Aws::String&& key, const char* value) { m_newImageTagsHasBeenSet = true; m_newImageTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to associate with the new image. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>If you do not specify a value, the value is set to an empty
     * string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline CreateUpdatedImageRequest& AddNewImageTags(const char* key, const char* value) { m_newImageTagsHasBeenSet = true; m_newImageTags.emplace(key, value); return *this; }


    /**
     * <p>Indicates whether to display the status of image update availability before
     * AppStream 2.0 initiates the process of creating a new updated image. If this
     * value is set to <code>true</code>, AppStream 2.0 displays whether image updates
     * are available. If this value is set to <code>false</code>, AppStream 2.0
     * initiates the process of creating a new updated image without displaying whether
     * image updates are available.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Indicates whether to display the status of image update availability before
     * AppStream 2.0 initiates the process of creating a new updated image. If this
     * value is set to <code>true</code>, AppStream 2.0 displays whether image updates
     * are available. If this value is set to <code>false</code>, AppStream 2.0
     * initiates the process of creating a new updated image without displaying whether
     * image updates are available.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Indicates whether to display the status of image update availability before
     * AppStream 2.0 initiates the process of creating a new updated image. If this
     * value is set to <code>true</code>, AppStream 2.0 displays whether image updates
     * are available. If this value is set to <code>false</code>, AppStream 2.0
     * initiates the process of creating a new updated image without displaying whether
     * image updates are available.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Indicates whether to display the status of image update availability before
     * AppStream 2.0 initiates the process of creating a new updated image. If this
     * value is set to <code>true</code>, AppStream 2.0 displays whether image updates
     * are available. If this value is set to <code>false</code>, AppStream 2.0
     * initiates the process of creating a new updated image without displaying whether
     * image updates are available.</p>
     */
    inline CreateUpdatedImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_existingImageName;
    bool m_existingImageNameHasBeenSet = false;

    Aws::String m_newImageName;
    bool m_newImageNameHasBeenSet = false;

    Aws::String m_newImageDescription;
    bool m_newImageDescriptionHasBeenSet = false;

    Aws::String m_newImageDisplayName;
    bool m_newImageDisplayNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_newImageTags;
    bool m_newImageTagsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
