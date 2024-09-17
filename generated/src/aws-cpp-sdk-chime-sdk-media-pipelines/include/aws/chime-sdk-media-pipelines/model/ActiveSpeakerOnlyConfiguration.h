/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ActiveSpeakerPosition.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>Defines the configuration for an <code>ActiveSpeakerOnly</code> video
   * tile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ActiveSpeakerOnlyConfiguration">AWS
   * API Reference</a></p>
   */
  class ActiveSpeakerOnlyConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ActiveSpeakerOnlyConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API ActiveSpeakerOnlyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ActiveSpeakerOnlyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The position of the <code>ActiveSpeakerOnly</code> video tile.</p>
     */
    inline const ActiveSpeakerPosition& GetActiveSpeakerPosition() const{ return m_activeSpeakerPosition; }
    inline bool ActiveSpeakerPositionHasBeenSet() const { return m_activeSpeakerPositionHasBeenSet; }
    inline void SetActiveSpeakerPosition(const ActiveSpeakerPosition& value) { m_activeSpeakerPositionHasBeenSet = true; m_activeSpeakerPosition = value; }
    inline void SetActiveSpeakerPosition(ActiveSpeakerPosition&& value) { m_activeSpeakerPositionHasBeenSet = true; m_activeSpeakerPosition = std::move(value); }
    inline ActiveSpeakerOnlyConfiguration& WithActiveSpeakerPosition(const ActiveSpeakerPosition& value) { SetActiveSpeakerPosition(value); return *this;}
    inline ActiveSpeakerOnlyConfiguration& WithActiveSpeakerPosition(ActiveSpeakerPosition&& value) { SetActiveSpeakerPosition(std::move(value)); return *this;}
    ///@}
  private:

    ActiveSpeakerPosition m_activeSpeakerPosition;
    bool m_activeSpeakerPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
