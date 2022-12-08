/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/DistributionMetricName.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/MetricUnit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/MetricStatistic.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetDistributionMetricDataRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetDistributionMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDistributionMetricData"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the distribution for which to get metric data.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline const Aws::String& GetDistributionName() const{ return m_distributionName; }

    /**
     * <p>The name of the distribution for which to get metric data.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }

    /**
     * <p>The name of the distribution for which to get metric data.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline void SetDistributionName(const Aws::String& value) { m_distributionNameHasBeenSet = true; m_distributionName = value; }

    /**
     * <p>The name of the distribution for which to get metric data.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline void SetDistributionName(Aws::String&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::move(value); }

    /**
     * <p>The name of the distribution for which to get metric data.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline void SetDistributionName(const char* value) { m_distributionNameHasBeenSet = true; m_distributionName.assign(value); }

    /**
     * <p>The name of the distribution for which to get metric data.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline GetDistributionMetricDataRequest& WithDistributionName(const Aws::String& value) { SetDistributionName(value); return *this;}

    /**
     * <p>The name of the distribution for which to get metric data.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline GetDistributionMetricDataRequest& WithDistributionName(Aws::String&& value) { SetDistributionName(std::move(value)); return *this;}

    /**
     * <p>The name of the distribution for which to get metric data.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline GetDistributionMetricDataRequest& WithDistributionName(const char* value) { SetDistributionName(value); return *this;}


    /**
     * <p>The metric for which you want to return information.</p> <p>Valid
     * distribution metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b> <code>Requests</code> </b> - The
     * total number of viewer requests received by your Lightsail distribution, for all
     * HTTP methods, and for both HTTP and HTTPS requests.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>None</code>.</p> </li> <li> <p>
     * <b> <code>BytesDownloaded</code> </b> - The number of bytes downloaded by
     * viewers for GET, HEAD, and OPTIONS requests.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>None</code>.</p> </li> <li> <p> <b> <code>BytesUploaded
     * </code> </b> - The number of bytes uploaded to your origin by your Lightsail
     * distribution, using POST and PUT requests.</p> <p> <code>Statistics</code>: The
     * most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>None</code>.</p> </li> <li> <p> <b>
     * <code>TotalErrorRate</code> </b> - The percentage of all viewer requests for
     * which the response's HTTP status code was 4xx or 5xx.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li>
     * <li> <p> <b> <code>4xxErrorRate</code> </b> - The percentage of all viewer
     * requests for which the response's HTTP status cod was 4xx. In these cases, the
     * client or client viewer may have made an error. For example, a status code of
     * 404 (Not Found) means that the client requested an object that could not be
     * found.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>5xxErrorRate</code> </b> -
     * The percentage of all viewer requests for which the response's HTTP status code
     * was 5xx. In these cases, the origin server did not satisfy the requests. For
     * example, a status code of 503 (Service Unavailable) means that the origin server
     * is currently unavailable.</p> <p> <code>Statistics</code>: The most useful
     * statistic is <code>Average</code>.</p> <p> <code>Unit</code>: The published unit
     * is <code>Percent</code>.</p> </li> </ul>
     */
    inline const DistributionMetricName& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid
     * distribution metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b> <code>Requests</code> </b> - The
     * total number of viewer requests received by your Lightsail distribution, for all
     * HTTP methods, and for both HTTP and HTTPS requests.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>None</code>.</p> </li> <li> <p>
     * <b> <code>BytesDownloaded</code> </b> - The number of bytes downloaded by
     * viewers for GET, HEAD, and OPTIONS requests.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>None</code>.</p> </li> <li> <p> <b> <code>BytesUploaded
     * </code> </b> - The number of bytes uploaded to your origin by your Lightsail
     * distribution, using POST and PUT requests.</p> <p> <code>Statistics</code>: The
     * most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>None</code>.</p> </li> <li> <p> <b>
     * <code>TotalErrorRate</code> </b> - The percentage of all viewer requests for
     * which the response's HTTP status code was 4xx or 5xx.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li>
     * <li> <p> <b> <code>4xxErrorRate</code> </b> - The percentage of all viewer
     * requests for which the response's HTTP status cod was 4xx. In these cases, the
     * client or client viewer may have made an error. For example, a status code of
     * 404 (Not Found) means that the client requested an object that could not be
     * found.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>5xxErrorRate</code> </b> -
     * The percentage of all viewer requests for which the response's HTTP status code
     * was 5xx. In these cases, the origin server did not satisfy the requests. For
     * example, a status code of 503 (Service Unavailable) means that the origin server
     * is currently unavailable.</p> <p> <code>Statistics</code>: The most useful
     * statistic is <code>Average</code>.</p> <p> <code>Unit</code>: The published unit
     * is <code>Percent</code>.</p> </li> </ul>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid
     * distribution metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b> <code>Requests</code> </b> - The
     * total number of viewer requests received by your Lightsail distribution, for all
     * HTTP methods, and for both HTTP and HTTPS requests.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>None</code>.</p> </li> <li> <p>
     * <b> <code>BytesDownloaded</code> </b> - The number of bytes downloaded by
     * viewers for GET, HEAD, and OPTIONS requests.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>None</code>.</p> </li> <li> <p> <b> <code>BytesUploaded
     * </code> </b> - The number of bytes uploaded to your origin by your Lightsail
     * distribution, using POST and PUT requests.</p> <p> <code>Statistics</code>: The
     * most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>None</code>.</p> </li> <li> <p> <b>
     * <code>TotalErrorRate</code> </b> - The percentage of all viewer requests for
     * which the response's HTTP status code was 4xx or 5xx.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li>
     * <li> <p> <b> <code>4xxErrorRate</code> </b> - The percentage of all viewer
     * requests for which the response's HTTP status cod was 4xx. In these cases, the
     * client or client viewer may have made an error. For example, a status code of
     * 404 (Not Found) means that the client requested an object that could not be
     * found.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>5xxErrorRate</code> </b> -
     * The percentage of all viewer requests for which the response's HTTP status code
     * was 5xx. In these cases, the origin server did not satisfy the requests. For
     * example, a status code of 503 (Service Unavailable) means that the origin server
     * is currently unavailable.</p> <p> <code>Statistics</code>: The most useful
     * statistic is <code>Average</code>.</p> <p> <code>Unit</code>: The published unit
     * is <code>Percent</code>.</p> </li> </ul>
     */
    inline void SetMetricName(const DistributionMetricName& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid
     * distribution metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b> <code>Requests</code> </b> - The
     * total number of viewer requests received by your Lightsail distribution, for all
     * HTTP methods, and for both HTTP and HTTPS requests.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>None</code>.</p> </li> <li> <p>
     * <b> <code>BytesDownloaded</code> </b> - The number of bytes downloaded by
     * viewers for GET, HEAD, and OPTIONS requests.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>None</code>.</p> </li> <li> <p> <b> <code>BytesUploaded
     * </code> </b> - The number of bytes uploaded to your origin by your Lightsail
     * distribution, using POST and PUT requests.</p> <p> <code>Statistics</code>: The
     * most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>None</code>.</p> </li> <li> <p> <b>
     * <code>TotalErrorRate</code> </b> - The percentage of all viewer requests for
     * which the response's HTTP status code was 4xx or 5xx.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li>
     * <li> <p> <b> <code>4xxErrorRate</code> </b> - The percentage of all viewer
     * requests for which the response's HTTP status cod was 4xx. In these cases, the
     * client or client viewer may have made an error. For example, a status code of
     * 404 (Not Found) means that the client requested an object that could not be
     * found.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>5xxErrorRate</code> </b> -
     * The percentage of all viewer requests for which the response's HTTP status code
     * was 5xx. In these cases, the origin server did not satisfy the requests. For
     * example, a status code of 503 (Service Unavailable) means that the origin server
     * is currently unavailable.</p> <p> <code>Statistics</code>: The most useful
     * statistic is <code>Average</code>.</p> <p> <code>Unit</code>: The published unit
     * is <code>Percent</code>.</p> </li> </ul>
     */
    inline void SetMetricName(DistributionMetricName&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid
     * distribution metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b> <code>Requests</code> </b> - The
     * total number of viewer requests received by your Lightsail distribution, for all
     * HTTP methods, and for both HTTP and HTTPS requests.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>None</code>.</p> </li> <li> <p>
     * <b> <code>BytesDownloaded</code> </b> - The number of bytes downloaded by
     * viewers for GET, HEAD, and OPTIONS requests.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>None</code>.</p> </li> <li> <p> <b> <code>BytesUploaded
     * </code> </b> - The number of bytes uploaded to your origin by your Lightsail
     * distribution, using POST and PUT requests.</p> <p> <code>Statistics</code>: The
     * most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>None</code>.</p> </li> <li> <p> <b>
     * <code>TotalErrorRate</code> </b> - The percentage of all viewer requests for
     * which the response's HTTP status code was 4xx or 5xx.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li>
     * <li> <p> <b> <code>4xxErrorRate</code> </b> - The percentage of all viewer
     * requests for which the response's HTTP status cod was 4xx. In these cases, the
     * client or client viewer may have made an error. For example, a status code of
     * 404 (Not Found) means that the client requested an object that could not be
     * found.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>5xxErrorRate</code> </b> -
     * The percentage of all viewer requests for which the response's HTTP status code
     * was 5xx. In these cases, the origin server did not satisfy the requests. For
     * example, a status code of 503 (Service Unavailable) means that the origin server
     * is currently unavailable.</p> <p> <code>Statistics</code>: The most useful
     * statistic is <code>Average</code>.</p> <p> <code>Unit</code>: The published unit
     * is <code>Percent</code>.</p> </li> </ul>
     */
    inline GetDistributionMetricDataRequest& WithMetricName(const DistributionMetricName& value) { SetMetricName(value); return *this;}

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid
     * distribution metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b> <code>Requests</code> </b> - The
     * total number of viewer requests received by your Lightsail distribution, for all
     * HTTP methods, and for both HTTP and HTTPS requests.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>None</code>.</p> </li> <li> <p>
     * <b> <code>BytesDownloaded</code> </b> - The number of bytes downloaded by
     * viewers for GET, HEAD, and OPTIONS requests.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>None</code>.</p> </li> <li> <p> <b> <code>BytesUploaded
     * </code> </b> - The number of bytes uploaded to your origin by your Lightsail
     * distribution, using POST and PUT requests.</p> <p> <code>Statistics</code>: The
     * most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>None</code>.</p> </li> <li> <p> <b>
     * <code>TotalErrorRate</code> </b> - The percentage of all viewer requests for
     * which the response's HTTP status code was 4xx or 5xx.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li>
     * <li> <p> <b> <code>4xxErrorRate</code> </b> - The percentage of all viewer
     * requests for which the response's HTTP status cod was 4xx. In these cases, the
     * client or client viewer may have made an error. For example, a status code of
     * 404 (Not Found) means that the client requested an object that could not be
     * found.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>5xxErrorRate</code> </b> -
     * The percentage of all viewer requests for which the response's HTTP status code
     * was 5xx. In these cases, the origin server did not satisfy the requests. For
     * example, a status code of 503 (Service Unavailable) means that the origin server
     * is currently unavailable.</p> <p> <code>Statistics</code>: The most useful
     * statistic is <code>Average</code>.</p> <p> <code>Unit</code>: The published unit
     * is <code>Percent</code>.</p> </li> </ul>
     */
    inline GetDistributionMetricDataRequest& WithMetricName(DistributionMetricName&& value) { SetMetricName(std::move(value)); return *this;}


    /**
     * <p>The start of the time interval for which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, specify
     * <code>1538424000</code> as the start time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time interval for which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, specify
     * <code>1538424000</code> as the start time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time interval for which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, specify
     * <code>1538424000</code> as the start time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time interval for which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, specify
     * <code>1538424000</code> as the start time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time interval for which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, specify
     * <code>1538424000</code> as the start time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline GetDistributionMetricDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time interval for which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, specify
     * <code>1538424000</code> as the start time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline GetDistributionMetricDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time interval for which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 9 PM UTC, specify
     * <code>1538427600</code> as the end time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time interval for which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 9 PM UTC, specify
     * <code>1538427600</code> as the end time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time interval for which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 9 PM UTC, specify
     * <code>1538427600</code> as the end time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time interval for which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 9 PM UTC, specify
     * <code>1538427600</code> as the end time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time interval for which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 9 PM UTC, specify
     * <code>1538427600</code> as the end time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline GetDistributionMetricDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time interval for which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 9 PM UTC, specify
     * <code>1538427600</code> as the end time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline GetDistributionMetricDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The granularity, in seconds, for the metric data points that will be
     * returned.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The granularity, in seconds, for the metric data points that will be
     * returned.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The granularity, in seconds, for the metric data points that will be
     * returned.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The granularity, in seconds, for the metric data points that will be
     * returned.</p>
     */
    inline GetDistributionMetricDataRequest& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The unit for the metric data request.</p> <p>Valid units depend on the metric
     * data being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline const MetricUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit for the metric data request.</p> <p>Valid units depend on the metric
     * data being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit for the metric data request.</p> <p>Valid units depend on the metric
     * data being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline void SetUnit(const MetricUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit for the metric data request.</p> <p>Valid units depend on the metric
     * data being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline void SetUnit(MetricUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit for the metric data request.</p> <p>Valid units depend on the metric
     * data being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline GetDistributionMetricDataRequest& WithUnit(const MetricUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit for the metric data request.</p> <p>Valid units depend on the metric
     * data being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline GetDistributionMetricDataRequest& WithUnit(MetricUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<MetricStatistic>& GetStatistics() const{ return m_statistics; }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline void SetStatistics(const Aws::Vector<MetricStatistic>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline void SetStatistics(Aws::Vector<MetricStatistic>&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline GetDistributionMetricDataRequest& WithStatistics(const Aws::Vector<MetricStatistic>& value) { SetStatistics(value); return *this;}

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline GetDistributionMetricDataRequest& WithStatistics(Aws::Vector<MetricStatistic>&& value) { SetStatistics(std::move(value)); return *this;}

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline GetDistributionMetricDataRequest& AddStatistics(const MetricStatistic& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline GetDistributionMetricDataRequest& AddStatistics(MetricStatistic&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_distributionName;
    bool m_distributionNameHasBeenSet = false;

    DistributionMetricName m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    MetricUnit m_unit;
    bool m_unitHasBeenSet = false;

    Aws::Vector<MetricStatistic> m_statistics;
    bool m_statisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
