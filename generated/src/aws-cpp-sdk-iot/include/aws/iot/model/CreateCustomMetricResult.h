/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class CreateCustomMetricResult
  {
  public:
    AWS_IOT_API CreateCustomMetricResult();
    AWS_IOT_API CreateCustomMetricResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateCustomMetricResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The name of the custom metric to be used in the metric report. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline void SetMetricName(const Aws::String& value) { m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricName.assign(value); }
    inline CreateCustomMetricResult& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline CreateCustomMetricResult& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline CreateCustomMetricResult& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) of the custom metric. For example,
     * <code>arn:<i>aws-partition</i>:iot:<i>region</i>:<i>accountId</i>:custommetric/<i>metricName</i>
     * </code> </p>
     */
    inline const Aws::String& GetMetricArn() const{ return m_metricArn; }
    inline void SetMetricArn(const Aws::String& value) { m_metricArn = value; }
    inline void SetMetricArn(Aws::String&& value) { m_metricArn = std::move(value); }
    inline void SetMetricArn(const char* value) { m_metricArn.assign(value); }
    inline CreateCustomMetricResult& WithMetricArn(const Aws::String& value) { SetMetricArn(value); return *this;}
    inline CreateCustomMetricResult& WithMetricArn(Aws::String&& value) { SetMetricArn(std::move(value)); return *this;}
    inline CreateCustomMetricResult& WithMetricArn(const char* value) { SetMetricArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCustomMetricResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCustomMetricResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCustomMetricResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_metricName;

    Aws::String m_metricArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
