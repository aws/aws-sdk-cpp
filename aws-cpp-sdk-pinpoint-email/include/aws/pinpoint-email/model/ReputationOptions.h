/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Enable or disable collection of reputation metrics for emails that you send
   * using this configuration set in the current AWS Region. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ReputationOptions">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API ReputationOptions
  {
  public:
    ReputationOptions();
    ReputationOptions(Aws::Utils::Json::JsonView jsonValue);
    ReputationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If <code>true</code>, tracking of reputation metrics is enabled for the
     * configuration set. If <code>false</code>, tracking of reputation metrics is
     * disabled for the configuration set.</p>
     */
    inline bool GetReputationMetricsEnabled() const{ return m_reputationMetricsEnabled; }

    /**
     * <p>If <code>true</code>, tracking of reputation metrics is enabled for the
     * configuration set. If <code>false</code>, tracking of reputation metrics is
     * disabled for the configuration set.</p>
     */
    inline bool ReputationMetricsEnabledHasBeenSet() const { return m_reputationMetricsEnabledHasBeenSet; }

    /**
     * <p>If <code>true</code>, tracking of reputation metrics is enabled for the
     * configuration set. If <code>false</code>, tracking of reputation metrics is
     * disabled for the configuration set.</p>
     */
    inline void SetReputationMetricsEnabled(bool value) { m_reputationMetricsEnabledHasBeenSet = true; m_reputationMetricsEnabled = value; }

    /**
     * <p>If <code>true</code>, tracking of reputation metrics is enabled for the
     * configuration set. If <code>false</code>, tracking of reputation metrics is
     * disabled for the configuration set.</p>
     */
    inline ReputationOptions& WithReputationMetricsEnabled(bool value) { SetReputationMetricsEnabled(value); return *this;}


    /**
     * <p>The date and time (in Unix time) when the reputation metrics were last given
     * a fresh start. When your account is given a fresh start, your reputation metrics
     * are calculated starting from the date of the fresh start.</p>
     */
    inline const Aws::Utils::DateTime& GetLastFreshStart() const{ return m_lastFreshStart; }

    /**
     * <p>The date and time (in Unix time) when the reputation metrics were last given
     * a fresh start. When your account is given a fresh start, your reputation metrics
     * are calculated starting from the date of the fresh start.</p>
     */
    inline bool LastFreshStartHasBeenSet() const { return m_lastFreshStartHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) when the reputation metrics were last given
     * a fresh start. When your account is given a fresh start, your reputation metrics
     * are calculated starting from the date of the fresh start.</p>
     */
    inline void SetLastFreshStart(const Aws::Utils::DateTime& value) { m_lastFreshStartHasBeenSet = true; m_lastFreshStart = value; }

    /**
     * <p>The date and time (in Unix time) when the reputation metrics were last given
     * a fresh start. When your account is given a fresh start, your reputation metrics
     * are calculated starting from the date of the fresh start.</p>
     */
    inline void SetLastFreshStart(Aws::Utils::DateTime&& value) { m_lastFreshStartHasBeenSet = true; m_lastFreshStart = std::move(value); }

    /**
     * <p>The date and time (in Unix time) when the reputation metrics were last given
     * a fresh start. When your account is given a fresh start, your reputation metrics
     * are calculated starting from the date of the fresh start.</p>
     */
    inline ReputationOptions& WithLastFreshStart(const Aws::Utils::DateTime& value) { SetLastFreshStart(value); return *this;}

    /**
     * <p>The date and time (in Unix time) when the reputation metrics were last given
     * a fresh start. When your account is given a fresh start, your reputation metrics
     * are calculated starting from the date of the fresh start.</p>
     */
    inline ReputationOptions& WithLastFreshStart(Aws::Utils::DateTime&& value) { SetLastFreshStart(std::move(value)); return *this;}

  private:

    bool m_reputationMetricsEnabled;
    bool m_reputationMetricsEnabledHasBeenSet;

    Aws::Utils::DateTime m_lastFreshStart;
    bool m_lastFreshStartHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
