﻿/**
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
   * <p>The configuration settings for the SQS sink.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/SqsQueueSinkConfiguration">AWS
   * API Reference</a></p>
   */
  class SqsQueueSinkConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API SqsQueueSinkConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API SqsQueueSinkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API SqsQueueSinkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the SQS sink.</p>
     */
    inline const Aws::String& GetInsightsTarget() const { return m_insightsTarget; }
    inline bool InsightsTargetHasBeenSet() const { return m_insightsTargetHasBeenSet; }
    template<typename InsightsTargetT = Aws::String>
    void SetInsightsTarget(InsightsTargetT&& value) { m_insightsTargetHasBeenSet = true; m_insightsTarget = std::forward<InsightsTargetT>(value); }
    template<typename InsightsTargetT = Aws::String>
    SqsQueueSinkConfiguration& WithInsightsTarget(InsightsTargetT&& value) { SetInsightsTarget(std::forward<InsightsTargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_insightsTarget;
    bool m_insightsTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
