﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/SentimentType.h>
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
   * <p>A structure that contains the configuration settings for a sentiment analysis
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/SentimentConfiguration">AWS
   * API Reference</a></p>
   */
  class SentimentConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API SentimentConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API SentimentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API SentimentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule in the sentiment configuration.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }
    inline SentimentConfiguration& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}
    inline SentimentConfiguration& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}
    inline SentimentConfiguration& WithRuleName(const char* value) { SetRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of sentiment, <code>POSITIVE</code>, <code>NEGATIVE</code>, or
     * <code>NEUTRAL</code>.</p>
     */
    inline const SentimentType& GetSentimentType() const{ return m_sentimentType; }
    inline bool SentimentTypeHasBeenSet() const { return m_sentimentTypeHasBeenSet; }
    inline void SetSentimentType(const SentimentType& value) { m_sentimentTypeHasBeenSet = true; m_sentimentType = value; }
    inline void SetSentimentType(SentimentType&& value) { m_sentimentTypeHasBeenSet = true; m_sentimentType = std::move(value); }
    inline SentimentConfiguration& WithSentimentType(const SentimentType& value) { SetSentimentType(value); return *this;}
    inline SentimentConfiguration& WithSentimentType(SentimentType&& value) { SetSentimentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the analysis interval.</p>
     */
    inline int GetTimePeriod() const{ return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    inline void SetTimePeriod(int value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }
    inline SentimentConfiguration& WithTimePeriod(int value) { SetTimePeriod(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    SentimentType m_sentimentType;
    bool m_sentimentTypeHasBeenSet = false;

    int m_timePeriod;
    bool m_timePeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
