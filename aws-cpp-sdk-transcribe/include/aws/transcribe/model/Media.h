/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Describes the input media file in a transcription request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Media">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API Media
  {
  public:
    Media();
    Media(Aws::Utils::Json::JsonView jsonValue);
    Media& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 object location of the input media file. The URI must be in the same
     * region as the API endpoint that you are calling. The general form is:</p> <p>For
     * example:</p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetMediaFileUri() const{ return m_mediaFileUri; }

    /**
     * <p>The S3 object location of the input media file. The URI must be in the same
     * region as the API endpoint that you are calling. The general form is:</p> <p>For
     * example:</p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline bool MediaFileUriHasBeenSet() const { return m_mediaFileUriHasBeenSet; }

    /**
     * <p>The S3 object location of the input media file. The URI must be in the same
     * region as the API endpoint that you are calling. The general form is:</p> <p>For
     * example:</p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline void SetMediaFileUri(const Aws::String& value) { m_mediaFileUriHasBeenSet = true; m_mediaFileUri = value; }

    /**
     * <p>The S3 object location of the input media file. The URI must be in the same
     * region as the API endpoint that you are calling. The general form is:</p> <p>For
     * example:</p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline void SetMediaFileUri(Aws::String&& value) { m_mediaFileUriHasBeenSet = true; m_mediaFileUri = std::move(value); }

    /**
     * <p>The S3 object location of the input media file. The URI must be in the same
     * region as the API endpoint that you are calling. The general form is:</p> <p>For
     * example:</p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline void SetMediaFileUri(const char* value) { m_mediaFileUriHasBeenSet = true; m_mediaFileUri.assign(value); }

    /**
     * <p>The S3 object location of the input media file. The URI must be in the same
     * region as the API endpoint that you are calling. The general form is:</p> <p>For
     * example:</p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline Media& WithMediaFileUri(const Aws::String& value) { SetMediaFileUri(value); return *this;}

    /**
     * <p>The S3 object location of the input media file. The URI must be in the same
     * region as the API endpoint that you are calling. The general form is:</p> <p>For
     * example:</p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline Media& WithMediaFileUri(Aws::String&& value) { SetMediaFileUri(std::move(value)); return *this;}

    /**
     * <p>The S3 object location of the input media file. The URI must be in the same
     * region as the API endpoint that you are calling. The general form is:</p> <p>For
     * example:</p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline Media& WithMediaFileUri(const char* value) { SetMediaFileUri(value); return *this;}

  private:

    Aws::String m_mediaFileUri;
    bool m_mediaFileUriHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
