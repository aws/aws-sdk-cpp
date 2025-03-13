/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/StorageAccessLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the configuration for the file uploader field.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FileUploaderFieldConfig">AWS
   * API Reference</a></p>
   */
  class FileUploaderFieldConfig
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FileUploaderFieldConfig() = default;
    AWS_AMPLIFYUIBUILDER_API FileUploaderFieldConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FileUploaderFieldConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access level to assign to the uploaded files in the Amazon S3 bucket
     * where they are stored. The valid values for this property are
     * <code>private</code>, <code>protected</code>, or <code>public</code>. For
     * detailed information about the permissions associated with each access level,
     * see <a
     * href="https://docs.amplify.aws/lib/storage/configureaccess/q/platform/js/">File
     * access levels</a> in the <i>Amplify documentation</i>.</p>
     */
    inline StorageAccessLevel GetAccessLevel() const { return m_accessLevel; }
    inline bool AccessLevelHasBeenSet() const { return m_accessLevelHasBeenSet; }
    inline void SetAccessLevel(StorageAccessLevel value) { m_accessLevelHasBeenSet = true; m_accessLevel = value; }
    inline FileUploaderFieldConfig& WithAccessLevel(StorageAccessLevel value) { SetAccessLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file types that are allowed to be uploaded by the file uploader. Provide
     * this information in an array of strings specifying the valid file
     * extensions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceptedFileTypes() const { return m_acceptedFileTypes; }
    inline bool AcceptedFileTypesHasBeenSet() const { return m_acceptedFileTypesHasBeenSet; }
    template<typename AcceptedFileTypesT = Aws::Vector<Aws::String>>
    void SetAcceptedFileTypes(AcceptedFileTypesT&& value) { m_acceptedFileTypesHasBeenSet = true; m_acceptedFileTypes = std::forward<AcceptedFileTypesT>(value); }
    template<typename AcceptedFileTypesT = Aws::Vector<Aws::String>>
    FileUploaderFieldConfig& WithAcceptedFileTypes(AcceptedFileTypesT&& value) { SetAcceptedFileTypes(std::forward<AcceptedFileTypesT>(value)); return *this;}
    template<typename AcceptedFileTypesT = Aws::String>
    FileUploaderFieldConfig& AddAcceptedFileTypes(AcceptedFileTypesT&& value) { m_acceptedFileTypesHasBeenSet = true; m_acceptedFileTypes.emplace_back(std::forward<AcceptedFileTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to display or hide the image preview after selecting a file
     * for upload. The default value is <code>true</code> to display the image
     * preview.</p>
     */
    inline bool GetShowThumbnails() const { return m_showThumbnails; }
    inline bool ShowThumbnailsHasBeenSet() const { return m_showThumbnailsHasBeenSet; }
    inline void SetShowThumbnails(bool value) { m_showThumbnailsHasBeenSet = true; m_showThumbnails = value; }
    inline FileUploaderFieldConfig& WithShowThumbnails(bool value) { SetShowThumbnails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows the file upload operation to be paused and resumed. The default value
     * is <code>false</code>.</p> <p>When <code>isResumable</code> is set to
     * <code>true</code>, the file uploader uses a multipart upload to break the files
     * into chunks before upload. The progress of the upload isn't continuous, because
     * the file uploader uploads a chunk at a time.</p>
     */
    inline bool GetIsResumable() const { return m_isResumable; }
    inline bool IsResumableHasBeenSet() const { return m_isResumableHasBeenSet; }
    inline void SetIsResumable(bool value) { m_isResumableHasBeenSet = true; m_isResumable = value; }
    inline FileUploaderFieldConfig& WithIsResumable(bool value) { SetIsResumable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of files that can be selected to upload. The
     * default value is an unlimited number of files.</p>
     */
    inline int GetMaxFileCount() const { return m_maxFileCount; }
    inline bool MaxFileCountHasBeenSet() const { return m_maxFileCountHasBeenSet; }
    inline void SetMaxFileCount(int value) { m_maxFileCountHasBeenSet = true; m_maxFileCount = value; }
    inline FileUploaderFieldConfig& WithMaxFileCount(int value) { SetMaxFileCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum file size in bytes that the file uploader will accept. The
     * default value is an unlimited file size.</p>
     */
    inline int GetMaxSize() const { return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }
    inline FileUploaderFieldConfig& WithMaxSize(int value) { SetMaxSize(value); return *this;}
    ///@}
  private:

    StorageAccessLevel m_accessLevel{StorageAccessLevel::NOT_SET};
    bool m_accessLevelHasBeenSet = false;

    Aws::Vector<Aws::String> m_acceptedFileTypes;
    bool m_acceptedFileTypesHasBeenSet = false;

    bool m_showThumbnails{false};
    bool m_showThumbnailsHasBeenSet = false;

    bool m_isResumable{false};
    bool m_isResumableHasBeenSet = false;

    int m_maxFileCount{0};
    bool m_maxFileCountHasBeenSet = false;

    int m_maxSize{0};
    bool m_maxSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
