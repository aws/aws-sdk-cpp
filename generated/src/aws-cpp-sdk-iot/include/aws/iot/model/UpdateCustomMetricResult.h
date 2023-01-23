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
  class UpdateCustomMetricResult
  {
  public:
    AWS_IOT_API UpdateCustomMetricResult();
    AWS_IOT_API UpdateCustomMetricResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateCustomMetricResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the custom metric. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricName = value; }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricName = std::move(value); }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline void SetMetricName(const char* value) { m_metricName.assign(value); }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline UpdateCustomMetricResult& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p> The name of the custom metric. </p>
     */
    inline UpdateCustomMetricResult& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p> The name of the custom metric. </p>
     */
    inline UpdateCustomMetricResult& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p> The Amazon Resource Number (ARN) of the custom metric. </p>
     */
    inline const Aws::String& GetMetricArn() const{ return m_metricArn; }

    /**
     * <p> The Amazon Resource Number (ARN) of the custom metric. </p>
     */
    inline void SetMetricArn(const Aws::String& value) { m_metricArn = value; }

    /**
     * <p> The Amazon Resource Number (ARN) of the custom metric. </p>
     */
    inline void SetMetricArn(Aws::String&& value) { m_metricArn = std::move(value); }

    /**
     * <p> The Amazon Resource Number (ARN) of the custom metric. </p>
     */
    inline void SetMetricArn(const char* value) { m_metricArn.assign(value); }

    /**
     * <p> The Amazon Resource Number (ARN) of the custom metric. </p>
     */
    inline UpdateCustomMetricResult& WithMetricArn(const Aws::String& value) { SetMetricArn(value); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) of the custom metric. </p>
     */
    inline UpdateCustomMetricResult& WithMetricArn(Aws::String&& value) { SetMetricArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) of the custom metric. </p>
     */
    inline UpdateCustomMetricResult& WithMetricArn(const char* value) { SetMetricArn(value); return *this;}


    /**
     * <p> The type of the custom metric. </p>  <p>The type
     * <code>number</code> only takes a single metric value as an input, but while
     * submitting the metrics value in the DeviceMetrics report, it must be passed as
     * an array with a single value.</p> 
     */
    inline const CustomMetricType& GetMetricType() const{ return m_metricType; }

    /**
     * <p> The type of the custom metric. </p>  <p>The type
     * <code>number</code> only takes a single metric value as an input, but while
     * submitting the metrics value in the DeviceMetrics report, it must be passed as
     * an array with a single value.</p> 
     */
    inline void SetMetricType(const CustomMetricType& value) { m_metricType = value; }

    /**
     * <p> The type of the custom metric. </p>  <p>The type
     * <code>number</code> only takes a single metric value as an input, but while
     * submitting the metrics value in the DeviceMetrics report, it must be passed as
     * an array with a single value.</p> 
     */
    inline void SetMetricType(CustomMetricType&& value) { m_metricType = std::move(value); }

    /**
     * <p> The type of the custom metric. </p>  <p>The type
     * <code>number</code> only takes a single metric value as an input, but while
     * submitting the metrics value in the DeviceMetrics report, it must be passed as
     * an array with a single value.</p> 
     */
    inline UpdateCustomMetricResult& WithMetricType(const CustomMetricType& value) { SetMetricType(value); return *this;}

    /**
     * <p> The type of the custom metric. </p>  <p>The type
     * <code>number</code> only takes a single metric value as an input, but while
     * submitting the metrics value in the DeviceMetrics report, it must be passed as
     * an array with a single value.</p> 
     */
    inline UpdateCustomMetricResult& WithMetricType(CustomMetricType&& value) { SetMetricType(std::move(value)); return *this;}


    /**
     * <p> A friendly name in the console for the custom metric </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p> A friendly name in the console for the custom metric </p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p> A friendly name in the console for the custom metric </p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p> A friendly name in the console for the custom metric </p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p> A friendly name in the console for the custom metric </p>
     */
    inline UpdateCustomMetricResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p> A friendly name in the console for the custom metric </p>
     */
    inline UpdateCustomMetricResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p> A friendly name in the console for the custom metric </p>
     */
    inline UpdateCustomMetricResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p> The creation date of the custom metric in milliseconds since epoch. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p> The creation date of the custom metric in milliseconds since epoch. </p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p> The creation date of the custom metric in milliseconds since epoch. </p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p> The creation date of the custom metric in milliseconds since epoch. </p>
     */
    inline UpdateCustomMetricResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p> The creation date of the custom metric in milliseconds since epoch. </p>
     */
    inline UpdateCustomMetricResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p> The time the custom metric was last modified in milliseconds since epoch.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p> The time the custom metric was last modified in milliseconds since epoch.
     * </p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p> The time the custom metric was last modified in milliseconds since epoch.
     * </p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p> The time the custom metric was last modified in milliseconds since epoch.
     * </p>
     */
    inline UpdateCustomMetricResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p> The time the custom metric was last modified in milliseconds since epoch.
     * </p>
     */
    inline UpdateCustomMetricResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_metricName;

    Aws::String m_metricArn;

    CustomMetricType m_metricType;

    Aws::String m_displayName;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
