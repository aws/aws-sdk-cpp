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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/MsSmoothAudioDeduplication.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/MsSmoothEncryptionSettings.h>
#include <aws/mediaconvert/model/MsSmoothManifestEncoding.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
   * MS_SMOOTH_GROUP_SETTINGS.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MsSmoothGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API MsSmoothGroupSettings
  {
  public:
    MsSmoothGroupSettings();
    MsSmoothGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    MsSmoothGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const MsSmoothAudioDeduplication& GetAudioDeduplication() const{ return m_audioDeduplication; }

    
    inline void SetAudioDeduplication(const MsSmoothAudioDeduplication& value) { m_audioDeduplicationHasBeenSet = true; m_audioDeduplication = value; }

    
    inline void SetAudioDeduplication(MsSmoothAudioDeduplication&& value) { m_audioDeduplicationHasBeenSet = true; m_audioDeduplication = std::move(value); }

    
    inline MsSmoothGroupSettings& WithAudioDeduplication(const MsSmoothAudioDeduplication& value) { SetAudioDeduplication(value); return *this;}

    
    inline MsSmoothGroupSettings& WithAudioDeduplication(MsSmoothAudioDeduplication&& value) { SetAudioDeduplication(std::move(value)); return *this;}


    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline MsSmoothGroupSettings& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline MsSmoothGroupSettings& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline MsSmoothGroupSettings& WithDestination(const char* value) { SetDestination(value); return *this;}


    
    inline const MsSmoothEncryptionSettings& GetEncryption() const{ return m_encryption; }

    
    inline void SetEncryption(const MsSmoothEncryptionSettings& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    
    inline void SetEncryption(MsSmoothEncryptionSettings&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    
    inline MsSmoothGroupSettings& WithEncryption(const MsSmoothEncryptionSettings& value) { SetEncryption(value); return *this;}

    
    inline MsSmoothGroupSettings& WithEncryption(MsSmoothEncryptionSettings&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * Use Fragment length (FragmentLength) to specify the mp4 fragment sizes in
     * seconds. Fragment length must be compatible with GOP size and frame rate.
     */
    inline int GetFragmentLength() const{ return m_fragmentLength; }

    /**
     * Use Fragment length (FragmentLength) to specify the mp4 fragment sizes in
     * seconds. Fragment length must be compatible with GOP size and frame rate.
     */
    inline void SetFragmentLength(int value) { m_fragmentLengthHasBeenSet = true; m_fragmentLength = value; }

    /**
     * Use Fragment length (FragmentLength) to specify the mp4 fragment sizes in
     * seconds. Fragment length must be compatible with GOP size and frame rate.
     */
    inline MsSmoothGroupSettings& WithFragmentLength(int value) { SetFragmentLength(value); return *this;}


    
    inline const MsSmoothManifestEncoding& GetManifestEncoding() const{ return m_manifestEncoding; }

    
    inline void SetManifestEncoding(const MsSmoothManifestEncoding& value) { m_manifestEncodingHasBeenSet = true; m_manifestEncoding = value; }

    
    inline void SetManifestEncoding(MsSmoothManifestEncoding&& value) { m_manifestEncodingHasBeenSet = true; m_manifestEncoding = std::move(value); }

    
    inline MsSmoothGroupSettings& WithManifestEncoding(const MsSmoothManifestEncoding& value) { SetManifestEncoding(value); return *this;}

    
    inline MsSmoothGroupSettings& WithManifestEncoding(MsSmoothManifestEncoding&& value) { SetManifestEncoding(std::move(value)); return *this;}

  private:

    MsSmoothAudioDeduplication m_audioDeduplication;
    bool m_audioDeduplicationHasBeenSet;

    Aws::String m_destination;
    bool m_destinationHasBeenSet;

    MsSmoothEncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet;

    int m_fragmentLength;
    bool m_fragmentLengthHasBeenSet;

    MsSmoothManifestEncoding m_manifestEncoding;
    bool m_manifestEncodingHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
