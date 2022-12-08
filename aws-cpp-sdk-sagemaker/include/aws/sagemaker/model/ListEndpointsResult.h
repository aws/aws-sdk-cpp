/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EndpointSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListEndpointsResult
  {
  public:
    AWS_SAGEMAKER_API ListEndpointsResult();
    AWS_SAGEMAKER_API ListEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An array or endpoint objects. </p>
     */
    inline const Aws::Vector<EndpointSummary>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p> An array or endpoint objects. </p>
     */
    inline void SetEndpoints(const Aws::Vector<EndpointSummary>& value) { m_endpoints = value; }

    /**
     * <p> An array or endpoint objects. </p>
     */
    inline void SetEndpoints(Aws::Vector<EndpointSummary>&& value) { m_endpoints = std::move(value); }

    /**
     * <p> An array or endpoint objects. </p>
     */
    inline ListEndpointsResult& WithEndpoints(const Aws::Vector<EndpointSummary>& value) { SetEndpoints(value); return *this;}

    /**
     * <p> An array or endpoint objects. </p>
     */
    inline ListEndpointsResult& WithEndpoints(Aws::Vector<EndpointSummary>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p> An array or endpoint objects. </p>
     */
    inline ListEndpointsResult& AddEndpoints(const EndpointSummary& value) { m_endpoints.push_back(value); return *this; }

    /**
     * <p> An array or endpoint objects. </p>
     */
    inline ListEndpointsResult& AddEndpoints(EndpointSummary&& value) { m_endpoints.push_back(std::move(value)); return *this; }


    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of training jobs, use it in the subsequent request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of training jobs, use it in the subsequent request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of training jobs, use it in the subsequent request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of training jobs, use it in the subsequent request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of training jobs, use it in the subsequent request. </p>
     */
    inline ListEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of training jobs, use it in the subsequent request. </p>
     */
    inline ListEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of training jobs, use it in the subsequent request. </p>
     */
    inline ListEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EndpointSummary> m_endpoints;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
