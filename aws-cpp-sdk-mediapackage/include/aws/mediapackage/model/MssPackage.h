/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/MssEncryption.h>
#include <aws/mediapackage/model/StreamSelection.h>
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
   * A Microsoft Smooth Streaming (MSS) packaging configuration.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/MssPackage">AWS
   * API Reference</a></p>
   */
  class MssPackage
  {
  public:
    AWS_MEDIAPACKAGE_API MssPackage();
    AWS_MEDIAPACKAGE_API MssPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API MssPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const MssEncryption& GetEncryption() const{ return m_encryption; }

    
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    
    inline void SetEncryption(const MssEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    
    inline void SetEncryption(MssEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    
    inline MssPackage& WithEncryption(const MssEncryption& value) { SetEncryption(value); return *this;}

    
    inline MssPackage& WithEncryption(MssEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * The time window (in seconds) contained in each manifest.
     */
    inline int GetManifestWindowSeconds() const{ return m_manifestWindowSeconds; }

    /**
     * The time window (in seconds) contained in each manifest.
     */
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }

    /**
     * The time window (in seconds) contained in each manifest.
     */
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }

    /**
     * The time window (in seconds) contained in each manifest.
     */
    inline MssPackage& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}


    /**
     * The duration (in seconds) of each segment.
     */
    inline int GetSegmentDurationSeconds() const{ return m_segmentDurationSeconds; }

    /**
     * The duration (in seconds) of each segment.
     */
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }

    /**
     * The duration (in seconds) of each segment.
     */
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }

    /**
     * The duration (in seconds) of each segment.
     */
    inline MssPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}


    
    inline const StreamSelection& GetStreamSelection() const{ return m_streamSelection; }

    
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }

    
    inline void SetStreamSelection(const StreamSelection& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = value; }

    
    inline void SetStreamSelection(StreamSelection&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::move(value); }

    
    inline MssPackage& WithStreamSelection(const StreamSelection& value) { SetStreamSelection(value); return *this;}

    
    inline MssPackage& WithStreamSelection(StreamSelection&& value) { SetStreamSelection(std::move(value)); return *this;}

  private:

    MssEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    int m_manifestWindowSeconds;
    bool m_manifestWindowSecondsHasBeenSet = false;

    int m_segmentDurationSeconds;
    bool m_segmentDurationSecondsHasBeenSet = false;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
