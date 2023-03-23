/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-media-pipelines/model/RealTimeAlertRule.h>
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
   * <p>A structure that contains the configuration settings for real-time
   * alerts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/RealTimeAlertConfiguration">AWS
   * API Reference</a></p>
   */
  class RealTimeAlertConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API RealTimeAlertConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API RealTimeAlertConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API RealTimeAlertConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Turns off real-time alerts.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>Turns off real-time alerts.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>Turns off real-time alerts.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>Turns off real-time alerts.</p>
     */
    inline RealTimeAlertConfiguration& WithDisabled(bool value) { SetDisabled(value); return *this;}


    /**
     * <p>The rules in the alert. Rules specify the words or phrases that you want to
     * be notified about.</p>
     */
    inline const Aws::Vector<RealTimeAlertRule>& GetRules() const{ return m_rules; }

    /**
     * <p>The rules in the alert. Rules specify the words or phrases that you want to
     * be notified about.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The rules in the alert. Rules specify the words or phrases that you want to
     * be notified about.</p>
     */
    inline void SetRules(const Aws::Vector<RealTimeAlertRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The rules in the alert. Rules specify the words or phrases that you want to
     * be notified about.</p>
     */
    inline void SetRules(Aws::Vector<RealTimeAlertRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The rules in the alert. Rules specify the words or phrases that you want to
     * be notified about.</p>
     */
    inline RealTimeAlertConfiguration& WithRules(const Aws::Vector<RealTimeAlertRule>& value) { SetRules(value); return *this;}

    /**
     * <p>The rules in the alert. Rules specify the words or phrases that you want to
     * be notified about.</p>
     */
    inline RealTimeAlertConfiguration& WithRules(Aws::Vector<RealTimeAlertRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The rules in the alert. Rules specify the words or phrases that you want to
     * be notified about.</p>
     */
    inline RealTimeAlertConfiguration& AddRules(const RealTimeAlertRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The rules in the alert. Rules specify the words or phrases that you want to
     * be notified about.</p>
     */
    inline RealTimeAlertConfiguration& AddRules(RealTimeAlertRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    bool m_disabled;
    bool m_disabledHasBeenSet = false;

    Aws::Vector<RealTimeAlertRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
