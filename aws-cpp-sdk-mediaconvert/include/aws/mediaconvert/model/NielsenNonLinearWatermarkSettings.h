/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/NielsenActiveWatermarkProcessType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/NielsenSourceWatermarkStatusType.h>
#include <aws/mediaconvert/model/NielsenUniqueTicPerAudioTrackType.h>
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
   * Ignore these settings unless you are using Nielsen non-linear watermarking.
   * Specify the values that  MediaConvert uses to generate and place Nielsen
   * watermarks in your output audio. In addition to  specifying these values, you
   * also need to set up your cloud TIC server. These settings apply to  every output
   * in your job. The MediaConvert implementation is currently with the following
   * Nielsen versions: Nielsen Watermark SDK Version 5.2.1 Nielsen NLM Watermark
   * Engine Version 1.2.7 Nielsen Watermark Authenticator [SID_TIC] Version
   * [5.0.0]<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/NielsenNonLinearWatermarkSettings">AWS
   * API Reference</a></p>
   */
  class NielsenNonLinearWatermarkSettings
  {
  public:
    AWS_MEDIACONVERT_API NielsenNonLinearWatermarkSettings();
    AWS_MEDIACONVERT_API NielsenNonLinearWatermarkSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API NielsenNonLinearWatermarkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Choose the type of Nielsen watermarks that you want in your outputs. When you
     * choose NAES 2 and NW (NAES2_AND_NW), you must provide a value for the setting
     * SID (sourceId). When you choose CBET (CBET), you must provide a value for the
     * setting CSID (cbetSourceId). When you choose NAES 2, NW, and CBET
     * (NAES2_AND_NW_AND_CBET), you must provide values for both of these settings.
     */
    inline const NielsenActiveWatermarkProcessType& GetActiveWatermarkProcess() const{ return m_activeWatermarkProcess; }

    /**
     * Choose the type of Nielsen watermarks that you want in your outputs. When you
     * choose NAES 2 and NW (NAES2_AND_NW), you must provide a value for the setting
     * SID (sourceId). When you choose CBET (CBET), you must provide a value for the
     * setting CSID (cbetSourceId). When you choose NAES 2, NW, and CBET
     * (NAES2_AND_NW_AND_CBET), you must provide values for both of these settings.
     */
    inline bool ActiveWatermarkProcessHasBeenSet() const { return m_activeWatermarkProcessHasBeenSet; }

    /**
     * Choose the type of Nielsen watermarks that you want in your outputs. When you
     * choose NAES 2 and NW (NAES2_AND_NW), you must provide a value for the setting
     * SID (sourceId). When you choose CBET (CBET), you must provide a value for the
     * setting CSID (cbetSourceId). When you choose NAES 2, NW, and CBET
     * (NAES2_AND_NW_AND_CBET), you must provide values for both of these settings.
     */
    inline void SetActiveWatermarkProcess(const NielsenActiveWatermarkProcessType& value) { m_activeWatermarkProcessHasBeenSet = true; m_activeWatermarkProcess = value; }

    /**
     * Choose the type of Nielsen watermarks that you want in your outputs. When you
     * choose NAES 2 and NW (NAES2_AND_NW), you must provide a value for the setting
     * SID (sourceId). When you choose CBET (CBET), you must provide a value for the
     * setting CSID (cbetSourceId). When you choose NAES 2, NW, and CBET
     * (NAES2_AND_NW_AND_CBET), you must provide values for both of these settings.
     */
    inline void SetActiveWatermarkProcess(NielsenActiveWatermarkProcessType&& value) { m_activeWatermarkProcessHasBeenSet = true; m_activeWatermarkProcess = std::move(value); }

    /**
     * Choose the type of Nielsen watermarks that you want in your outputs. When you
     * choose NAES 2 and NW (NAES2_AND_NW), you must provide a value for the setting
     * SID (sourceId). When you choose CBET (CBET), you must provide a value for the
     * setting CSID (cbetSourceId). When you choose NAES 2, NW, and CBET
     * (NAES2_AND_NW_AND_CBET), you must provide values for both of these settings.
     */
    inline NielsenNonLinearWatermarkSettings& WithActiveWatermarkProcess(const NielsenActiveWatermarkProcessType& value) { SetActiveWatermarkProcess(value); return *this;}

    /**
     * Choose the type of Nielsen watermarks that you want in your outputs. When you
     * choose NAES 2 and NW (NAES2_AND_NW), you must provide a value for the setting
     * SID (sourceId). When you choose CBET (CBET), you must provide a value for the
     * setting CSID (cbetSourceId). When you choose NAES 2, NW, and CBET
     * (NAES2_AND_NW_AND_CBET), you must provide values for both of these settings.
     */
    inline NielsenNonLinearWatermarkSettings& WithActiveWatermarkProcess(NielsenActiveWatermarkProcessType&& value) { SetActiveWatermarkProcess(std::move(value)); return *this;}


    /**
     * Optional. Use this setting when you want the service to include an ADI file in
     * the Nielsen  metadata .zip file. To provide an ADI file, store it in Amazon S3
     * and provide a URL to it  here. The URL should be in the following format:
     * S3://bucket/path/ADI-file. For more information about the metadata .zip file,
     * see the setting Metadata destination (metadataDestination).
     */
    inline const Aws::String& GetAdiFilename() const{ return m_adiFilename; }

    /**
     * Optional. Use this setting when you want the service to include an ADI file in
     * the Nielsen  metadata .zip file. To provide an ADI file, store it in Amazon S3
     * and provide a URL to it  here. The URL should be in the following format:
     * S3://bucket/path/ADI-file. For more information about the metadata .zip file,
     * see the setting Metadata destination (metadataDestination).
     */
    inline bool AdiFilenameHasBeenSet() const { return m_adiFilenameHasBeenSet; }

    /**
     * Optional. Use this setting when you want the service to include an ADI file in
     * the Nielsen  metadata .zip file. To provide an ADI file, store it in Amazon S3
     * and provide a URL to it  here. The URL should be in the following format:
     * S3://bucket/path/ADI-file. For more information about the metadata .zip file,
     * see the setting Metadata destination (metadataDestination).
     */
    inline void SetAdiFilename(const Aws::String& value) { m_adiFilenameHasBeenSet = true; m_adiFilename = value; }

    /**
     * Optional. Use this setting when you want the service to include an ADI file in
     * the Nielsen  metadata .zip file. To provide an ADI file, store it in Amazon S3
     * and provide a URL to it  here. The URL should be in the following format:
     * S3://bucket/path/ADI-file. For more information about the metadata .zip file,
     * see the setting Metadata destination (metadataDestination).
     */
    inline void SetAdiFilename(Aws::String&& value) { m_adiFilenameHasBeenSet = true; m_adiFilename = std::move(value); }

    /**
     * Optional. Use this setting when you want the service to include an ADI file in
     * the Nielsen  metadata .zip file. To provide an ADI file, store it in Amazon S3
     * and provide a URL to it  here. The URL should be in the following format:
     * S3://bucket/path/ADI-file. For more information about the metadata .zip file,
     * see the setting Metadata destination (metadataDestination).
     */
    inline void SetAdiFilename(const char* value) { m_adiFilenameHasBeenSet = true; m_adiFilename.assign(value); }

    /**
     * Optional. Use this setting when you want the service to include an ADI file in
     * the Nielsen  metadata .zip file. To provide an ADI file, store it in Amazon S3
     * and provide a URL to it  here. The URL should be in the following format:
     * S3://bucket/path/ADI-file. For more information about the metadata .zip file,
     * see the setting Metadata destination (metadataDestination).
     */
    inline NielsenNonLinearWatermarkSettings& WithAdiFilename(const Aws::String& value) { SetAdiFilename(value); return *this;}

    /**
     * Optional. Use this setting when you want the service to include an ADI file in
     * the Nielsen  metadata .zip file. To provide an ADI file, store it in Amazon S3
     * and provide a URL to it  here. The URL should be in the following format:
     * S3://bucket/path/ADI-file. For more information about the metadata .zip file,
     * see the setting Metadata destination (metadataDestination).
     */
    inline NielsenNonLinearWatermarkSettings& WithAdiFilename(Aws::String&& value) { SetAdiFilename(std::move(value)); return *this;}

    /**
     * Optional. Use this setting when you want the service to include an ADI file in
     * the Nielsen  metadata .zip file. To provide an ADI file, store it in Amazon S3
     * and provide a URL to it  here. The URL should be in the following format:
     * S3://bucket/path/ADI-file. For more information about the metadata .zip file,
     * see the setting Metadata destination (metadataDestination).
     */
    inline NielsenNonLinearWatermarkSettings& WithAdiFilename(const char* value) { SetAdiFilename(value); return *this;}


    /**
     * Use the asset ID that you provide to Nielsen to uniquely identify this asset.
     * Required for all Nielsen non-linear watermarking.
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * Use the asset ID that you provide to Nielsen to uniquely identify this asset.
     * Required for all Nielsen non-linear watermarking.
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * Use the asset ID that you provide to Nielsen to uniquely identify this asset.
     * Required for all Nielsen non-linear watermarking.
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * Use the asset ID that you provide to Nielsen to uniquely identify this asset.
     * Required for all Nielsen non-linear watermarking.
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * Use the asset ID that you provide to Nielsen to uniquely identify this asset.
     * Required for all Nielsen non-linear watermarking.
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * Use the asset ID that you provide to Nielsen to uniquely identify this asset.
     * Required for all Nielsen non-linear watermarking.
     */
    inline NielsenNonLinearWatermarkSettings& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * Use the asset ID that you provide to Nielsen to uniquely identify this asset.
     * Required for all Nielsen non-linear watermarking.
     */
    inline NielsenNonLinearWatermarkSettings& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * Use the asset ID that you provide to Nielsen to uniquely identify this asset.
     * Required for all Nielsen non-linear watermarking.
     */
    inline NielsenNonLinearWatermarkSettings& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * Use the asset name that you provide to Nielsen for this asset. Required for all
     * Nielsen non-linear watermarking.
     */
    inline const Aws::String& GetAssetName() const{ return m_assetName; }

    /**
     * Use the asset name that you provide to Nielsen for this asset. Required for all
     * Nielsen non-linear watermarking.
     */
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }

    /**
     * Use the asset name that you provide to Nielsen for this asset. Required for all
     * Nielsen non-linear watermarking.
     */
    inline void SetAssetName(const Aws::String& value) { m_assetNameHasBeenSet = true; m_assetName = value; }

    /**
     * Use the asset name that you provide to Nielsen for this asset. Required for all
     * Nielsen non-linear watermarking.
     */
    inline void SetAssetName(Aws::String&& value) { m_assetNameHasBeenSet = true; m_assetName = std::move(value); }

    /**
     * Use the asset name that you provide to Nielsen for this asset. Required for all
     * Nielsen non-linear watermarking.
     */
    inline void SetAssetName(const char* value) { m_assetNameHasBeenSet = true; m_assetName.assign(value); }

    /**
     * Use the asset name that you provide to Nielsen for this asset. Required for all
     * Nielsen non-linear watermarking.
     */
    inline NielsenNonLinearWatermarkSettings& WithAssetName(const Aws::String& value) { SetAssetName(value); return *this;}

    /**
     * Use the asset name that you provide to Nielsen for this asset. Required for all
     * Nielsen non-linear watermarking.
     */
    inline NielsenNonLinearWatermarkSettings& WithAssetName(Aws::String&& value) { SetAssetName(std::move(value)); return *this;}

    /**
     * Use the asset name that you provide to Nielsen for this asset. Required for all
     * Nielsen non-linear watermarking.
     */
    inline NielsenNonLinearWatermarkSettings& WithAssetName(const char* value) { SetAssetName(value); return *this;}


    /**
     * Use the CSID that Nielsen provides to you. This CBET source ID should be unique
     * to your Nielsen account but common to all of your output assets that have CBET
     * watermarking. Required when you choose a value for the setting Watermark types
     * (ActiveWatermarkProcess) that includes CBET.
     */
    inline const Aws::String& GetCbetSourceId() const{ return m_cbetSourceId; }

    /**
     * Use the CSID that Nielsen provides to you. This CBET source ID should be unique
     * to your Nielsen account but common to all of your output assets that have CBET
     * watermarking. Required when you choose a value for the setting Watermark types
     * (ActiveWatermarkProcess) that includes CBET.
     */
    inline bool CbetSourceIdHasBeenSet() const { return m_cbetSourceIdHasBeenSet; }

    /**
     * Use the CSID that Nielsen provides to you. This CBET source ID should be unique
     * to your Nielsen account but common to all of your output assets that have CBET
     * watermarking. Required when you choose a value for the setting Watermark types
     * (ActiveWatermarkProcess) that includes CBET.
     */
    inline void SetCbetSourceId(const Aws::String& value) { m_cbetSourceIdHasBeenSet = true; m_cbetSourceId = value; }

    /**
     * Use the CSID that Nielsen provides to you. This CBET source ID should be unique
     * to your Nielsen account but common to all of your output assets that have CBET
     * watermarking. Required when you choose a value for the setting Watermark types
     * (ActiveWatermarkProcess) that includes CBET.
     */
    inline void SetCbetSourceId(Aws::String&& value) { m_cbetSourceIdHasBeenSet = true; m_cbetSourceId = std::move(value); }

    /**
     * Use the CSID that Nielsen provides to you. This CBET source ID should be unique
     * to your Nielsen account but common to all of your output assets that have CBET
     * watermarking. Required when you choose a value for the setting Watermark types
     * (ActiveWatermarkProcess) that includes CBET.
     */
    inline void SetCbetSourceId(const char* value) { m_cbetSourceIdHasBeenSet = true; m_cbetSourceId.assign(value); }

    /**
     * Use the CSID that Nielsen provides to you. This CBET source ID should be unique
     * to your Nielsen account but common to all of your output assets that have CBET
     * watermarking. Required when you choose a value for the setting Watermark types
     * (ActiveWatermarkProcess) that includes CBET.
     */
    inline NielsenNonLinearWatermarkSettings& WithCbetSourceId(const Aws::String& value) { SetCbetSourceId(value); return *this;}

    /**
     * Use the CSID that Nielsen provides to you. This CBET source ID should be unique
     * to your Nielsen account but common to all of your output assets that have CBET
     * watermarking. Required when you choose a value for the setting Watermark types
     * (ActiveWatermarkProcess) that includes CBET.
     */
    inline NielsenNonLinearWatermarkSettings& WithCbetSourceId(Aws::String&& value) { SetCbetSourceId(std::move(value)); return *this;}

    /**
     * Use the CSID that Nielsen provides to you. This CBET source ID should be unique
     * to your Nielsen account but common to all of your output assets that have CBET
     * watermarking. Required when you choose a value for the setting Watermark types
     * (ActiveWatermarkProcess) that includes CBET.
     */
    inline NielsenNonLinearWatermarkSettings& WithCbetSourceId(const char* value) { SetCbetSourceId(value); return *this;}


    /**
     * Optional. If this asset uses an episode ID with Nielsen, provide it here.
     */
    inline const Aws::String& GetEpisodeId() const{ return m_episodeId; }

    /**
     * Optional. If this asset uses an episode ID with Nielsen, provide it here.
     */
    inline bool EpisodeIdHasBeenSet() const { return m_episodeIdHasBeenSet; }

    /**
     * Optional. If this asset uses an episode ID with Nielsen, provide it here.
     */
    inline void SetEpisodeId(const Aws::String& value) { m_episodeIdHasBeenSet = true; m_episodeId = value; }

    /**
     * Optional. If this asset uses an episode ID with Nielsen, provide it here.
     */
    inline void SetEpisodeId(Aws::String&& value) { m_episodeIdHasBeenSet = true; m_episodeId = std::move(value); }

    /**
     * Optional. If this asset uses an episode ID with Nielsen, provide it here.
     */
    inline void SetEpisodeId(const char* value) { m_episodeIdHasBeenSet = true; m_episodeId.assign(value); }

    /**
     * Optional. If this asset uses an episode ID with Nielsen, provide it here.
     */
    inline NielsenNonLinearWatermarkSettings& WithEpisodeId(const Aws::String& value) { SetEpisodeId(value); return *this;}

    /**
     * Optional. If this asset uses an episode ID with Nielsen, provide it here.
     */
    inline NielsenNonLinearWatermarkSettings& WithEpisodeId(Aws::String&& value) { SetEpisodeId(std::move(value)); return *this;}

    /**
     * Optional. If this asset uses an episode ID with Nielsen, provide it here.
     */
    inline NielsenNonLinearWatermarkSettings& WithEpisodeId(const char* value) { SetEpisodeId(value); return *this;}


    /**
     * Specify the Amazon S3 location where you want MediaConvert to save your Nielsen
     * non-linear metadata .zip file. This Amazon S3 bucket must be in the same Region
     * as the one where you do your MediaConvert transcoding. If you want to include an
     * ADI file in this .zip file, use the setting ADI file (adiFilename) to specify
     * it. MediaConvert delivers the Nielsen metadata .zip files only to your metadata
     * destination Amazon S3 bucket. It doesn't deliver the .zip files to Nielsen. You
     * are responsible for delivering the metadata .zip files to Nielsen.
     */
    inline const Aws::String& GetMetadataDestination() const{ return m_metadataDestination; }

    /**
     * Specify the Amazon S3 location where you want MediaConvert to save your Nielsen
     * non-linear metadata .zip file. This Amazon S3 bucket must be in the same Region
     * as the one where you do your MediaConvert transcoding. If you want to include an
     * ADI file in this .zip file, use the setting ADI file (adiFilename) to specify
     * it. MediaConvert delivers the Nielsen metadata .zip files only to your metadata
     * destination Amazon S3 bucket. It doesn't deliver the .zip files to Nielsen. You
     * are responsible for delivering the metadata .zip files to Nielsen.
     */
    inline bool MetadataDestinationHasBeenSet() const { return m_metadataDestinationHasBeenSet; }

    /**
     * Specify the Amazon S3 location where you want MediaConvert to save your Nielsen
     * non-linear metadata .zip file. This Amazon S3 bucket must be in the same Region
     * as the one where you do your MediaConvert transcoding. If you want to include an
     * ADI file in this .zip file, use the setting ADI file (adiFilename) to specify
     * it. MediaConvert delivers the Nielsen metadata .zip files only to your metadata
     * destination Amazon S3 bucket. It doesn't deliver the .zip files to Nielsen. You
     * are responsible for delivering the metadata .zip files to Nielsen.
     */
    inline void SetMetadataDestination(const Aws::String& value) { m_metadataDestinationHasBeenSet = true; m_metadataDestination = value; }

    /**
     * Specify the Amazon S3 location where you want MediaConvert to save your Nielsen
     * non-linear metadata .zip file. This Amazon S3 bucket must be in the same Region
     * as the one where you do your MediaConvert transcoding. If you want to include an
     * ADI file in this .zip file, use the setting ADI file (adiFilename) to specify
     * it. MediaConvert delivers the Nielsen metadata .zip files only to your metadata
     * destination Amazon S3 bucket. It doesn't deliver the .zip files to Nielsen. You
     * are responsible for delivering the metadata .zip files to Nielsen.
     */
    inline void SetMetadataDestination(Aws::String&& value) { m_metadataDestinationHasBeenSet = true; m_metadataDestination = std::move(value); }

    /**
     * Specify the Amazon S3 location where you want MediaConvert to save your Nielsen
     * non-linear metadata .zip file. This Amazon S3 bucket must be in the same Region
     * as the one where you do your MediaConvert transcoding. If you want to include an
     * ADI file in this .zip file, use the setting ADI file (adiFilename) to specify
     * it. MediaConvert delivers the Nielsen metadata .zip files only to your metadata
     * destination Amazon S3 bucket. It doesn't deliver the .zip files to Nielsen. You
     * are responsible for delivering the metadata .zip files to Nielsen.
     */
    inline void SetMetadataDestination(const char* value) { m_metadataDestinationHasBeenSet = true; m_metadataDestination.assign(value); }

    /**
     * Specify the Amazon S3 location where you want MediaConvert to save your Nielsen
     * non-linear metadata .zip file. This Amazon S3 bucket must be in the same Region
     * as the one where you do your MediaConvert transcoding. If you want to include an
     * ADI file in this .zip file, use the setting ADI file (adiFilename) to specify
     * it. MediaConvert delivers the Nielsen metadata .zip files only to your metadata
     * destination Amazon S3 bucket. It doesn't deliver the .zip files to Nielsen. You
     * are responsible for delivering the metadata .zip files to Nielsen.
     */
    inline NielsenNonLinearWatermarkSettings& WithMetadataDestination(const Aws::String& value) { SetMetadataDestination(value); return *this;}

    /**
     * Specify the Amazon S3 location where you want MediaConvert to save your Nielsen
     * non-linear metadata .zip file. This Amazon S3 bucket must be in the same Region
     * as the one where you do your MediaConvert transcoding. If you want to include an
     * ADI file in this .zip file, use the setting ADI file (adiFilename) to specify
     * it. MediaConvert delivers the Nielsen metadata .zip files only to your metadata
     * destination Amazon S3 bucket. It doesn't deliver the .zip files to Nielsen. You
     * are responsible for delivering the metadata .zip files to Nielsen.
     */
    inline NielsenNonLinearWatermarkSettings& WithMetadataDestination(Aws::String&& value) { SetMetadataDestination(std::move(value)); return *this;}

    /**
     * Specify the Amazon S3 location where you want MediaConvert to save your Nielsen
     * non-linear metadata .zip file. This Amazon S3 bucket must be in the same Region
     * as the one where you do your MediaConvert transcoding. If you want to include an
     * ADI file in this .zip file, use the setting ADI file (adiFilename) to specify
     * it. MediaConvert delivers the Nielsen metadata .zip files only to your metadata
     * destination Amazon S3 bucket. It doesn't deliver the .zip files to Nielsen. You
     * are responsible for delivering the metadata .zip files to Nielsen.
     */
    inline NielsenNonLinearWatermarkSettings& WithMetadataDestination(const char* value) { SetMetadataDestination(value); return *this;}


    /**
     * Use the SID that Nielsen provides to you. This source ID should be unique to
     * your Nielsen account but common to all of your output assets. Required for all
     * Nielsen non-linear watermarking. This ID should be unique to your Nielsen
     * account but common to all of your output assets. Required for all Nielsen
     * non-linear watermarking.
     */
    inline int GetSourceId() const{ return m_sourceId; }

    /**
     * Use the SID that Nielsen provides to you. This source ID should be unique to
     * your Nielsen account but common to all of your output assets. Required for all
     * Nielsen non-linear watermarking. This ID should be unique to your Nielsen
     * account but common to all of your output assets. Required for all Nielsen
     * non-linear watermarking.
     */
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }

    /**
     * Use the SID that Nielsen provides to you. This source ID should be unique to
     * your Nielsen account but common to all of your output assets. Required for all
     * Nielsen non-linear watermarking. This ID should be unique to your Nielsen
     * account but common to all of your output assets. Required for all Nielsen
     * non-linear watermarking.
     */
    inline void SetSourceId(int value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }

    /**
     * Use the SID that Nielsen provides to you. This source ID should be unique to
     * your Nielsen account but common to all of your output assets. Required for all
     * Nielsen non-linear watermarking. This ID should be unique to your Nielsen
     * account but common to all of your output assets. Required for all Nielsen
     * non-linear watermarking.
     */
    inline NielsenNonLinearWatermarkSettings& WithSourceId(int value) { SetSourceId(value); return *this;}


    /**
     * Required. Specify whether your source content already contains Nielsen
     * non-linear watermarks. When you set this value to Watermarked (WATERMARKED), the
     * service fails the job. Nielsen requires that you add non-linear watermarking to
     * only clean content that doesn't already  have non-linear Nielsen watermarks.
     */
    inline const NielsenSourceWatermarkStatusType& GetSourceWatermarkStatus() const{ return m_sourceWatermarkStatus; }

    /**
     * Required. Specify whether your source content already contains Nielsen
     * non-linear watermarks. When you set this value to Watermarked (WATERMARKED), the
     * service fails the job. Nielsen requires that you add non-linear watermarking to
     * only clean content that doesn't already  have non-linear Nielsen watermarks.
     */
    inline bool SourceWatermarkStatusHasBeenSet() const { return m_sourceWatermarkStatusHasBeenSet; }

    /**
     * Required. Specify whether your source content already contains Nielsen
     * non-linear watermarks. When you set this value to Watermarked (WATERMARKED), the
     * service fails the job. Nielsen requires that you add non-linear watermarking to
     * only clean content that doesn't already  have non-linear Nielsen watermarks.
     */
    inline void SetSourceWatermarkStatus(const NielsenSourceWatermarkStatusType& value) { m_sourceWatermarkStatusHasBeenSet = true; m_sourceWatermarkStatus = value; }

    /**
     * Required. Specify whether your source content already contains Nielsen
     * non-linear watermarks. When you set this value to Watermarked (WATERMARKED), the
     * service fails the job. Nielsen requires that you add non-linear watermarking to
     * only clean content that doesn't already  have non-linear Nielsen watermarks.
     */
    inline void SetSourceWatermarkStatus(NielsenSourceWatermarkStatusType&& value) { m_sourceWatermarkStatusHasBeenSet = true; m_sourceWatermarkStatus = std::move(value); }

    /**
     * Required. Specify whether your source content already contains Nielsen
     * non-linear watermarks. When you set this value to Watermarked (WATERMARKED), the
     * service fails the job. Nielsen requires that you add non-linear watermarking to
     * only clean content that doesn't already  have non-linear Nielsen watermarks.
     */
    inline NielsenNonLinearWatermarkSettings& WithSourceWatermarkStatus(const NielsenSourceWatermarkStatusType& value) { SetSourceWatermarkStatus(value); return *this;}

    /**
     * Required. Specify whether your source content already contains Nielsen
     * non-linear watermarks. When you set this value to Watermarked (WATERMARKED), the
     * service fails the job. Nielsen requires that you add non-linear watermarking to
     * only clean content that doesn't already  have non-linear Nielsen watermarks.
     */
    inline NielsenNonLinearWatermarkSettings& WithSourceWatermarkStatus(NielsenSourceWatermarkStatusType&& value) { SetSourceWatermarkStatus(std::move(value)); return *this;}


    /**
     * Specify the endpoint for the TIC server that you have deployed and configured in
     * the AWS Cloud. Required for all Nielsen non-linear watermarking. MediaConvert
     * can't connect directly to a TIC server. Instead, you must use API Gateway to
     * provide a RESTful interface between MediaConvert and a TIC server that you
     * deploy in your AWS account. For more information on deploying a TIC server in
     * your AWS account and the required API Gateway, contact Nielsen support.
     */
    inline const Aws::String& GetTicServerUrl() const{ return m_ticServerUrl; }

    /**
     * Specify the endpoint for the TIC server that you have deployed and configured in
     * the AWS Cloud. Required for all Nielsen non-linear watermarking. MediaConvert
     * can't connect directly to a TIC server. Instead, you must use API Gateway to
     * provide a RESTful interface between MediaConvert and a TIC server that you
     * deploy in your AWS account. For more information on deploying a TIC server in
     * your AWS account and the required API Gateway, contact Nielsen support.
     */
    inline bool TicServerUrlHasBeenSet() const { return m_ticServerUrlHasBeenSet; }

    /**
     * Specify the endpoint for the TIC server that you have deployed and configured in
     * the AWS Cloud. Required for all Nielsen non-linear watermarking. MediaConvert
     * can't connect directly to a TIC server. Instead, you must use API Gateway to
     * provide a RESTful interface between MediaConvert and a TIC server that you
     * deploy in your AWS account. For more information on deploying a TIC server in
     * your AWS account and the required API Gateway, contact Nielsen support.
     */
    inline void SetTicServerUrl(const Aws::String& value) { m_ticServerUrlHasBeenSet = true; m_ticServerUrl = value; }

    /**
     * Specify the endpoint for the TIC server that you have deployed and configured in
     * the AWS Cloud. Required for all Nielsen non-linear watermarking. MediaConvert
     * can't connect directly to a TIC server. Instead, you must use API Gateway to
     * provide a RESTful interface between MediaConvert and a TIC server that you
     * deploy in your AWS account. For more information on deploying a TIC server in
     * your AWS account and the required API Gateway, contact Nielsen support.
     */
    inline void SetTicServerUrl(Aws::String&& value) { m_ticServerUrlHasBeenSet = true; m_ticServerUrl = std::move(value); }

    /**
     * Specify the endpoint for the TIC server that you have deployed and configured in
     * the AWS Cloud. Required for all Nielsen non-linear watermarking. MediaConvert
     * can't connect directly to a TIC server. Instead, you must use API Gateway to
     * provide a RESTful interface between MediaConvert and a TIC server that you
     * deploy in your AWS account. For more information on deploying a TIC server in
     * your AWS account and the required API Gateway, contact Nielsen support.
     */
    inline void SetTicServerUrl(const char* value) { m_ticServerUrlHasBeenSet = true; m_ticServerUrl.assign(value); }

    /**
     * Specify the endpoint for the TIC server that you have deployed and configured in
     * the AWS Cloud. Required for all Nielsen non-linear watermarking. MediaConvert
     * can't connect directly to a TIC server. Instead, you must use API Gateway to
     * provide a RESTful interface between MediaConvert and a TIC server that you
     * deploy in your AWS account. For more information on deploying a TIC server in
     * your AWS account and the required API Gateway, contact Nielsen support.
     */
    inline NielsenNonLinearWatermarkSettings& WithTicServerUrl(const Aws::String& value) { SetTicServerUrl(value); return *this;}

    /**
     * Specify the endpoint for the TIC server that you have deployed and configured in
     * the AWS Cloud. Required for all Nielsen non-linear watermarking. MediaConvert
     * can't connect directly to a TIC server. Instead, you must use API Gateway to
     * provide a RESTful interface between MediaConvert and a TIC server that you
     * deploy in your AWS account. For more information on deploying a TIC server in
     * your AWS account and the required API Gateway, contact Nielsen support.
     */
    inline NielsenNonLinearWatermarkSettings& WithTicServerUrl(Aws::String&& value) { SetTicServerUrl(std::move(value)); return *this;}

    /**
     * Specify the endpoint for the TIC server that you have deployed and configured in
     * the AWS Cloud. Required for all Nielsen non-linear watermarking. MediaConvert
     * can't connect directly to a TIC server. Instead, you must use API Gateway to
     * provide a RESTful interface between MediaConvert and a TIC server that you
     * deploy in your AWS account. For more information on deploying a TIC server in
     * your AWS account and the required API Gateway, contact Nielsen support.
     */
    inline NielsenNonLinearWatermarkSettings& WithTicServerUrl(const char* value) { SetTicServerUrl(value); return *this;}


    /**
     * To create assets that have the same TIC values in each audio track, keep the
     * default value Share TICs (SAME_TICS_PER_TRACK). To create assets that have
     * unique TIC values for each audio track, choose Use unique TICs
     * (RESERVE_UNIQUE_TICS_PER_TRACK).
     */
    inline const NielsenUniqueTicPerAudioTrackType& GetUniqueTicPerAudioTrack() const{ return m_uniqueTicPerAudioTrack; }

    /**
     * To create assets that have the same TIC values in each audio track, keep the
     * default value Share TICs (SAME_TICS_PER_TRACK). To create assets that have
     * unique TIC values for each audio track, choose Use unique TICs
     * (RESERVE_UNIQUE_TICS_PER_TRACK).
     */
    inline bool UniqueTicPerAudioTrackHasBeenSet() const { return m_uniqueTicPerAudioTrackHasBeenSet; }

    /**
     * To create assets that have the same TIC values in each audio track, keep the
     * default value Share TICs (SAME_TICS_PER_TRACK). To create assets that have
     * unique TIC values for each audio track, choose Use unique TICs
     * (RESERVE_UNIQUE_TICS_PER_TRACK).
     */
    inline void SetUniqueTicPerAudioTrack(const NielsenUniqueTicPerAudioTrackType& value) { m_uniqueTicPerAudioTrackHasBeenSet = true; m_uniqueTicPerAudioTrack = value; }

    /**
     * To create assets that have the same TIC values in each audio track, keep the
     * default value Share TICs (SAME_TICS_PER_TRACK). To create assets that have
     * unique TIC values for each audio track, choose Use unique TICs
     * (RESERVE_UNIQUE_TICS_PER_TRACK).
     */
    inline void SetUniqueTicPerAudioTrack(NielsenUniqueTicPerAudioTrackType&& value) { m_uniqueTicPerAudioTrackHasBeenSet = true; m_uniqueTicPerAudioTrack = std::move(value); }

    /**
     * To create assets that have the same TIC values in each audio track, keep the
     * default value Share TICs (SAME_TICS_PER_TRACK). To create assets that have
     * unique TIC values for each audio track, choose Use unique TICs
     * (RESERVE_UNIQUE_TICS_PER_TRACK).
     */
    inline NielsenNonLinearWatermarkSettings& WithUniqueTicPerAudioTrack(const NielsenUniqueTicPerAudioTrackType& value) { SetUniqueTicPerAudioTrack(value); return *this;}

    /**
     * To create assets that have the same TIC values in each audio track, keep the
     * default value Share TICs (SAME_TICS_PER_TRACK). To create assets that have
     * unique TIC values for each audio track, choose Use unique TICs
     * (RESERVE_UNIQUE_TICS_PER_TRACK).
     */
    inline NielsenNonLinearWatermarkSettings& WithUniqueTicPerAudioTrack(NielsenUniqueTicPerAudioTrackType&& value) { SetUniqueTicPerAudioTrack(std::move(value)); return *this;}

  private:

    NielsenActiveWatermarkProcessType m_activeWatermarkProcess;
    bool m_activeWatermarkProcessHasBeenSet = false;

    Aws::String m_adiFilename;
    bool m_adiFilenameHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_cbetSourceId;
    bool m_cbetSourceIdHasBeenSet = false;

    Aws::String m_episodeId;
    bool m_episodeIdHasBeenSet = false;

    Aws::String m_metadataDestination;
    bool m_metadataDestinationHasBeenSet = false;

    int m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    NielsenSourceWatermarkStatusType m_sourceWatermarkStatus;
    bool m_sourceWatermarkStatusHasBeenSet = false;

    Aws::String m_ticServerUrl;
    bool m_ticServerUrlHasBeenSet = false;

    NielsenUniqueTicPerAudioTrackType m_uniqueTicPerAudioTrack;
    bool m_uniqueTicPerAudioTrackHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
