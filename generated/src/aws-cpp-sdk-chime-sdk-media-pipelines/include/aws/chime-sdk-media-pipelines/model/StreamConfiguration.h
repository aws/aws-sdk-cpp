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
    AWS_CHIMESDKMEDIAPIPELINES_API StreamConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API StreamConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API StreamConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the stream.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline StreamConfiguration& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The ARN of the stream.</p>
     */
    inline StreamConfiguration& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the stream.</p>
     */
    inline StreamConfiguration& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>The unique identifier of the fragment to begin processing.</p>
     */
    inline const Aws::String& GetFragmentNumber() const{ return m_fragmentNumber; }

    /**
     * <p>The unique identifier of the fragment to begin processing.</p>
     */
    inline bool FragmentNumberHasBeenSet() const { return m_fragmentNumberHasBeenSet; }

    /**
     * <p>The unique identifier of the fragment to begin processing.</p>
     */
    inline void SetFragmentNumber(const Aws::String& value) { m_fragmentNumberHasBeenSet = true; m_fragmentNumber = value; }

    /**
     * <p>The unique identifier of the fragment to begin processing.</p>
     */
    inline void SetFragmentNumber(Aws::String&& value) { m_fragmentNumberHasBeenSet = true; m_fragmentNumber = std::move(value); }

    /**
     * <p>The unique identifier of the fragment to begin processing.</p>
     */
    inline void SetFragmentNumber(const char* value) { m_fragmentNumberHasBeenSet = true; m_fragmentNumber.assign(value); }

    /**
     * <p>The unique identifier of the fragment to begin processing.</p>
     */
    inline StreamConfiguration& WithFragmentNumber(const Aws::String& value) { SetFragmentNumber(value); return *this;}

    /**
     * <p>The unique identifier of the fragment to begin processing.</p>
     */
    inline StreamConfiguration& WithFragmentNumber(Aws::String&& value) { SetFragmentNumber(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the fragment to begin processing.</p>
     */
    inline StreamConfiguration& WithFragmentNumber(const char* value) { SetFragmentNumber(value); return *this;}


    /**
     * <p>The streaming channel definition in the stream configuration.</p>
     */
    inline const StreamChannelDefinition& GetStreamChannelDefinition() const{ return m_streamChannelDefinition; }

    /**
     * <p>The streaming channel definition in the stream configuration.</p>
     */
    inline bool StreamChannelDefinitionHasBeenSet() const { return m_streamChannelDefinitionHasBeenSet; }

    /**
     * <p>The streaming channel definition in the stream configuration.</p>
     */
    inline void SetStreamChannelDefinition(const StreamChannelDefinition& value) { m_streamChannelDefinitionHasBeenSet = true; m_streamChannelDefinition = value; }

    /**
     * <p>The streaming channel definition in the stream configuration.</p>
     */
    inline void SetStreamChannelDefinition(StreamChannelDefinition&& value) { m_streamChannelDefinitionHasBeenSet = true; m_streamChannelDefinition = std::move(value); }

    /**
     * <p>The streaming channel definition in the stream configuration.</p>
     */
    inline StreamConfiguration& WithStreamChannelDefinition(const StreamChannelDefinition& value) { SetStreamChannelDefinition(value); return *this;}

    /**
     * <p>The streaming channel definition in the stream configuration.</p>
     */
    inline StreamConfiguration& WithStreamChannelDefinition(StreamChannelDefinition&& value) { SetStreamChannelDefinition(std::move(value)); return *this;}

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
