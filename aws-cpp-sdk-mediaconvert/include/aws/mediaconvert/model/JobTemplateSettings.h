/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AvailBlanking.h>
#include <aws/mediaconvert/model/EsamSettings.h>
#include <aws/mediaconvert/model/ExtendedDataServices.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/KantarWatermarkSettings.h>
#include <aws/mediaconvert/model/MotionImageInserter.h>
#include <aws/mediaconvert/model/NielsenConfiguration.h>
#include <aws/mediaconvert/model/NielsenNonLinearWatermarkSettings.h>
#include <aws/mediaconvert/model/TimecodeConfig.h>
#include <aws/mediaconvert/model/TimedMetadataInsertion.h>
#include <aws/mediaconvert/model/InputTemplate.h>
#include <aws/mediaconvert/model/OutputGroup.h>
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
   * JobTemplateSettings contains all the transcode settings saved in the template
   * that will be applied to jobs created from it.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/JobTemplateSettings">AWS
   * API Reference</a></p>
   */
  class JobTemplateSettings
  {
  public:
    AWS_MEDIACONVERT_API JobTemplateSettings();
    AWS_MEDIACONVERT_API JobTemplateSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API JobTemplateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time.
     */
    inline int GetAdAvailOffset() const{ return m_adAvailOffset; }

    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time.
     */
    inline bool AdAvailOffsetHasBeenSet() const { return m_adAvailOffsetHasBeenSet; }

    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time.
     */
    inline void SetAdAvailOffset(int value) { m_adAvailOffsetHasBeenSet = true; m_adAvailOffset = value; }

    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time.
     */
    inline JobTemplateSettings& WithAdAvailOffset(int value) { SetAdAvailOffset(value); return *this;}


    /**
     * Settings for ad avail blanking.  Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline const AvailBlanking& GetAvailBlanking() const{ return m_availBlanking; }

    /**
     * Settings for ad avail blanking.  Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline bool AvailBlankingHasBeenSet() const { return m_availBlankingHasBeenSet; }

    /**
     * Settings for ad avail blanking.  Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline void SetAvailBlanking(const AvailBlanking& value) { m_availBlankingHasBeenSet = true; m_availBlanking = value; }

    /**
     * Settings for ad avail blanking.  Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline void SetAvailBlanking(AvailBlanking&& value) { m_availBlankingHasBeenSet = true; m_availBlanking = std::move(value); }

    /**
     * Settings for ad avail blanking.  Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline JobTemplateSettings& WithAvailBlanking(const AvailBlanking& value) { SetAvailBlanking(value); return *this;}

    /**
     * Settings for ad avail blanking.  Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline JobTemplateSettings& WithAvailBlanking(AvailBlanking&& value) { SetAvailBlanking(std::move(value)); return *this;}


    /**
     * Settings for Event Signaling And Messaging (ESAM). If you don't do ad insertion,
     * you can ignore these settings.
     */
    inline const EsamSettings& GetEsam() const{ return m_esam; }

    /**
     * Settings for Event Signaling And Messaging (ESAM). If you don't do ad insertion,
     * you can ignore these settings.
     */
    inline bool EsamHasBeenSet() const { return m_esamHasBeenSet; }

    /**
     * Settings for Event Signaling And Messaging (ESAM). If you don't do ad insertion,
     * you can ignore these settings.
     */
    inline void SetEsam(const EsamSettings& value) { m_esamHasBeenSet = true; m_esam = value; }

    /**
     * Settings for Event Signaling And Messaging (ESAM). If you don't do ad insertion,
     * you can ignore these settings.
     */
    inline void SetEsam(EsamSettings&& value) { m_esamHasBeenSet = true; m_esam = std::move(value); }

    /**
     * Settings for Event Signaling And Messaging (ESAM). If you don't do ad insertion,
     * you can ignore these settings.
     */
    inline JobTemplateSettings& WithEsam(const EsamSettings& value) { SetEsam(value); return *this;}

    /**
     * Settings for Event Signaling And Messaging (ESAM). If you don't do ad insertion,
     * you can ignore these settings.
     */
    inline JobTemplateSettings& WithEsam(EsamSettings&& value) { SetEsam(std::move(value)); return *this;}


    /**
     * If your source content has EIA-608 Line 21 Data Services, enable this feature to
     * specify what MediaConvert does with the Extended Data Services (XDS) packets.
     * You can choose to pass through XDS packets, or remove them from the output. For
     * more information about XDS, see EIA-608 Line Data Services, section 9.5.1.5 05h
     * Content Advisory.
     */
    inline const ExtendedDataServices& GetExtendedDataServices() const{ return m_extendedDataServices; }

    /**
     * If your source content has EIA-608 Line 21 Data Services, enable this feature to
     * specify what MediaConvert does with the Extended Data Services (XDS) packets.
     * You can choose to pass through XDS packets, or remove them from the output. For
     * more information about XDS, see EIA-608 Line Data Services, section 9.5.1.5 05h
     * Content Advisory.
     */
    inline bool ExtendedDataServicesHasBeenSet() const { return m_extendedDataServicesHasBeenSet; }

    /**
     * If your source content has EIA-608 Line 21 Data Services, enable this feature to
     * specify what MediaConvert does with the Extended Data Services (XDS) packets.
     * You can choose to pass through XDS packets, or remove them from the output. For
     * more information about XDS, see EIA-608 Line Data Services, section 9.5.1.5 05h
     * Content Advisory.
     */
    inline void SetExtendedDataServices(const ExtendedDataServices& value) { m_extendedDataServicesHasBeenSet = true; m_extendedDataServices = value; }

    /**
     * If your source content has EIA-608 Line 21 Data Services, enable this feature to
     * specify what MediaConvert does with the Extended Data Services (XDS) packets.
     * You can choose to pass through XDS packets, or remove them from the output. For
     * more information about XDS, see EIA-608 Line Data Services, section 9.5.1.5 05h
     * Content Advisory.
     */
    inline void SetExtendedDataServices(ExtendedDataServices&& value) { m_extendedDataServicesHasBeenSet = true; m_extendedDataServices = std::move(value); }

    /**
     * If your source content has EIA-608 Line 21 Data Services, enable this feature to
     * specify what MediaConvert does with the Extended Data Services (XDS) packets.
     * You can choose to pass through XDS packets, or remove them from the output. For
     * more information about XDS, see EIA-608 Line Data Services, section 9.5.1.5 05h
     * Content Advisory.
     */
    inline JobTemplateSettings& WithExtendedDataServices(const ExtendedDataServices& value) { SetExtendedDataServices(value); return *this;}

    /**
     * If your source content has EIA-608 Line 21 Data Services, enable this feature to
     * specify what MediaConvert does with the Extended Data Services (XDS) packets.
     * You can choose to pass through XDS packets, or remove them from the output. For
     * more information about XDS, see EIA-608 Line Data Services, section 9.5.1.5 05h
     * Content Advisory.
     */
    inline JobTemplateSettings& WithExtendedDataServices(ExtendedDataServices&& value) { SetExtendedDataServices(std::move(value)); return *this;}


    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline const Aws::Vector<InputTemplate>& GetInputs() const{ return m_inputs; }

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline void SetInputs(const Aws::Vector<InputTemplate>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline void SetInputs(Aws::Vector<InputTemplate>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline JobTemplateSettings& WithInputs(const Aws::Vector<InputTemplate>& value) { SetInputs(value); return *this;}

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline JobTemplateSettings& WithInputs(Aws::Vector<InputTemplate>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline JobTemplateSettings& AddInputs(const InputTemplate& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline JobTemplateSettings& AddInputs(InputTemplate&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }


    /**
     * Use these settings only when you use Kantar watermarking. Specify the values
     * that MediaConvert uses to generate and place Kantar watermarks in your output
     * audio. These settings apply to every output in your job. In addition to
     * specifying these values, you also need to store your Kantar credentials in AWS
     * Secrets Manager. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/kantar-watermarking.html.
     */
    inline const KantarWatermarkSettings& GetKantarWatermark() const{ return m_kantarWatermark; }

    /**
     * Use these settings only when you use Kantar watermarking. Specify the values
     * that MediaConvert uses to generate and place Kantar watermarks in your output
     * audio. These settings apply to every output in your job. In addition to
     * specifying these values, you also need to store your Kantar credentials in AWS
     * Secrets Manager. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/kantar-watermarking.html.
     */
    inline bool KantarWatermarkHasBeenSet() const { return m_kantarWatermarkHasBeenSet; }

    /**
     * Use these settings only when you use Kantar watermarking. Specify the values
     * that MediaConvert uses to generate and place Kantar watermarks in your output
     * audio. These settings apply to every output in your job. In addition to
     * specifying these values, you also need to store your Kantar credentials in AWS
     * Secrets Manager. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/kantar-watermarking.html.
     */
    inline void SetKantarWatermark(const KantarWatermarkSettings& value) { m_kantarWatermarkHasBeenSet = true; m_kantarWatermark = value; }

    /**
     * Use these settings only when you use Kantar watermarking. Specify the values
     * that MediaConvert uses to generate and place Kantar watermarks in your output
     * audio. These settings apply to every output in your job. In addition to
     * specifying these values, you also need to store your Kantar credentials in AWS
     * Secrets Manager. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/kantar-watermarking.html.
     */
    inline void SetKantarWatermark(KantarWatermarkSettings&& value) { m_kantarWatermarkHasBeenSet = true; m_kantarWatermark = std::move(value); }

    /**
     * Use these settings only when you use Kantar watermarking. Specify the values
     * that MediaConvert uses to generate and place Kantar watermarks in your output
     * audio. These settings apply to every output in your job. In addition to
     * specifying these values, you also need to store your Kantar credentials in AWS
     * Secrets Manager. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/kantar-watermarking.html.
     */
    inline JobTemplateSettings& WithKantarWatermark(const KantarWatermarkSettings& value) { SetKantarWatermark(value); return *this;}

    /**
     * Use these settings only when you use Kantar watermarking. Specify the values
     * that MediaConvert uses to generate and place Kantar watermarks in your output
     * audio. These settings apply to every output in your job. In addition to
     * specifying these values, you also need to store your Kantar credentials in AWS
     * Secrets Manager. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/kantar-watermarking.html.
     */
    inline JobTemplateSettings& WithKantarWatermark(KantarWatermarkSettings&& value) { SetKantarWatermark(std::move(value)); return *this;}


    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups. For more information,
     * see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/motion-graphic-overlay.html.
     */
    inline const MotionImageInserter& GetMotionImageInserter() const{ return m_motionImageInserter; }

    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups. For more information,
     * see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/motion-graphic-overlay.html.
     */
    inline bool MotionImageInserterHasBeenSet() const { return m_motionImageInserterHasBeenSet; }

    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups. For more information,
     * see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/motion-graphic-overlay.html.
     */
    inline void SetMotionImageInserter(const MotionImageInserter& value) { m_motionImageInserterHasBeenSet = true; m_motionImageInserter = value; }

    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups. For more information,
     * see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/motion-graphic-overlay.html.
     */
    inline void SetMotionImageInserter(MotionImageInserter&& value) { m_motionImageInserterHasBeenSet = true; m_motionImageInserter = std::move(value); }

    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups. For more information,
     * see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/motion-graphic-overlay.html.
     */
    inline JobTemplateSettings& WithMotionImageInserter(const MotionImageInserter& value) { SetMotionImageInserter(value); return *this;}

    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups. For more information,
     * see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/motion-graphic-overlay.html.
     */
    inline JobTemplateSettings& WithMotionImageInserter(MotionImageInserter&& value) { SetMotionImageInserter(std::move(value)); return *this;}


    /**
     * Settings for your Nielsen configuration. If you don't do Nielsen measurement and
     * analytics, ignore these settings. When you enable Nielsen configuration
     * (nielsenConfiguration), MediaConvert enables PCM to ID3 tagging for all outputs
     * in the job. To enable Nielsen configuration programmatically, include an
     * instance of nielsenConfiguration in your JSON job specification. Even if you
     * don't include any children of nielsenConfiguration, you still enable the
     * setting.
     */
    inline const NielsenConfiguration& GetNielsenConfiguration() const{ return m_nielsenConfiguration; }

    /**
     * Settings for your Nielsen configuration. If you don't do Nielsen measurement and
     * analytics, ignore these settings. When you enable Nielsen configuration
     * (nielsenConfiguration), MediaConvert enables PCM to ID3 tagging for all outputs
     * in the job. To enable Nielsen configuration programmatically, include an
     * instance of nielsenConfiguration in your JSON job specification. Even if you
     * don't include any children of nielsenConfiguration, you still enable the
     * setting.
     */
    inline bool NielsenConfigurationHasBeenSet() const { return m_nielsenConfigurationHasBeenSet; }

    /**
     * Settings for your Nielsen configuration. If you don't do Nielsen measurement and
     * analytics, ignore these settings. When you enable Nielsen configuration
     * (nielsenConfiguration), MediaConvert enables PCM to ID3 tagging for all outputs
     * in the job. To enable Nielsen configuration programmatically, include an
     * instance of nielsenConfiguration in your JSON job specification. Even if you
     * don't include any children of nielsenConfiguration, you still enable the
     * setting.
     */
    inline void SetNielsenConfiguration(const NielsenConfiguration& value) { m_nielsenConfigurationHasBeenSet = true; m_nielsenConfiguration = value; }

    /**
     * Settings for your Nielsen configuration. If you don't do Nielsen measurement and
     * analytics, ignore these settings. When you enable Nielsen configuration
     * (nielsenConfiguration), MediaConvert enables PCM to ID3 tagging for all outputs
     * in the job. To enable Nielsen configuration programmatically, include an
     * instance of nielsenConfiguration in your JSON job specification. Even if you
     * don't include any children of nielsenConfiguration, you still enable the
     * setting.
     */
    inline void SetNielsenConfiguration(NielsenConfiguration&& value) { m_nielsenConfigurationHasBeenSet = true; m_nielsenConfiguration = std::move(value); }

    /**
     * Settings for your Nielsen configuration. If you don't do Nielsen measurement and
     * analytics, ignore these settings. When you enable Nielsen configuration
     * (nielsenConfiguration), MediaConvert enables PCM to ID3 tagging for all outputs
     * in the job. To enable Nielsen configuration programmatically, include an
     * instance of nielsenConfiguration in your JSON job specification. Even if you
     * don't include any children of nielsenConfiguration, you still enable the
     * setting.
     */
    inline JobTemplateSettings& WithNielsenConfiguration(const NielsenConfiguration& value) { SetNielsenConfiguration(value); return *this;}

    /**
     * Settings for your Nielsen configuration. If you don't do Nielsen measurement and
     * analytics, ignore these settings. When you enable Nielsen configuration
     * (nielsenConfiguration), MediaConvert enables PCM to ID3 tagging for all outputs
     * in the job. To enable Nielsen configuration programmatically, include an
     * instance of nielsenConfiguration in your JSON job specification. Even if you
     * don't include any children of nielsenConfiguration, you still enable the
     * setting.
     */
    inline JobTemplateSettings& WithNielsenConfiguration(NielsenConfiguration&& value) { SetNielsenConfiguration(std::move(value)); return *this;}


    /**
     * Ignore these settings unless you are using Nielsen non-linear watermarking.
     * Specify the values that  MediaConvert uses to generate and place Nielsen
     * watermarks in your output audio. In addition to  specifying these values, you
     * also need to set up your cloud TIC server. These settings apply to  every output
     * in your job. The MediaConvert implementation is currently with the following
     * Nielsen versions: Nielsen Watermark SDK Version 5.2.1 Nielsen NLM Watermark
     * Engine Version 1.2.7 Nielsen Watermark Authenticator [SID_TIC] Version [5.0.0]
     */
    inline const NielsenNonLinearWatermarkSettings& GetNielsenNonLinearWatermark() const{ return m_nielsenNonLinearWatermark; }

    /**
     * Ignore these settings unless you are using Nielsen non-linear watermarking.
     * Specify the values that  MediaConvert uses to generate and place Nielsen
     * watermarks in your output audio. In addition to  specifying these values, you
     * also need to set up your cloud TIC server. These settings apply to  every output
     * in your job. The MediaConvert implementation is currently with the following
     * Nielsen versions: Nielsen Watermark SDK Version 5.2.1 Nielsen NLM Watermark
     * Engine Version 1.2.7 Nielsen Watermark Authenticator [SID_TIC] Version [5.0.0]
     */
    inline bool NielsenNonLinearWatermarkHasBeenSet() const { return m_nielsenNonLinearWatermarkHasBeenSet; }

    /**
     * Ignore these settings unless you are using Nielsen non-linear watermarking.
     * Specify the values that  MediaConvert uses to generate and place Nielsen
     * watermarks in your output audio. In addition to  specifying these values, you
     * also need to set up your cloud TIC server. These settings apply to  every output
     * in your job. The MediaConvert implementation is currently with the following
     * Nielsen versions: Nielsen Watermark SDK Version 5.2.1 Nielsen NLM Watermark
     * Engine Version 1.2.7 Nielsen Watermark Authenticator [SID_TIC] Version [5.0.0]
     */
    inline void SetNielsenNonLinearWatermark(const NielsenNonLinearWatermarkSettings& value) { m_nielsenNonLinearWatermarkHasBeenSet = true; m_nielsenNonLinearWatermark = value; }

    /**
     * Ignore these settings unless you are using Nielsen non-linear watermarking.
     * Specify the values that  MediaConvert uses to generate and place Nielsen
     * watermarks in your output audio. In addition to  specifying these values, you
     * also need to set up your cloud TIC server. These settings apply to  every output
     * in your job. The MediaConvert implementation is currently with the following
     * Nielsen versions: Nielsen Watermark SDK Version 5.2.1 Nielsen NLM Watermark
     * Engine Version 1.2.7 Nielsen Watermark Authenticator [SID_TIC] Version [5.0.0]
     */
    inline void SetNielsenNonLinearWatermark(NielsenNonLinearWatermarkSettings&& value) { m_nielsenNonLinearWatermarkHasBeenSet = true; m_nielsenNonLinearWatermark = std::move(value); }

    /**
     * Ignore these settings unless you are using Nielsen non-linear watermarking.
     * Specify the values that  MediaConvert uses to generate and place Nielsen
     * watermarks in your output audio. In addition to  specifying these values, you
     * also need to set up your cloud TIC server. These settings apply to  every output
     * in your job. The MediaConvert implementation is currently with the following
     * Nielsen versions: Nielsen Watermark SDK Version 5.2.1 Nielsen NLM Watermark
     * Engine Version 1.2.7 Nielsen Watermark Authenticator [SID_TIC] Version [5.0.0]
     */
    inline JobTemplateSettings& WithNielsenNonLinearWatermark(const NielsenNonLinearWatermarkSettings& value) { SetNielsenNonLinearWatermark(value); return *this;}

    /**
     * Ignore these settings unless you are using Nielsen non-linear watermarking.
     * Specify the values that  MediaConvert uses to generate and place Nielsen
     * watermarks in your output audio. In addition to  specifying these values, you
     * also need to set up your cloud TIC server. These settings apply to  every output
     * in your job. The MediaConvert implementation is currently with the following
     * Nielsen versions: Nielsen Watermark SDK Version 5.2.1 Nielsen NLM Watermark
     * Engine Version 1.2.7 Nielsen Watermark Authenticator [SID_TIC] Version [5.0.0]
     */
    inline JobTemplateSettings& WithNielsenNonLinearWatermark(NielsenNonLinearWatermarkSettings&& value) { SetNielsenNonLinearWatermark(std::move(value)); return *this;}


    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline const Aws::Vector<OutputGroup>& GetOutputGroups() const{ return m_outputGroups; }

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline bool OutputGroupsHasBeenSet() const { return m_outputGroupsHasBeenSet; }

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline void SetOutputGroups(const Aws::Vector<OutputGroup>& value) { m_outputGroupsHasBeenSet = true; m_outputGroups = value; }

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline void SetOutputGroups(Aws::Vector<OutputGroup>&& value) { m_outputGroupsHasBeenSet = true; m_outputGroups = std::move(value); }

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline JobTemplateSettings& WithOutputGroups(const Aws::Vector<OutputGroup>& value) { SetOutputGroups(value); return *this;}

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline JobTemplateSettings& WithOutputGroups(Aws::Vector<OutputGroup>&& value) { SetOutputGroups(std::move(value)); return *this;}

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline JobTemplateSettings& AddOutputGroups(const OutputGroup& value) { m_outputGroupsHasBeenSet = true; m_outputGroups.push_back(value); return *this; }

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline JobTemplateSettings& AddOutputGroups(OutputGroup&& value) { m_outputGroupsHasBeenSet = true; m_outputGroups.push_back(std::move(value)); return *this; }


    /**
     * These settings control how the service handles timecodes throughout the job.
     * These settings don't affect input clipping.
     */
    inline const TimecodeConfig& GetTimecodeConfig() const{ return m_timecodeConfig; }

    /**
     * These settings control how the service handles timecodes throughout the job.
     * These settings don't affect input clipping.
     */
    inline bool TimecodeConfigHasBeenSet() const { return m_timecodeConfigHasBeenSet; }

    /**
     * These settings control how the service handles timecodes throughout the job.
     * These settings don't affect input clipping.
     */
    inline void SetTimecodeConfig(const TimecodeConfig& value) { m_timecodeConfigHasBeenSet = true; m_timecodeConfig = value; }

    /**
     * These settings control how the service handles timecodes throughout the job.
     * These settings don't affect input clipping.
     */
    inline void SetTimecodeConfig(TimecodeConfig&& value) { m_timecodeConfigHasBeenSet = true; m_timecodeConfig = std::move(value); }

    /**
     * These settings control how the service handles timecodes throughout the job.
     * These settings don't affect input clipping.
     */
    inline JobTemplateSettings& WithTimecodeConfig(const TimecodeConfig& value) { SetTimecodeConfig(value); return *this;}

    /**
     * These settings control how the service handles timecodes throughout the job.
     * These settings don't affect input clipping.
     */
    inline JobTemplateSettings& WithTimecodeConfig(TimecodeConfig&& value) { SetTimecodeConfig(std::move(value)); return *this;}


    /**
     * Insert user-defined custom ID3 metadata (id3) at timecodes (timecode) that you
     * specify. In each output that you want to include this metadata, you must set ID3
     * metadata (timedMetadata) to Passthrough (PASSTHROUGH).
     */
    inline const TimedMetadataInsertion& GetTimedMetadataInsertion() const{ return m_timedMetadataInsertion; }

    /**
     * Insert user-defined custom ID3 metadata (id3) at timecodes (timecode) that you
     * specify. In each output that you want to include this metadata, you must set ID3
     * metadata (timedMetadata) to Passthrough (PASSTHROUGH).
     */
    inline bool TimedMetadataInsertionHasBeenSet() const { return m_timedMetadataInsertionHasBeenSet; }

    /**
     * Insert user-defined custom ID3 metadata (id3) at timecodes (timecode) that you
     * specify. In each output that you want to include this metadata, you must set ID3
     * metadata (timedMetadata) to Passthrough (PASSTHROUGH).
     */
    inline void SetTimedMetadataInsertion(const TimedMetadataInsertion& value) { m_timedMetadataInsertionHasBeenSet = true; m_timedMetadataInsertion = value; }

    /**
     * Insert user-defined custom ID3 metadata (id3) at timecodes (timecode) that you
     * specify. In each output that you want to include this metadata, you must set ID3
     * metadata (timedMetadata) to Passthrough (PASSTHROUGH).
     */
    inline void SetTimedMetadataInsertion(TimedMetadataInsertion&& value) { m_timedMetadataInsertionHasBeenSet = true; m_timedMetadataInsertion = std::move(value); }

    /**
     * Insert user-defined custom ID3 metadata (id3) at timecodes (timecode) that you
     * specify. In each output that you want to include this metadata, you must set ID3
     * metadata (timedMetadata) to Passthrough (PASSTHROUGH).
     */
    inline JobTemplateSettings& WithTimedMetadataInsertion(const TimedMetadataInsertion& value) { SetTimedMetadataInsertion(value); return *this;}

    /**
     * Insert user-defined custom ID3 metadata (id3) at timecodes (timecode) that you
     * specify. In each output that you want to include this metadata, you must set ID3
     * metadata (timedMetadata) to Passthrough (PASSTHROUGH).
     */
    inline JobTemplateSettings& WithTimedMetadataInsertion(TimedMetadataInsertion&& value) { SetTimedMetadataInsertion(std::move(value)); return *this;}

  private:

    int m_adAvailOffset;
    bool m_adAvailOffsetHasBeenSet = false;

    AvailBlanking m_availBlanking;
    bool m_availBlankingHasBeenSet = false;

    EsamSettings m_esam;
    bool m_esamHasBeenSet = false;

    ExtendedDataServices m_extendedDataServices;
    bool m_extendedDataServicesHasBeenSet = false;

    Aws::Vector<InputTemplate> m_inputs;
    bool m_inputsHasBeenSet = false;

    KantarWatermarkSettings m_kantarWatermark;
    bool m_kantarWatermarkHasBeenSet = false;

    MotionImageInserter m_motionImageInserter;
    bool m_motionImageInserterHasBeenSet = false;

    NielsenConfiguration m_nielsenConfiguration;
    bool m_nielsenConfigurationHasBeenSet = false;

    NielsenNonLinearWatermarkSettings m_nielsenNonLinearWatermark;
    bool m_nielsenNonLinearWatermarkHasBeenSet = false;

    Aws::Vector<OutputGroup> m_outputGroups;
    bool m_outputGroupsHasBeenSet = false;

    TimecodeConfig m_timecodeConfig;
    bool m_timecodeConfigHasBeenSet = false;

    TimedMetadataInsertion m_timedMetadataInsertion;
    bool m_timedMetadataInsertionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
