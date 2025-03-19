/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-media-pipelines/model/ChannelDefinition.h>
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
   * <p>Defines a streaming channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/StreamChannelDefinition">AWS
   * API Reference</a></p>
   */
  class StreamChannelDefinition
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API StreamChannelDefinition() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API StreamChannelDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API StreamChannelDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of channels in a streaming channel.</p>
     */
    inline int GetNumberOfChannels() const { return m_numberOfChannels; }
    inline bool NumberOfChannelsHasBeenSet() const { return m_numberOfChannelsHasBeenSet; }
    inline void SetNumberOfChannels(int value) { m_numberOfChannelsHasBeenSet = true; m_numberOfChannels = value; }
    inline StreamChannelDefinition& WithNumberOfChannels(int value) { SetNumberOfChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definitions of the channels in a streaming channel.</p>
     */
    inline const Aws::Vector<ChannelDefinition>& GetChannelDefinitions() const { return m_channelDefinitions; }
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }
    template<typename ChannelDefinitionsT = Aws::Vector<ChannelDefinition>>
    void SetChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::forward<ChannelDefinitionsT>(value); }
    template<typename ChannelDefinitionsT = Aws::Vector<ChannelDefinition>>
    StreamChannelDefinition& WithChannelDefinitions(ChannelDefinitionsT&& value) { SetChannelDefinitions(std::forward<ChannelDefinitionsT>(value)); return *this;}
    template<typename ChannelDefinitionsT = ChannelDefinition>
    StreamChannelDefinition& AddChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.emplace_back(std::forward<ChannelDefinitionsT>(value)); return *this; }
    ///@}
  private:

    int m_numberOfChannels{0};
    bool m_numberOfChannelsHasBeenSet = false;

    Aws::Vector<ChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
