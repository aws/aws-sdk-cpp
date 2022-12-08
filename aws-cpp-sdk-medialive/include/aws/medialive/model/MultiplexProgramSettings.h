/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/PreferredChannelPipeline.h>
#include <aws/medialive/model/MultiplexProgramServiceDescriptor.h>
#include <aws/medialive/model/MultiplexVideoSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Multiplex Program settings configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexProgramSettings">AWS
   * API Reference</a></p>
   */
  class MultiplexProgramSettings
  {
  public:
    AWS_MEDIALIVE_API MultiplexProgramSettings();
    AWS_MEDIALIVE_API MultiplexProgramSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexProgramSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Indicates which pipeline is preferred by the multiplex for program ingest.
     */
    inline const PreferredChannelPipeline& GetPreferredChannelPipeline() const{ return m_preferredChannelPipeline; }

    /**
     * Indicates which pipeline is preferred by the multiplex for program ingest.
     */
    inline bool PreferredChannelPipelineHasBeenSet() const { return m_preferredChannelPipelineHasBeenSet; }

    /**
     * Indicates which pipeline is preferred by the multiplex for program ingest.
     */
    inline void SetPreferredChannelPipeline(const PreferredChannelPipeline& value) { m_preferredChannelPipelineHasBeenSet = true; m_preferredChannelPipeline = value; }

    /**
     * Indicates which pipeline is preferred by the multiplex for program ingest.
     */
    inline void SetPreferredChannelPipeline(PreferredChannelPipeline&& value) { m_preferredChannelPipelineHasBeenSet = true; m_preferredChannelPipeline = std::move(value); }

    /**
     * Indicates which pipeline is preferred by the multiplex for program ingest.
     */
    inline MultiplexProgramSettings& WithPreferredChannelPipeline(const PreferredChannelPipeline& value) { SetPreferredChannelPipeline(value); return *this;}

    /**
     * Indicates which pipeline is preferred by the multiplex for program ingest.
     */
    inline MultiplexProgramSettings& WithPreferredChannelPipeline(PreferredChannelPipeline&& value) { SetPreferredChannelPipeline(std::move(value)); return *this;}


    /**
     * Unique program number.
     */
    inline int GetProgramNumber() const{ return m_programNumber; }

    /**
     * Unique program number.
     */
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }

    /**
     * Unique program number.
     */
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }

    /**
     * Unique program number.
     */
    inline MultiplexProgramSettings& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}


    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline const MultiplexProgramServiceDescriptor& GetServiceDescriptor() const{ return m_serviceDescriptor; }

    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline bool ServiceDescriptorHasBeenSet() const { return m_serviceDescriptorHasBeenSet; }

    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline void SetServiceDescriptor(const MultiplexProgramServiceDescriptor& value) { m_serviceDescriptorHasBeenSet = true; m_serviceDescriptor = value; }

    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline void SetServiceDescriptor(MultiplexProgramServiceDescriptor&& value) { m_serviceDescriptorHasBeenSet = true; m_serviceDescriptor = std::move(value); }

    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline MultiplexProgramSettings& WithServiceDescriptor(const MultiplexProgramServiceDescriptor& value) { SetServiceDescriptor(value); return *this;}

    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline MultiplexProgramSettings& WithServiceDescriptor(MultiplexProgramServiceDescriptor&& value) { SetServiceDescriptor(std::move(value)); return *this;}


    /**
     * Program video settings configuration.
     */
    inline const MultiplexVideoSettings& GetVideoSettings() const{ return m_videoSettings; }

    /**
     * Program video settings configuration.
     */
    inline bool VideoSettingsHasBeenSet() const { return m_videoSettingsHasBeenSet; }

    /**
     * Program video settings configuration.
     */
    inline void SetVideoSettings(const MultiplexVideoSettings& value) { m_videoSettingsHasBeenSet = true; m_videoSettings = value; }

    /**
     * Program video settings configuration.
     */
    inline void SetVideoSettings(MultiplexVideoSettings&& value) { m_videoSettingsHasBeenSet = true; m_videoSettings = std::move(value); }

    /**
     * Program video settings configuration.
     */
    inline MultiplexProgramSettings& WithVideoSettings(const MultiplexVideoSettings& value) { SetVideoSettings(value); return *this;}

    /**
     * Program video settings configuration.
     */
    inline MultiplexProgramSettings& WithVideoSettings(MultiplexVideoSettings&& value) { SetVideoSettings(std::move(value)); return *this;}

  private:

    PreferredChannelPipeline m_preferredChannelPipeline;
    bool m_preferredChannelPipelineHasBeenSet = false;

    int m_programNumber;
    bool m_programNumberHasBeenSet = false;

    MultiplexProgramServiceDescriptor m_serviceDescriptor;
    bool m_serviceDescriptorHasBeenSet = false;

    MultiplexVideoSettings m_videoSettings;
    bool m_videoSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
