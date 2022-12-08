/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>Enable or disable collection of reputation metrics for emails that you send
   * using this configuration set in the current Amazon Web Services Region.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ReputationOptions">AWS
   * API Reference</a></p>
   */
  class ReputationOptions
  {
  public:
    AWS_SESV2_API ReputationOptions();
    AWS_SESV2_API ReputationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ReputationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_reputationMetricsEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_lastFreshStart;
    bool m_lastFreshStartHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
