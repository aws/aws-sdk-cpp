/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/LoggingConfigurationStatusCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>The status of the logging configuration. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/LoggingConfigurationStatus">AWS
   * API Reference</a></p>
   */
  class LoggingConfigurationStatus
  {
  public:
    AWS_PROMETHEUSSERVICE_API LoggingConfigurationStatus();
    AWS_PROMETHEUSSERVICE_API LoggingConfigurationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API LoggingConfigurationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status of the logging configuration.</p>
     */
    inline const LoggingConfigurationStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The current status of the logging configuration.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The current status of the logging configuration.</p>
     */
    inline void SetStatusCode(const LoggingConfigurationStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The current status of the logging configuration.</p>
     */
    inline void SetStatusCode(LoggingConfigurationStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The current status of the logging configuration.</p>
     */
    inline LoggingConfigurationStatus& WithStatusCode(const LoggingConfigurationStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The current status of the logging configuration.</p>
     */
    inline LoggingConfigurationStatus& WithStatusCode(LoggingConfigurationStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>If failed, the reason for the failure.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>If failed, the reason for the failure.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>If failed, the reason for the failure.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>If failed, the reason for the failure.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>If failed, the reason for the failure.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>If failed, the reason for the failure.</p>
     */
    inline LoggingConfigurationStatus& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>If failed, the reason for the failure.</p>
     */
    inline LoggingConfigurationStatus& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>If failed, the reason for the failure.</p>
     */
    inline LoggingConfigurationStatus& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    LoggingConfigurationStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
