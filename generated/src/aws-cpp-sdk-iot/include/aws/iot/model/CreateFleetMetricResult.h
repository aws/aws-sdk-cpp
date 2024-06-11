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
  class CreateFleetMetricResult
  {
  public:
    AWS_IOT_API CreateFleetMetricResult();
    AWS_IOT_API CreateFleetMetricResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateFleetMetricResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the fleet metric to create.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline void SetMetricName(const Aws::String& value) { m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricName.assign(value); }
    inline CreateFleetMetricResult& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline CreateFleetMetricResult& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline CreateFleetMetricResult& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the new fleet metric.</p>
     */
    inline const Aws::String& GetMetricArn() const{ return m_metricArn; }
    inline void SetMetricArn(const Aws::String& value) { m_metricArn = value; }
    inline void SetMetricArn(Aws::String&& value) { m_metricArn = std::move(value); }
    inline void SetMetricArn(const char* value) { m_metricArn.assign(value); }
    inline CreateFleetMetricResult& WithMetricArn(const Aws::String& value) { SetMetricArn(value); return *this;}
    inline CreateFleetMetricResult& WithMetricArn(Aws::String&& value) { SetMetricArn(std::move(value)); return *this;}
    inline CreateFleetMetricResult& WithMetricArn(const char* value) { SetMetricArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateFleetMetricResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateFleetMetricResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateFleetMetricResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_metricName;

    Aws::String m_metricArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
