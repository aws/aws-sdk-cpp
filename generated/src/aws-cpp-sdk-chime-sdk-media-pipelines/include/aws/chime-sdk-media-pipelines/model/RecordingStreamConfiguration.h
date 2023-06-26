/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A structure that holds the settings for recording media.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/RecordingStreamConfiguration">AWS
   * API Reference</a></p>
   */
  class RecordingStreamConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API RecordingStreamConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API RecordingStreamConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API RecordingStreamConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the recording stream.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The ARN of the recording stream.</p>
     */
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }

    /**
     * <p>The ARN of the recording stream.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }

    /**
     * <p>The ARN of the recording stream.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }

    /**
     * <p>The ARN of the recording stream.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }

    /**
     * <p>The ARN of the recording stream.</p>
     */
    inline RecordingStreamConfiguration& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The ARN of the recording stream.</p>
     */
    inline RecordingStreamConfiguration& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the recording stream.</p>
     */
    inline RecordingStreamConfiguration& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}

  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
