/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CustomMetricType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class DescribeCustomMetricResult
  {
  public:
    AWS_IOT_API DescribeCustomMetricResult() = default;
    AWS_IOT_API DescribeCustomMetricResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeCustomMetricResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The name of the custom metric. </p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    DescribeCustomMetricResult& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) of the custom metric. </p>
     */
    inline const Aws::String& GetMetricArn() const { return m_metricArn; }
    template<typename MetricArnT = Aws::String>
    void SetMetricArn(MetricArnT&& value) { m_metricArnHasBeenSet = true; m_metricArn = std::forward<MetricArnT>(value); }
    template<typename MetricArnT = Aws::String>
    DescribeCustomMetricResult& WithMetricArn(MetricArnT&& value) { SetMetricArn(std::forward<MetricArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the custom metric. </p>  <p>The type
     * <code>number</code> only takes a single metric value as an input, but while
     * submitting the metrics value in the DeviceMetrics report, it must be passed as
     * an array with a single value.</p> 
     */
    inline CustomMetricType GetMetricType() const { return m_metricType; }
    inline void SetMetricType(CustomMetricType value) { m_metricTypeHasBeenSet = true; m_metricType = value; }
    inline DescribeCustomMetricResult& WithMetricType(CustomMetricType value) { SetMetricType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Field represents a friendly name in the console for the custom metric;
     * doesn't have to be unique. Don't use this name as the metric identifier in the
     * device metric report. Can be updated. </p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    DescribeCustomMetricResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The creation date of the custom metric in milliseconds since epoch. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    DescribeCustomMetricResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the custom metric was last modified in milliseconds since epoch.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    DescribeCustomMetricResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCustomMetricResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_metricArn;
    bool m_metricArnHasBeenSet = false;

    CustomMetricType m_metricType{CustomMetricType::NOT_SET};
    bool m_metricTypeHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
