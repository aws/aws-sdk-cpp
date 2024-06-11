﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AggregationType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/FleetMetricUnit.h>
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
  class DescribeFleetMetricResult
  {
  public:
    AWS_IOT_API DescribeFleetMetricResult();
    AWS_IOT_API DescribeFleetMetricResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeFleetMetricResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the fleet metric to describe.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline void SetMetricName(const Aws::String& value) { m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricName.assign(value); }
    inline DescribeFleetMetricResult& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline DescribeFleetMetricResult& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline DescribeFleetMetricResult& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search query string.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline void SetQueryString(const Aws::String& value) { m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryString.assign(value); }
    inline DescribeFleetMetricResult& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline DescribeFleetMetricResult& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline DescribeFleetMetricResult& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the aggregation query.</p>
     */
    inline const AggregationType& GetAggregationType() const{ return m_aggregationType; }
    inline void SetAggregationType(const AggregationType& value) { m_aggregationType = value; }
    inline void SetAggregationType(AggregationType&& value) { m_aggregationType = std::move(value); }
    inline DescribeFleetMetricResult& WithAggregationType(const AggregationType& value) { SetAggregationType(value); return *this;}
    inline DescribeFleetMetricResult& WithAggregationType(AggregationType&& value) { SetAggregationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in seconds between fleet metric emissions. Range [60(1 min), 86400(1
     * day)] and must be multiple of 60.</p>
     */
    inline int GetPeriod() const{ return m_period; }
    inline void SetPeriod(int value) { m_period = value; }
    inline DescribeFleetMetricResult& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to aggregate.</p>
     */
    inline const Aws::String& GetAggregationField() const{ return m_aggregationField; }
    inline void SetAggregationField(const Aws::String& value) { m_aggregationField = value; }
    inline void SetAggregationField(Aws::String&& value) { m_aggregationField = std::move(value); }
    inline void SetAggregationField(const char* value) { m_aggregationField.assign(value); }
    inline DescribeFleetMetricResult& WithAggregationField(const Aws::String& value) { SetAggregationField(value); return *this;}
    inline DescribeFleetMetricResult& WithAggregationField(Aws::String&& value) { SetAggregationField(std::move(value)); return *this;}
    inline DescribeFleetMetricResult& WithAggregationField(const char* value) { SetAggregationField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet metric description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeFleetMetricResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeFleetMetricResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeFleetMetricResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query version.</p>
     */
    inline const Aws::String& GetQueryVersion() const{ return m_queryVersion; }
    inline void SetQueryVersion(const Aws::String& value) { m_queryVersion = value; }
    inline void SetQueryVersion(Aws::String&& value) { m_queryVersion = std::move(value); }
    inline void SetQueryVersion(const char* value) { m_queryVersion.assign(value); }
    inline DescribeFleetMetricResult& WithQueryVersion(const Aws::String& value) { SetQueryVersion(value); return *this;}
    inline DescribeFleetMetricResult& WithQueryVersion(Aws::String&& value) { SetQueryVersion(std::move(value)); return *this;}
    inline DescribeFleetMetricResult& WithQueryVersion(const char* value) { SetQueryVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the index to search.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }
    inline DescribeFleetMetricResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline DescribeFleetMetricResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline DescribeFleetMetricResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the fleet metric is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline DescribeFleetMetricResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline DescribeFleetMetricResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the fleet metric is last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline DescribeFleetMetricResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline DescribeFleetMetricResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to support unit transformation such as milliseconds to seconds. The unit
     * must be supported by <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_MetricDatum.html">CW
     * metric</a>.</p>
     */
    inline const FleetMetricUnit& GetUnit() const{ return m_unit; }
    inline void SetUnit(const FleetMetricUnit& value) { m_unit = value; }
    inline void SetUnit(FleetMetricUnit&& value) { m_unit = std::move(value); }
    inline DescribeFleetMetricResult& WithUnit(const FleetMetricUnit& value) { SetUnit(value); return *this;}
    inline DescribeFleetMetricResult& WithUnit(FleetMetricUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the fleet metric.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline void SetVersion(long long value) { m_version = value; }
    inline DescribeFleetMetricResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the fleet metric to describe.</p>
     */
    inline const Aws::String& GetMetricArn() const{ return m_metricArn; }
    inline void SetMetricArn(const Aws::String& value) { m_metricArn = value; }
    inline void SetMetricArn(Aws::String&& value) { m_metricArn = std::move(value); }
    inline void SetMetricArn(const char* value) { m_metricArn.assign(value); }
    inline DescribeFleetMetricResult& WithMetricArn(const Aws::String& value) { SetMetricArn(value); return *this;}
    inline DescribeFleetMetricResult& WithMetricArn(Aws::String&& value) { SetMetricArn(std::move(value)); return *this;}
    inline DescribeFleetMetricResult& WithMetricArn(const char* value) { SetMetricArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFleetMetricResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFleetMetricResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFleetMetricResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_metricName;

    Aws::String m_queryString;

    AggregationType m_aggregationType;

    int m_period;

    Aws::String m_aggregationField;

    Aws::String m_description;

    Aws::String m_queryVersion;

    Aws::String m_indexName;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    FleetMetricUnit m_unit;

    long long m_version;

    Aws::String m_metricArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
