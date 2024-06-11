﻿/**
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
  class UpdateMetricSetResult
  {
  public:
    AWS_LOOKOUTMETRICS_API UpdateMetricSetResult();
    AWS_LOOKOUTMETRICS_API UpdateMetricSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API UpdateMetricSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetArn() const{ return m_metricSetArn; }
    inline void SetMetricSetArn(const Aws::String& value) { m_metricSetArn = value; }
    inline void SetMetricSetArn(Aws::String&& value) { m_metricSetArn = std::move(value); }
    inline void SetMetricSetArn(const char* value) { m_metricSetArn.assign(value); }
    inline UpdateMetricSetResult& WithMetricSetArn(const Aws::String& value) { SetMetricSetArn(value); return *this;}
    inline UpdateMetricSetResult& WithMetricSetArn(Aws::String&& value) { SetMetricSetArn(std::move(value)); return *this;}
    inline UpdateMetricSetResult& WithMetricSetArn(const char* value) { SetMetricSetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateMetricSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateMetricSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateMetricSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_metricSetArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
