/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/Observation.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class DescribeObservationResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeObservationResult();
    AWS_APPLICATIONINSIGHTS_API DescribeObservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeObservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the observation.</p>
     */
    inline const Observation& GetObservation() const{ return m_observation; }

    /**
     * <p>Information about the observation.</p>
     */
    inline void SetObservation(const Observation& value) { m_observation = value; }

    /**
     * <p>Information about the observation.</p>
     */
    inline void SetObservation(Observation&& value) { m_observation = std::move(value); }

    /**
     * <p>Information about the observation.</p>
     */
    inline DescribeObservationResult& WithObservation(const Observation& value) { SetObservation(value); return *this;}

    /**
     * <p>Information about the observation.</p>
     */
    inline DescribeObservationResult& WithObservation(Observation&& value) { SetObservation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeObservationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeObservationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeObservationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Observation m_observation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
