/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/rum/model/AppMonitorConfiguration.h>
#include <aws/rum/model/CustomEvents.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

  /**
   */
  class UpdateAppMonitorRequest : public CloudWatchRUMRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API UpdateAppMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAppMonitor"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;


    /**
     * <p>A structure that contains much of the configuration data for the app monitor.
     * If you are using Amazon Cognito for authorization, you must include this
     * structure in your request, and it must include the ID of the Amazon Cognito
     * identity pool to use for authorization. If you don't include
     * <code>AppMonitorConfiguration</code>, you must set up your own authorization
     * method. For more information, see <a
     * href="https://docs.aws.amazon.com/monitoring/CloudWatch-RUM-get-started-authorization.html">Authorize
     * your application to send data to Amazon Web Services</a>.</p>
     */
    inline const AppMonitorConfiguration& GetAppMonitorConfiguration() const{ return m_appMonitorConfiguration; }

    /**
     * <p>A structure that contains much of the configuration data for the app monitor.
     * If you are using Amazon Cognito for authorization, you must include this
     * structure in your request, and it must include the ID of the Amazon Cognito
     * identity pool to use for authorization. If you don't include
     * <code>AppMonitorConfiguration</code>, you must set up your own authorization
     * method. For more information, see <a
     * href="https://docs.aws.amazon.com/monitoring/CloudWatch-RUM-get-started-authorization.html">Authorize
     * your application to send data to Amazon Web Services</a>.</p>
     */
    inline bool AppMonitorConfigurationHasBeenSet() const { return m_appMonitorConfigurationHasBeenSet; }

    /**
     * <p>A structure that contains much of the configuration data for the app monitor.
     * If you are using Amazon Cognito for authorization, you must include this
     * structure in your request, and it must include the ID of the Amazon Cognito
     * identity pool to use for authorization. If you don't include
     * <code>AppMonitorConfiguration</code>, you must set up your own authorization
     * method. For more information, see <a
     * href="https://docs.aws.amazon.com/monitoring/CloudWatch-RUM-get-started-authorization.html">Authorize
     * your application to send data to Amazon Web Services</a>.</p>
     */
    inline void SetAppMonitorConfiguration(const AppMonitorConfiguration& value) { m_appMonitorConfigurationHasBeenSet = true; m_appMonitorConfiguration = value; }

    /**
     * <p>A structure that contains much of the configuration data for the app monitor.
     * If you are using Amazon Cognito for authorization, you must include this
     * structure in your request, and it must include the ID of the Amazon Cognito
     * identity pool to use for authorization. If you don't include
     * <code>AppMonitorConfiguration</code>, you must set up your own authorization
     * method. For more information, see <a
     * href="https://docs.aws.amazon.com/monitoring/CloudWatch-RUM-get-started-authorization.html">Authorize
     * your application to send data to Amazon Web Services</a>.</p>
     */
    inline void SetAppMonitorConfiguration(AppMonitorConfiguration&& value) { m_appMonitorConfigurationHasBeenSet = true; m_appMonitorConfiguration = std::move(value); }

    /**
     * <p>A structure that contains much of the configuration data for the app monitor.
     * If you are using Amazon Cognito for authorization, you must include this
     * structure in your request, and it must include the ID of the Amazon Cognito
     * identity pool to use for authorization. If you don't include
     * <code>AppMonitorConfiguration</code>, you must set up your own authorization
     * method. For more information, see <a
     * href="https://docs.aws.amazon.com/monitoring/CloudWatch-RUM-get-started-authorization.html">Authorize
     * your application to send data to Amazon Web Services</a>.</p>
     */
    inline UpdateAppMonitorRequest& WithAppMonitorConfiguration(const AppMonitorConfiguration& value) { SetAppMonitorConfiguration(value); return *this;}

    /**
     * <p>A structure that contains much of the configuration data for the app monitor.
     * If you are using Amazon Cognito for authorization, you must include this
     * structure in your request, and it must include the ID of the Amazon Cognito
     * identity pool to use for authorization. If you don't include
     * <code>AppMonitorConfiguration</code>, you must set up your own authorization
     * method. For more information, see <a
     * href="https://docs.aws.amazon.com/monitoring/CloudWatch-RUM-get-started-authorization.html">Authorize
     * your application to send data to Amazon Web Services</a>.</p>
     */
    inline UpdateAppMonitorRequest& WithAppMonitorConfiguration(AppMonitorConfiguration&& value) { SetAppMonitorConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events. The default is for custom events to be <code>DISABLED</code>.</p>
     * <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline const CustomEvents& GetCustomEvents() const{ return m_customEvents; }

    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events. The default is for custom events to be <code>DISABLED</code>.</p>
     * <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline bool CustomEventsHasBeenSet() const { return m_customEventsHasBeenSet; }

    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events. The default is for custom events to be <code>DISABLED</code>.</p>
     * <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline void SetCustomEvents(const CustomEvents& value) { m_customEventsHasBeenSet = true; m_customEvents = value; }

    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events. The default is for custom events to be <code>DISABLED</code>.</p>
     * <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline void SetCustomEvents(CustomEvents&& value) { m_customEventsHasBeenSet = true; m_customEvents = std::move(value); }

    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events. The default is for custom events to be <code>DISABLED</code>.</p>
     * <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline UpdateAppMonitorRequest& WithCustomEvents(const CustomEvents& value) { SetCustomEvents(value); return *this;}

    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events. The default is for custom events to be <code>DISABLED</code>.</p>
     * <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline UpdateAppMonitorRequest& WithCustomEvents(CustomEvents&& value) { SetCustomEvents(std::move(value)); return *this;}


    /**
     * <p>Data collected by RUM is kept by RUM for 30 days and then deleted. This
     * parameter specifies whether RUM sends a copy of this telemetry data to Amazon
     * CloudWatch Logs in your account. This enables you to keep the telemetry data for
     * more than 30 days, but it does incur Amazon CloudWatch Logs charges.</p>
     */
    inline bool GetCwLogEnabled() const{ return m_cwLogEnabled; }

    /**
     * <p>Data collected by RUM is kept by RUM for 30 days and then deleted. This
     * parameter specifies whether RUM sends a copy of this telemetry data to Amazon
     * CloudWatch Logs in your account. This enables you to keep the telemetry data for
     * more than 30 days, but it does incur Amazon CloudWatch Logs charges.</p>
     */
    inline bool CwLogEnabledHasBeenSet() const { return m_cwLogEnabledHasBeenSet; }

    /**
     * <p>Data collected by RUM is kept by RUM for 30 days and then deleted. This
     * parameter specifies whether RUM sends a copy of this telemetry data to Amazon
     * CloudWatch Logs in your account. This enables you to keep the telemetry data for
     * more than 30 days, but it does incur Amazon CloudWatch Logs charges.</p>
     */
    inline void SetCwLogEnabled(bool value) { m_cwLogEnabledHasBeenSet = true; m_cwLogEnabled = value; }

    /**
     * <p>Data collected by RUM is kept by RUM for 30 days and then deleted. This
     * parameter specifies whether RUM sends a copy of this telemetry data to Amazon
     * CloudWatch Logs in your account. This enables you to keep the telemetry data for
     * more than 30 days, but it does incur Amazon CloudWatch Logs charges.</p>
     */
    inline UpdateAppMonitorRequest& WithCwLogEnabled(bool value) { SetCwLogEnabled(value); return *this;}


    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline UpdateAppMonitorRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline UpdateAppMonitorRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline UpdateAppMonitorRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The name of the app monitor to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the app monitor to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the app monitor to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the app monitor to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the app monitor to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the app monitor to update.</p>
     */
    inline UpdateAppMonitorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the app monitor to update.</p>
     */
    inline UpdateAppMonitorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the app monitor to update.</p>
     */
    inline UpdateAppMonitorRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    AppMonitorConfiguration m_appMonitorConfiguration;
    bool m_appMonitorConfigurationHasBeenSet = false;

    CustomEvents m_customEvents;
    bool m_customEventsHasBeenSet = false;

    bool m_cwLogEnabled;
    bool m_cwLogEnabledHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
