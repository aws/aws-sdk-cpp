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
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/LoggingLevel.h>
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
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Represents a collection of route settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/RouteSettings">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAYV2_API RouteSettings
  {
  public:
    RouteSettings();
    RouteSettings(Aws::Utils::Json::JsonView jsonValue);
    RouteSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether (true) or not (false) data trace
 logging is enabled for
     * this route. This property affects the log entries pushed to
 Amazon CloudWatch
     * Logs.</p>
     */
    inline bool GetDataTraceEnabled() const{ return m_dataTraceEnabled; }

    /**
     * <p>Specifies whether (true) or not (false) data trace
 logging is enabled for
     * this route. This property affects the log entries pushed to
 Amazon CloudWatch
     * Logs.</p>
     */
    inline bool DataTraceEnabledHasBeenSet() const { return m_dataTraceEnabledHasBeenSet; }

    /**
     * <p>Specifies whether (true) or not (false) data trace
 logging is enabled for
     * this route. This property affects the log entries pushed to
 Amazon CloudWatch
     * Logs.</p>
     */
    inline void SetDataTraceEnabled(bool value) { m_dataTraceEnabledHasBeenSet = true; m_dataTraceEnabled = value; }

    /**
     * <p>Specifies whether (true) or not (false) data trace
 logging is enabled for
     * this route. This property affects the log entries pushed to
 Amazon CloudWatch
     * Logs.</p>
     */
    inline RouteSettings& WithDataTraceEnabled(bool value) { SetDataTraceEnabled(value); return *this;}


    /**
     * <p>Specifies whether detailed metrics are enabled.</p>
     */
    inline bool GetDetailedMetricsEnabled() const{ return m_detailedMetricsEnabled; }

    /**
     * <p>Specifies whether detailed metrics are enabled.</p>
     */
    inline bool DetailedMetricsEnabledHasBeenSet() const { return m_detailedMetricsEnabledHasBeenSet; }

    /**
     * <p>Specifies whether detailed metrics are enabled.</p>
     */
    inline void SetDetailedMetricsEnabled(bool value) { m_detailedMetricsEnabledHasBeenSet = true; m_detailedMetricsEnabled = value; }

    /**
     * <p>Specifies whether detailed metrics are enabled.</p>
     */
    inline RouteSettings& WithDetailedMetricsEnabled(bool value) { SetDetailedMetricsEnabled(value); return *this;}


    /**
     * <p>Specifies the logging level for this route: DEBUG, INFO,
 or WARN. This
     * property affects the log entries pushed to Amazon
 CloudWatch Logs.</p>
     */
    inline const LoggingLevel& GetLoggingLevel() const{ return m_loggingLevel; }

    /**
     * <p>Specifies the logging level for this route: DEBUG, INFO,
 or WARN. This
     * property affects the log entries pushed to Amazon
 CloudWatch Logs.</p>
     */
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }

    /**
     * <p>Specifies the logging level for this route: DEBUG, INFO,
 or WARN. This
     * property affects the log entries pushed to Amazon
 CloudWatch Logs.</p>
     */
    inline void SetLoggingLevel(const LoggingLevel& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }

    /**
     * <p>Specifies the logging level for this route: DEBUG, INFO,
 or WARN. This
     * property affects the log entries pushed to Amazon
 CloudWatch Logs.</p>
     */
    inline void SetLoggingLevel(LoggingLevel&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::move(value); }

    /**
     * <p>Specifies the logging level for this route: DEBUG, INFO,
 or WARN. This
     * property affects the log entries pushed to Amazon
 CloudWatch Logs.</p>
     */
    inline RouteSettings& WithLoggingLevel(const LoggingLevel& value) { SetLoggingLevel(value); return *this;}

    /**
     * <p>Specifies the logging level for this route: DEBUG, INFO,
 or WARN. This
     * property affects the log entries pushed to Amazon
 CloudWatch Logs.</p>
     */
    inline RouteSettings& WithLoggingLevel(LoggingLevel&& value) { SetLoggingLevel(std::move(value)); return *this;}


    /**
     * <p>Specifies the throttling burst limit.</p>
     */
    inline int GetThrottlingBurstLimit() const{ return m_throttlingBurstLimit; }

    /**
     * <p>Specifies the throttling burst limit.</p>
     */
    inline bool ThrottlingBurstLimitHasBeenSet() const { return m_throttlingBurstLimitHasBeenSet; }

    /**
     * <p>Specifies the throttling burst limit.</p>
     */
    inline void SetThrottlingBurstLimit(int value) { m_throttlingBurstLimitHasBeenSet = true; m_throttlingBurstLimit = value; }

    /**
     * <p>Specifies the throttling burst limit.</p>
     */
    inline RouteSettings& WithThrottlingBurstLimit(int value) { SetThrottlingBurstLimit(value); return *this;}


    /**
     * <p>Specifies the throttling rate limit.</p>
     */
    inline double GetThrottlingRateLimit() const{ return m_throttlingRateLimit; }

    /**
     * <p>Specifies the throttling rate limit.</p>
     */
    inline bool ThrottlingRateLimitHasBeenSet() const { return m_throttlingRateLimitHasBeenSet; }

    /**
     * <p>Specifies the throttling rate limit.</p>
     */
    inline void SetThrottlingRateLimit(double value) { m_throttlingRateLimitHasBeenSet = true; m_throttlingRateLimit = value; }

    /**
     * <p>Specifies the throttling rate limit.</p>
     */
    inline RouteSettings& WithThrottlingRateLimit(double value) { SetThrottlingRateLimit(value); return *this;}

  private:

    bool m_dataTraceEnabled;
    bool m_dataTraceEnabledHasBeenSet;

    bool m_detailedMetricsEnabled;
    bool m_detailedMetricsEnabledHasBeenSet;

    LoggingLevel m_loggingLevel;
    bool m_loggingLevelHasBeenSet;

    int m_throttlingBurstLimit;
    bool m_throttlingBurstLimitHasBeenSet;

    double m_throttlingRateLimit;
    bool m_throttlingRateLimitHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
