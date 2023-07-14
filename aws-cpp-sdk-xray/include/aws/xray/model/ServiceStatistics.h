﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/ErrorStatistics.h>
#include <aws/xray/model/FaultStatistics.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Response statistics for a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ServiceStatistics">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API ServiceStatistics
  {
  public:
    ServiceStatistics();
    ServiceStatistics(Aws::Utils::Json::JsonView jsonValue);
    ServiceStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of requests that completed with a 2xx Success status code.</p>
     */
    inline long long GetOkCount() const{ return m_okCount; }

    /**
     * <p>The number of requests that completed with a 2xx Success status code.</p>
     */
    inline bool OkCountHasBeenSet() const { return m_okCountHasBeenSet; }

    /**
     * <p>The number of requests that completed with a 2xx Success status code.</p>
     */
    inline void SetOkCount(long long value) { m_okCountHasBeenSet = true; m_okCount = value; }

    /**
     * <p>The number of requests that completed with a 2xx Success status code.</p>
     */
    inline ServiceStatistics& WithOkCount(long long value) { SetOkCount(value); return *this;}


    /**
     * <p>Information about requests that failed with a 4xx Client Error status
     * code.</p>
     */
    inline const ErrorStatistics& GetErrorStatistics() const{ return m_errorStatistics; }

    /**
     * <p>Information about requests that failed with a 4xx Client Error status
     * code.</p>
     */
    inline bool ErrorStatisticsHasBeenSet() const { return m_errorStatisticsHasBeenSet; }

    /**
     * <p>Information about requests that failed with a 4xx Client Error status
     * code.</p>
     */
    inline void SetErrorStatistics(const ErrorStatistics& value) { m_errorStatisticsHasBeenSet = true; m_errorStatistics = value; }

    /**
     * <p>Information about requests that failed with a 4xx Client Error status
     * code.</p>
     */
    inline void SetErrorStatistics(ErrorStatistics&& value) { m_errorStatisticsHasBeenSet = true; m_errorStatistics = std::move(value); }

    /**
     * <p>Information about requests that failed with a 4xx Client Error status
     * code.</p>
     */
    inline ServiceStatistics& WithErrorStatistics(const ErrorStatistics& value) { SetErrorStatistics(value); return *this;}

    /**
     * <p>Information about requests that failed with a 4xx Client Error status
     * code.</p>
     */
    inline ServiceStatistics& WithErrorStatistics(ErrorStatistics&& value) { SetErrorStatistics(std::move(value)); return *this;}


    /**
     * <p>Information about requests that failed with a 5xx Server Error status
     * code.</p>
     */
    inline const FaultStatistics& GetFaultStatistics() const{ return m_faultStatistics; }

    /**
     * <p>Information about requests that failed with a 5xx Server Error status
     * code.</p>
     */
    inline bool FaultStatisticsHasBeenSet() const { return m_faultStatisticsHasBeenSet; }

    /**
     * <p>Information about requests that failed with a 5xx Server Error status
     * code.</p>
     */
    inline void SetFaultStatistics(const FaultStatistics& value) { m_faultStatisticsHasBeenSet = true; m_faultStatistics = value; }

    /**
     * <p>Information about requests that failed with a 5xx Server Error status
     * code.</p>
     */
    inline void SetFaultStatistics(FaultStatistics&& value) { m_faultStatisticsHasBeenSet = true; m_faultStatistics = std::move(value); }

    /**
     * <p>Information about requests that failed with a 5xx Server Error status
     * code.</p>
     */
    inline ServiceStatistics& WithFaultStatistics(const FaultStatistics& value) { SetFaultStatistics(value); return *this;}

    /**
     * <p>Information about requests that failed with a 5xx Server Error status
     * code.</p>
     */
    inline ServiceStatistics& WithFaultStatistics(FaultStatistics&& value) { SetFaultStatistics(std::move(value)); return *this;}


    /**
     * <p>The total number of completed requests.</p>
     */
    inline long long GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of completed requests.</p>
     */
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }

    /**
     * <p>The total number of completed requests.</p>
     */
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }

    /**
     * <p>The total number of completed requests.</p>
     */
    inline ServiceStatistics& WithTotalCount(long long value) { SetTotalCount(value); return *this;}


    /**
     * <p>The aggregate response time of completed requests.</p>
     */
    inline double GetTotalResponseTime() const{ return m_totalResponseTime; }

    /**
     * <p>The aggregate response time of completed requests.</p>
     */
    inline bool TotalResponseTimeHasBeenSet() const { return m_totalResponseTimeHasBeenSet; }

    /**
     * <p>The aggregate response time of completed requests.</p>
     */
    inline void SetTotalResponseTime(double value) { m_totalResponseTimeHasBeenSet = true; m_totalResponseTime = value; }

    /**
     * <p>The aggregate response time of completed requests.</p>
     */
    inline ServiceStatistics& WithTotalResponseTime(double value) { SetTotalResponseTime(value); return *this;}

  private:

    long long m_okCount;
    bool m_okCountHasBeenSet;

    ErrorStatistics m_errorStatistics;
    bool m_errorStatisticsHasBeenSet;

    FaultStatistics m_faultStatistics;
    bool m_faultStatisticsHasBeenSet;

    long long m_totalCount;
    bool m_totalCountHasBeenSet;

    double m_totalResponseTime;
    bool m_totalResponseTimeHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
