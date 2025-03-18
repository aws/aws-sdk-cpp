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
    AWS_APPSTREAM_API CreateUpdatedImageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUpdatedImage"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the image to update.</p>
     */
    inline const Aws::String& GetExistingImageName() const { return m_existingImageName; }
    inline bool ExistingImageNameHasBeenSet() const { return m_existingImageNameHasBeenSet; }
    template<typename ExistingImageNameT = Aws::String>
    void SetExistingImageName(ExistingImageNameT&& value) { m_existingImageNameHasBeenSet = true; m_existingImageName = std::forward<ExistingImageNameT>(value); }
    template<typename ExistingImageNameT = Aws::String>
    CreateUpdatedImageRequest& WithExistingImageName(ExistingImageNameT&& value) { SetExistingImageName(std::forward<ExistingImageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new image. The name must be unique within the AWS account and
     * Region.</p>
     */
    inline const Aws::String& GetNewImageName() const { return m_newImageName; }
    inline bool NewImageNameHasBeenSet() const { return m_newImageNameHasBeenSet; }
    template<typename NewImageNameT = Aws::String>
    void SetNewImageName(NewImageNameT&& value) { m_newImageNameHasBeenSet = true; m_newImageName = std::forward<NewImageNameT>(value); }
    template<typename NewImageNameT = Aws::String>
    CreateUpdatedImageRequest& WithNewImageName(NewImageNameT&& value) { SetNewImageName(std::forward<NewImageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to display for the new image.</p>
     */
    inline const Aws::String& GetNewImageDescription() const { return m_newImageDescription; }
    inline bool NewImageDescriptionHasBeenSet() const { return m_newImageDescriptionHasBeenSet; }
    template<typename NewImageDescriptionT = Aws::String>
    void SetNewImageDescription(NewImageDescriptionT&& value) { m_newImageDescriptionHasBeenSet = true; m_newImageDescription = std::forward<NewImageDescriptionT>(value); }
    template<typename NewImageDescriptionT = Aws::String>
    CreateUpdatedImageRequest& WithNewImageDescription(NewImageDescriptionT&& value) { SetNewImageDescription(std::forward<NewImageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to display for the new image.</p>
     */
    inline const Aws::String& GetNewImageDisplayName() const { return m_newImageDisplayName; }
    inline bool NewImageDisplayNameHasBeenSet() const { return m_newImageDisplayNameHasBeenSet; }
    template<typename NewImageDisplayNameT = Aws::String>
    void SetNewImageDisplayName(NewImageDisplayNameT&& value) { m_newImageDisplayNameHasBeenSet = true; m_newImageDisplayName = std::forward<NewImageDisplayNameT>(value); }
    template<typename NewImageDisplayNameT = Aws::String>
    CreateUpdatedImageRequest& WithNewImageDisplayName(NewImageDisplayNameT&& value) { SetNewImageDisplayName(std::forward<NewImageDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Map<Aws::String, Aws::String>& GetNewImageTags() const { return m_newImageTags; }
    inline bool NewImageTagsHasBeenSet() const { return m_newImageTagsHasBeenSet; }
    template<typename NewImageTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetNewImageTags(NewImageTagsT&& value) { m_newImageTagsHasBeenSet = true; m_newImageTags = std::forward<NewImageTagsT>(value); }
    template<typename NewImageTagsT = Aws::Map<Aws::String, Aws::String>>
    CreateUpdatedImageRequest& WithNewImageTags(NewImageTagsT&& value) { SetNewImageTags(std::forward<NewImageTagsT>(value)); return *this;}
    template<typename NewImageTagsKeyT = Aws::String, typename NewImageTagsValueT = Aws::String>
    CreateUpdatedImageRequest& AddNewImageTags(NewImageTagsKeyT&& key, NewImageTagsValueT&& value) {
      m_newImageTagsHasBeenSet = true; m_newImageTags.emplace(std::forward<NewImageTagsKeyT>(key), std::forward<NewImageTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to display the status of image update availability before
     * AppStream 2.0 initiates the process of creating a new updated image. If this
     * value is set to <code>true</code>, AppStream 2.0 displays whether image updates
     * are available. If this value is set to <code>false</code>, AppStream 2.0
     * initiates the process of creating a new updated image without displaying whether
     * image updates are available.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateUpdatedImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
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

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
