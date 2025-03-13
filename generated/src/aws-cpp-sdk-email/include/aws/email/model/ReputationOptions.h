/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Contains information about the reputation settings for a configuration
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReputationOptions">AWS
   * API Reference</a></p>
   */
  class ReputationOptions
  {
  public:
    AWS_SES_API ReputationOptions() = default;
    AWS_SES_API ReputationOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API ReputationOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Describes whether email sending is enabled or disabled for the configuration
     * set. If the value is <code>true</code>, then Amazon SES sends emails that use
     * the configuration set. If the value is <code>false</code>, Amazon SES does not
     * send emails that use the configuration set. The default value is
     * <code>true</code>. You can change this setting using
     * <a>UpdateConfigurationSetSendingEnabled</a>.</p>
     */
    inline bool GetSendingEnabled() const { return m_sendingEnabled; }
    inline bool SendingEnabledHasBeenSet() const { return m_sendingEnabledHasBeenSet; }
    inline void SetSendingEnabled(bool value) { m_sendingEnabledHasBeenSet = true; m_sendingEnabled = value; }
    inline ReputationOptions& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether or not Amazon SES publishes reputation metrics for the
     * configuration set, such as bounce and complaint rates, to Amazon CloudWatch.</p>
     * <p>If the value is <code>true</code>, reputation metrics are published. If the
     * value is <code>false</code>, reputation metrics are not published. The default
     * value is <code>false</code>.</p>
     */
    inline bool GetReputationMetricsEnabled() const { return m_reputationMetricsEnabled; }
    inline bool ReputationMetricsEnabledHasBeenSet() const { return m_reputationMetricsEnabledHasBeenSet; }
    inline void SetReputationMetricsEnabled(bool value) { m_reputationMetricsEnabledHasBeenSet = true; m_reputationMetricsEnabled = value; }
    inline ReputationOptions& WithReputationMetricsEnabled(bool value) { SetReputationMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the reputation metrics for the configuration set
     * were last reset. Resetting these metrics is known as a <i>fresh start</i>.</p>
     * <p>When you disable email sending for a configuration set using
     * <a>UpdateConfigurationSetSendingEnabled</a> and later re-enable it, the
     * reputation metrics for the configuration set (but not for the entire Amazon SES
     * account) are reset.</p> <p>If email sending for the configuration set has never
     * been disabled and later re-enabled, the value of this attribute is
     * <code>null</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastFreshStart() const { return m_lastFreshStart; }
    inline bool LastFreshStartHasBeenSet() const { return m_lastFreshStartHasBeenSet; }
    template<typename LastFreshStartT = Aws::Utils::DateTime>
    void SetLastFreshStart(LastFreshStartT&& value) { m_lastFreshStartHasBeenSet = true; m_lastFreshStart = std::forward<LastFreshStartT>(value); }
    template<typename LastFreshStartT = Aws::Utils::DateTime>
    ReputationOptions& WithLastFreshStart(LastFreshStartT&& value) { SetLastFreshStart(std::forward<LastFreshStartT>(value)); return *this;}
    ///@}
  private:

    bool m_sendingEnabled{false};
    bool m_sendingEnabledHasBeenSet = false;

    bool m_reputationMetricsEnabled{false};
    bool m_reputationMetricsEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_lastFreshStart{};
    bool m_lastFreshStartHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
