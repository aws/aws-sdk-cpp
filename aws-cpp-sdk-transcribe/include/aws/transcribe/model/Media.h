/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
     * <p>The S3 location of the input media file. The URI must be in the same region
     * as the API endpoint that you are calling. The general form is:</p> <p> <code>
     * https://s3-&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/example.mp4</code> </p>
     * <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/mediadocs/example.mp4</code>
     * </p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetMediaFileUri() const{ return m_mediaFileUri; }

    /**
     * <p>The S3 location of the input media file. The URI must be in the same region
     * as the API endpoint that you are calling. The general form is:</p> <p> <code>
     * https://s3-&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/example.mp4</code> </p>
     * <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/mediadocs/example.mp4</code>
     * </p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline bool MediaFileUriHasBeenSet() const { return m_mediaFileUriHasBeenSet; }

    /**
     * <p>The S3 location of the input media file. The URI must be in the same region
     * as the API endpoint that you are calling. The general form is:</p> <p> <code>
     * https://s3-&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/example.mp4</code> </p>
     * <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/mediadocs/example.mp4</code>
     * </p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline void SetMediaFileUri(const Aws::String& value) { m_mediaFileUriHasBeenSet = true; m_mediaFileUri = value; }

    /**
     * <p>The S3 location of the input media file. The URI must be in the same region
     * as the API endpoint that you are calling. The general form is:</p> <p> <code>
     * https://s3-&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/example.mp4</code> </p>
     * <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/mediadocs/example.mp4</code>
     * </p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline void SetMediaFileUri(Aws::String&& value) { m_mediaFileUriHasBeenSet = true; m_mediaFileUri = std::move(value); }

    /**
     * <p>The S3 location of the input media file. The URI must be in the same region
     * as the API endpoint that you are calling. The general form is:</p> <p> <code>
     * https://s3-&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/example.mp4</code> </p>
     * <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/mediadocs/example.mp4</code>
     * </p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline void SetMediaFileUri(const char* value) { m_mediaFileUriHasBeenSet = true; m_mediaFileUri.assign(value); }

    /**
     * <p>The S3 location of the input media file. The URI must be in the same region
     * as the API endpoint that you are calling. The general form is:</p> <p> <code>
     * https://s3-&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/example.mp4</code> </p>
     * <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/mediadocs/example.mp4</code>
     * </p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline Media& WithMediaFileUri(const Aws::String& value) { SetMediaFileUri(value); return *this;}

    /**
     * <p>The S3 location of the input media file. The URI must be in the same region
     * as the API endpoint that you are calling. The general form is:</p> <p> <code>
     * https://s3-&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/example.mp4</code> </p>
     * <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/mediadocs/example.mp4</code>
     * </p> <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline Media& WithMediaFileUri(Aws::String&& value) { SetMediaFileUri(std::move(value)); return *this;}

    /**
     * <p>The S3 location of the input media file. The URI must be in the same region
     * as the API endpoint that you are calling. The general form is:</p> <p> <code>
     * https://s3-&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/example.mp4</code> </p>
     * <p>
     * <code>https://s3-us-east-1.amazonaws.com/examplebucket/mediadocs/example.mp4</code>
     * </p> <p>For more information about S3 object names, see <a
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
