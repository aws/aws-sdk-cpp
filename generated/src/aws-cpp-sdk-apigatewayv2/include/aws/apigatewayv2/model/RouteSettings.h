/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RouteSettings
  {
  public:
    AWS_APIGATEWAYV2_API RouteSettings() = default;
    AWS_APIGATEWAYV2_API RouteSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API RouteSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether (true) or not (false) data trace logging is enabled for
     * this route. This property affects the log entries pushed to Amazon CloudWatch
     * Logs. Supported only for WebSocket APIs.</p>
     */
    inline bool GetDataTraceEnabled() const { return m_dataTraceEnabled; }
    inline bool DataTraceEnabledHasBeenSet() const { return m_dataTraceEnabledHasBeenSet; }
    inline void SetDataTraceEnabled(bool value) { m_dataTraceEnabledHasBeenSet = true; m_dataTraceEnabled = value; }
    inline RouteSettings& WithDataTraceEnabled(bool value) { SetDataTraceEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether detailed metrics are enabled.</p>
     */
    inline bool GetDetailedMetricsEnabled() const { return m_detailedMetricsEnabled; }
    inline bool DetailedMetricsEnabledHasBeenSet() const { return m_detailedMetricsEnabledHasBeenSet; }
    inline void SetDetailedMetricsEnabled(bool value) { m_detailedMetricsEnabledHasBeenSet = true; m_detailedMetricsEnabled = value; }
    inline RouteSettings& WithDetailedMetricsEnabled(bool value) { SetDetailedMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the logging level for this route: INFO, ERROR, or OFF. This
     * property affects the log entries pushed to Amazon CloudWatch Logs. Supported
     * only for WebSocket APIs.</p>
     */
    inline LoggingLevel GetLoggingLevel() const { return m_loggingLevel; }
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }
    inline void SetLoggingLevel(LoggingLevel value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }
    inline RouteSettings& WithLoggingLevel(LoggingLevel value) { SetLoggingLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the throttling burst limit.</p>
     */
    inline int GetThrottlingBurstLimit() const { return m_throttlingBurstLimit; }
    inline bool ThrottlingBurstLimitHasBeenSet() const { return m_throttlingBurstLimitHasBeenSet; }
    inline void SetThrottlingBurstLimit(int value) { m_throttlingBurstLimitHasBeenSet = true; m_throttlingBurstLimit = value; }
    inline RouteSettings& WithThrottlingBurstLimit(int value) { SetThrottlingBurstLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the throttling rate limit.</p>
     */
    inline double GetThrottlingRateLimit() const { return m_throttlingRateLimit; }
    inline bool ThrottlingRateLimitHasBeenSet() const { return m_throttlingRateLimitHasBeenSet; }
    inline void SetThrottlingRateLimit(double value) { m_throttlingRateLimitHasBeenSet = true; m_throttlingRateLimit = value; }
    inline RouteSettings& WithThrottlingRateLimit(double value) { SetThrottlingRateLimit(value); return *this;}
    ///@}
  private:

    bool m_dataTraceEnabled{false};
    bool m_dataTraceEnabledHasBeenSet = false;

    bool m_detailedMetricsEnabled{false};
    bool m_detailedMetricsEnabledHasBeenSet = false;

    LoggingLevel m_loggingLevel{LoggingLevel::NOT_SET};
    bool m_loggingLevelHasBeenSet = false;

    int m_throttlingBurstLimit{0};
    bool m_throttlingBurstLimitHasBeenSet = false;

    double m_throttlingRateLimit{0.0};
    bool m_throttlingRateLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
