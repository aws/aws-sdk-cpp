/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/StreamChannelDefinition.h>
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
   * <p>The configuration settings for a stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/StreamConfiguration">AWS
   * API Reference</a></p>
   */
  class StreamConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API StreamConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API StreamConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API StreamConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the stream.</p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    StreamConfiguration& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the fragment to begin processing.</p>
     */
    inline const Aws::String& GetFragmentNumber() const { return m_fragmentNumber; }
    inline bool FragmentNumberHasBeenSet() const { return m_fragmentNumberHasBeenSet; }
    template<typename FragmentNumberT = Aws::String>
    void SetFragmentNumber(FragmentNumberT&& value) { m_fragmentNumberHasBeenSet = true; m_fragmentNumber = std::forward<FragmentNumberT>(value); }
    template<typename FragmentNumberT = Aws::String>
    StreamConfiguration& WithFragmentNumber(FragmentNumberT&& value) { SetFragmentNumber(std::forward<FragmentNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming channel definition in the stream configuration.</p>
     */
    inline const StreamChannelDefinition& GetStreamChannelDefinition() const { return m_streamChannelDefinition; }
    inline bool StreamChannelDefinitionHasBeenSet() const { return m_streamChannelDefinitionHasBeenSet; }
    template<typename StreamChannelDefinitionT = StreamChannelDefinition>
    void SetStreamChannelDefinition(StreamChannelDefinitionT&& value) { m_streamChannelDefinitionHasBeenSet = true; m_streamChannelDefinition = std::forward<StreamChannelDefinitionT>(value); }
    template<typename StreamChannelDefinitionT = StreamChannelDefinition>
    StreamConfiguration& WithStreamChannelDefinition(StreamChannelDefinitionT&& value) { SetStreamChannelDefinition(std::forward<StreamChannelDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    Aws::String m_fragmentNumber;
    bool m_fragmentNumberHasBeenSet = false;

    StreamChannelDefinition m_streamChannelDefinition;
    bool m_streamChannelDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
