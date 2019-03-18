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
  class AWS_SES_API ReputationOptions
  {
  public:
    ReputationOptions();
    ReputationOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReputationOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Describes whether email sending is enabled or disabled for the configuration
     * set. If the value is <code>true</code>, then Amazon SES will send emails that
     * use the configuration set. If the value is <code>false</code>, Amazon SES will
     * not send emails that use the configuration set. The default value is
     * <code>true</code>. You can change this setting using
     * <a>UpdateConfigurationSetSendingEnabled</a>.</p>
     */
    inline bool GetSendingEnabled() const{ return m_sendingEnabled; }

    /**
     * <p>Describes whether email sending is enabled or disabled for the configuration
     * set. If the value is <code>true</code>, then Amazon SES will send emails that
     * use the configuration set. If the value is <code>false</code>, Amazon SES will
     * not send emails that use the configuration set. The default value is
     * <code>true</code>. You can change this setting using
     * <a>UpdateConfigurationSetSendingEnabled</a>.</p>
     */
    inline bool SendingEnabledHasBeenSet() const { return m_sendingEnabledHasBeenSet; }

    /**
     * <p>Describes whether email sending is enabled or disabled for the configuration
     * set. If the value is <code>true</code>, then Amazon SES will send emails that
     * use the configuration set. If the value is <code>false</code>, Amazon SES will
     * not send emails that use the configuration set. The default value is
     * <code>true</code>. You can change this setting using
     * <a>UpdateConfigurationSetSendingEnabled</a>.</p>
     */
    inline void SetSendingEnabled(bool value) { m_sendingEnabledHasBeenSet = true; m_sendingEnabled = value; }

    /**
     * <p>Describes whether email sending is enabled or disabled for the configuration
     * set. If the value is <code>true</code>, then Amazon SES will send emails that
     * use the configuration set. If the value is <code>false</code>, Amazon SES will
     * not send emails that use the configuration set. The default value is
     * <code>true</code>. You can change this setting using
     * <a>UpdateConfigurationSetSendingEnabled</a>.</p>
     */
    inline ReputationOptions& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}


    /**
     * <p>Describes whether or not Amazon SES publishes reputation metrics for the
     * configuration set, such as bounce and complaint rates, to Amazon CloudWatch.</p>
     * <p>If the value is <code>true</code>, reputation metrics are published. If the
     * value is <code>false</code>, reputation metrics are not published. The default
     * value is <code>false</code>.</p>
     */
    inline bool GetReputationMetricsEnabled() const{ return m_reputationMetricsEnabled; }

    /**
     * <p>Describes whether or not Amazon SES publishes reputation metrics for the
     * configuration set, such as bounce and complaint rates, to Amazon CloudWatch.</p>
     * <p>If the value is <code>true</code>, reputation metrics are published. If the
     * value is <code>false</code>, reputation metrics are not published. The default
     * value is <code>false</code>.</p>
     */
    inline bool ReputationMetricsEnabledHasBeenSet() const { return m_reputationMetricsEnabledHasBeenSet; }

    /**
     * <p>Describes whether or not Amazon SES publishes reputation metrics for the
     * configuration set, such as bounce and complaint rates, to Amazon CloudWatch.</p>
     * <p>If the value is <code>true</code>, reputation metrics are published. If the
     * value is <code>false</code>, reputation metrics are not published. The default
     * value is <code>false</code>.</p>
     */
    inline void SetReputationMetricsEnabled(bool value) { m_reputationMetricsEnabledHasBeenSet = true; m_reputationMetricsEnabled = value; }

    /**
     * <p>Describes whether or not Amazon SES publishes reputation metrics for the
     * configuration set, such as bounce and complaint rates, to Amazon CloudWatch.</p>
     * <p>If the value is <code>true</code>, reputation metrics are published. If the
     * value is <code>false</code>, reputation metrics are not published. The default
     * value is <code>false</code>.</p>
     */
    inline ReputationOptions& WithReputationMetricsEnabled(bool value) { SetReputationMetricsEnabled(value); return *this;}


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
    inline const Aws::Utils::DateTime& GetLastFreshStart() const{ return m_lastFreshStart; }

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
    inline bool LastFreshStartHasBeenSet() const { return m_lastFreshStartHasBeenSet; }

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
    inline void SetLastFreshStart(const Aws::Utils::DateTime& value) { m_lastFreshStartHasBeenSet = true; m_lastFreshStart = value; }

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
    inline void SetLastFreshStart(Aws::Utils::DateTime&& value) { m_lastFreshStartHasBeenSet = true; m_lastFreshStart = std::move(value); }

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
    inline ReputationOptions& WithLastFreshStart(const Aws::Utils::DateTime& value) { SetLastFreshStart(value); return *this;}

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
    inline ReputationOptions& WithLastFreshStart(Aws::Utils::DateTime&& value) { SetLastFreshStart(std::move(value)); return *this;}

  private:

    bool m_sendingEnabled;
    bool m_sendingEnabledHasBeenSet;

    bool m_reputationMetricsEnabled;
    bool m_reputationMetricsEnabledHasBeenSet;

    Aws::Utils::DateTime m_lastFreshStart;
    bool m_lastFreshStartHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
