/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>

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
namespace XRay
{
namespace Model
{

  /**
   * <p>The structure containing configurations related to insights.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/InsightsConfiguration">AWS
   * API Reference</a></p>
   */
  class InsightsConfiguration
  {
  public:
    AWS_XRAY_API InsightsConfiguration();
    AWS_XRAY_API InsightsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API InsightsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set the InsightsEnabled value to true to enable insights or false to disable
     * insights.</p>
     */
    inline bool GetInsightsEnabled() const{ return m_insightsEnabled; }

    /**
     * <p>Set the InsightsEnabled value to true to enable insights or false to disable
     * insights.</p>
     */
    inline bool InsightsEnabledHasBeenSet() const { return m_insightsEnabledHasBeenSet; }

    /**
     * <p>Set the InsightsEnabled value to true to enable insights or false to disable
     * insights.</p>
     */
    inline void SetInsightsEnabled(bool value) { m_insightsEnabledHasBeenSet = true; m_insightsEnabled = value; }

    /**
     * <p>Set the InsightsEnabled value to true to enable insights or false to disable
     * insights.</p>
     */
    inline InsightsConfiguration& WithInsightsEnabled(bool value) { SetInsightsEnabled(value); return *this;}


    /**
     * <p>Set the NotificationsEnabled value to true to enable insights notifications.
     * Notifications can only be enabled on a group with InsightsEnabled set to
     * true.</p>
     */
    inline bool GetNotificationsEnabled() const{ return m_notificationsEnabled; }

    /**
     * <p>Set the NotificationsEnabled value to true to enable insights notifications.
     * Notifications can only be enabled on a group with InsightsEnabled set to
     * true.</p>
     */
    inline bool NotificationsEnabledHasBeenSet() const { return m_notificationsEnabledHasBeenSet; }

    /**
     * <p>Set the NotificationsEnabled value to true to enable insights notifications.
     * Notifications can only be enabled on a group with InsightsEnabled set to
     * true.</p>
     */
    inline void SetNotificationsEnabled(bool value) { m_notificationsEnabledHasBeenSet = true; m_notificationsEnabled = value; }

    /**
     * <p>Set the NotificationsEnabled value to true to enable insights notifications.
     * Notifications can only be enabled on a group with InsightsEnabled set to
     * true.</p>
     */
    inline InsightsConfiguration& WithNotificationsEnabled(bool value) { SetNotificationsEnabled(value); return *this;}

  private:

    bool m_insightsEnabled;
    bool m_insightsEnabledHasBeenSet = false;

    bool m_notificationsEnabled;
    bool m_notificationsEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
