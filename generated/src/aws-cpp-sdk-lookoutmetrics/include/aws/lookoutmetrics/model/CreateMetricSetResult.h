/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class CreateMetricSetResult
  {
  public:
    AWS_LOOKOUTMETRICS_API CreateMetricSetResult();
    AWS_LOOKOUTMETRICS_API CreateMetricSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API CreateMetricSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetArn() const{ return m_metricSetArn; }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetMetricSetArn(const Aws::String& value) { m_metricSetArn = value; }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetMetricSetArn(Aws::String&& value) { m_metricSetArn = std::move(value); }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetMetricSetArn(const char* value) { m_metricSetArn.assign(value); }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline CreateMetricSetResult& WithMetricSetArn(const Aws::String& value) { SetMetricSetArn(value); return *this;}

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline CreateMetricSetResult& WithMetricSetArn(Aws::String&& value) { SetMetricSetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline CreateMetricSetResult& WithMetricSetArn(const char* value) { SetMetricSetArn(value); return *this;}

  private:

    Aws::String m_metricSetArn;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
