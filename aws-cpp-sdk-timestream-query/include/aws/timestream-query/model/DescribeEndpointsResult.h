/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-query/model/Endpoint.h>
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
namespace TimestreamQuery
{
namespace Model
{
  class DescribeEndpointsResult
  {
  public:
    AWS_TIMESTREAMQUERY_API DescribeEndpointsResult();
    AWS_TIMESTREAMQUERY_API DescribeEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API DescribeEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An <code>Endpoints</code> object is returned when a
     * <code>DescribeEndpoints</code> request is made.</p>
     */
    inline const Aws::Vector<Endpoint>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>An <code>Endpoints</code> object is returned when a
     * <code>DescribeEndpoints</code> request is made.</p>
     */
    inline void SetEndpoints(const Aws::Vector<Endpoint>& value) { m_endpoints = value; }

    /**
     * <p>An <code>Endpoints</code> object is returned when a
     * <code>DescribeEndpoints</code> request is made.</p>
     */
    inline void SetEndpoints(Aws::Vector<Endpoint>&& value) { m_endpoints = std::move(value); }

    /**
     * <p>An <code>Endpoints</code> object is returned when a
     * <code>DescribeEndpoints</code> request is made.</p>
     */
    inline DescribeEndpointsResult& WithEndpoints(const Aws::Vector<Endpoint>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>An <code>Endpoints</code> object is returned when a
     * <code>DescribeEndpoints</code> request is made.</p>
     */
    inline DescribeEndpointsResult& WithEndpoints(Aws::Vector<Endpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>An <code>Endpoints</code> object is returned when a
     * <code>DescribeEndpoints</code> request is made.</p>
     */
    inline DescribeEndpointsResult& AddEndpoints(const Endpoint& value) { m_endpoints.push_back(value); return *this; }

    /**
     * <p>An <code>Endpoints</code> object is returned when a
     * <code>DescribeEndpoints</code> request is made.</p>
     */
    inline DescribeEndpointsResult& AddEndpoints(Endpoint&& value) { m_endpoints.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Endpoint> m_endpoints;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
