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
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/CmafEncryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/StreamSelection.h>
#include <aws/mediapackage/model/HlsManifestCreateOrUpdateParameters.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * A Common Media Application Format (CMAF) packaging configuration.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/CmafPackageCreateOrUpdateParameters">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGE_API CmafPackageCreateOrUpdateParameters
  {
  public:
    CmafPackageCreateOrUpdateParameters();
    CmafPackageCreateOrUpdateParameters(Aws::Utils::Json::JsonView jsonValue);
    CmafPackageCreateOrUpdateParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const CmafEncryption& GetEncryption() const{ return m_encryption; }

    
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    
    inline void SetEncryption(const CmafEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    
    inline void SetEncryption(CmafEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    
    inline CmafPackageCreateOrUpdateParameters& WithEncryption(const CmafEncryption& value) { SetEncryption(value); return *this;}

    
    inline CmafPackageCreateOrUpdateParameters& WithEncryption(CmafEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * A list of HLS manifest configurations
     */
    inline const Aws::Vector<HlsManifestCreateOrUpdateParameters>& GetHlsManifests() const{ return m_hlsManifests; }

    /**
     * A list of HLS manifest configurations
     */
    inline bool HlsManifestsHasBeenSet() const { return m_hlsManifestsHasBeenSet; }

    /**
     * A list of HLS manifest configurations
     */
    inline void SetHlsManifests(const Aws::Vector<HlsManifestCreateOrUpdateParameters>& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = value; }

    /**
     * A list of HLS manifest configurations
     */
    inline void SetHlsManifests(Aws::Vector<HlsManifestCreateOrUpdateParameters>&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = std::move(value); }

    /**
     * A list of HLS manifest configurations
     */
    inline CmafPackageCreateOrUpdateParameters& WithHlsManifests(const Aws::Vector<HlsManifestCreateOrUpdateParameters>& value) { SetHlsManifests(value); return *this;}

    /**
     * A list of HLS manifest configurations
     */
    inline CmafPackageCreateOrUpdateParameters& WithHlsManifests(Aws::Vector<HlsManifestCreateOrUpdateParameters>&& value) { SetHlsManifests(std::move(value)); return *this;}

    /**
     * A list of HLS manifest configurations
     */
    inline CmafPackageCreateOrUpdateParameters& AddHlsManifests(const HlsManifestCreateOrUpdateParameters& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(value); return *this; }

    /**
     * A list of HLS manifest configurations
     */
    inline CmafPackageCreateOrUpdateParameters& AddHlsManifests(HlsManifestCreateOrUpdateParameters&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(std::move(value)); return *this; }


    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline int GetSegmentDurationSeconds() const{ return m_segmentDurationSeconds; }

    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }

    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }

    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline CmafPackageCreateOrUpdateParameters& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}


    /**
     * An optional custom string that is prepended to the name of each segment. If not
     * specified, it defaults to the ChannelId.
     */
    inline const Aws::String& GetSegmentPrefix() const{ return m_segmentPrefix; }

    /**
     * An optional custom string that is prepended to the name of each segment. If not
     * specified, it defaults to the ChannelId.
     */
    inline bool SegmentPrefixHasBeenSet() const { return m_segmentPrefixHasBeenSet; }

    /**
     * An optional custom string that is prepended to the name of each segment. If not
     * specified, it defaults to the ChannelId.
     */
    inline void SetSegmentPrefix(const Aws::String& value) { m_segmentPrefixHasBeenSet = true; m_segmentPrefix = value; }

    /**
     * An optional custom string that is prepended to the name of each segment. If not
     * specified, it defaults to the ChannelId.
     */
    inline void SetSegmentPrefix(Aws::String&& value) { m_segmentPrefixHasBeenSet = true; m_segmentPrefix = std::move(value); }

    /**
     * An optional custom string that is prepended to the name of each segment. If not
     * specified, it defaults to the ChannelId.
     */
    inline void SetSegmentPrefix(const char* value) { m_segmentPrefixHasBeenSet = true; m_segmentPrefix.assign(value); }

    /**
     * An optional custom string that is prepended to the name of each segment. If not
     * specified, it defaults to the ChannelId.
     */
    inline CmafPackageCreateOrUpdateParameters& WithSegmentPrefix(const Aws::String& value) { SetSegmentPrefix(value); return *this;}

    /**
     * An optional custom string that is prepended to the name of each segment. If not
     * specified, it defaults to the ChannelId.
     */
    inline CmafPackageCreateOrUpdateParameters& WithSegmentPrefix(Aws::String&& value) { SetSegmentPrefix(std::move(value)); return *this;}

    /**
     * An optional custom string that is prepended to the name of each segment. If not
     * specified, it defaults to the ChannelId.
     */
    inline CmafPackageCreateOrUpdateParameters& WithSegmentPrefix(const char* value) { SetSegmentPrefix(value); return *this;}


    
    inline const StreamSelection& GetStreamSelection() const{ return m_streamSelection; }

    
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }

    
    inline void SetStreamSelection(const StreamSelection& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = value; }

    
    inline void SetStreamSelection(StreamSelection&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::move(value); }

    
    inline CmafPackageCreateOrUpdateParameters& WithStreamSelection(const StreamSelection& value) { SetStreamSelection(value); return *this;}

    
    inline CmafPackageCreateOrUpdateParameters& WithStreamSelection(StreamSelection&& value) { SetStreamSelection(std::move(value)); return *this;}

  private:

    CmafEncryption m_encryption;
    bool m_encryptionHasBeenSet;

    Aws::Vector<HlsManifestCreateOrUpdateParameters> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet;

    int m_segmentDurationSeconds;
    bool m_segmentDurationSecondsHasBeenSet;

    Aws::String m_segmentPrefix;
    bool m_segmentPrefixHasBeenSet;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
