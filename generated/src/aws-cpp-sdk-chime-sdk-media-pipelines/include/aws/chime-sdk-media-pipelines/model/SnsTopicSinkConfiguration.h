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
   * <p>The configuration settings for the SNS topic sink.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/SnsTopicSinkConfiguration">AWS
   * API Reference</a></p>
   */
  class SnsTopicSinkConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API SnsTopicSinkConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API SnsTopicSinkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API SnsTopicSinkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the SNS sink.</p>
     */
    inline const Aws::String& GetInsightsTarget() const{ return m_insightsTarget; }

    /**
     * <p>The ARN of the SNS sink.</p>
     */
    inline bool InsightsTargetHasBeenSet() const { return m_insightsTargetHasBeenSet; }

    /**
     * <p>The ARN of the SNS sink.</p>
     */
    inline void SetInsightsTarget(const Aws::String& value) { m_insightsTargetHasBeenSet = true; m_insightsTarget = value; }

    /**
     * <p>The ARN of the SNS sink.</p>
     */
    inline void SetInsightsTarget(Aws::String&& value) { m_insightsTargetHasBeenSet = true; m_insightsTarget = std::move(value); }

    /**
     * <p>The ARN of the SNS sink.</p>
     */
    inline void SetInsightsTarget(const char* value) { m_insightsTargetHasBeenSet = true; m_insightsTarget.assign(value); }

    /**
     * <p>The ARN of the SNS sink.</p>
     */
    inline SnsTopicSinkConfiguration& WithInsightsTarget(const Aws::String& value) { SetInsightsTarget(value); return *this;}

    /**
     * <p>The ARN of the SNS sink.</p>
     */
    inline SnsTopicSinkConfiguration& WithInsightsTarget(Aws::String&& value) { SetInsightsTarget(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SNS sink.</p>
     */
    inline SnsTopicSinkConfiguration& WithInsightsTarget(const char* value) { SetInsightsTarget(value); return *this;}

  private:

    Aws::String m_insightsTarget;
    bool m_insightsTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
