/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/Endpoint.h>
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
namespace DynamoDB
{
namespace Model
{
  class DescribeEndpointsResult
  {
  public:
    AWS_DYNAMODB_API DescribeEndpointsResult();
    AWS_DYNAMODB_API DescribeEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of endpoints.</p>
     */
    inline const Aws::Vector<Endpoint>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>List of endpoints.</p>
     */
    inline void SetEndpoints(const Aws::Vector<Endpoint>& value) { m_endpoints = value; }

    /**
     * <p>List of endpoints.</p>
     */
    inline void SetEndpoints(Aws::Vector<Endpoint>&& value) { m_endpoints = std::move(value); }

    /**
     * <p>List of endpoints.</p>
     */
    inline DescribeEndpointsResult& WithEndpoints(const Aws::Vector<Endpoint>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>List of endpoints.</p>
     */
    inline DescribeEndpointsResult& WithEndpoints(Aws::Vector<Endpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>List of endpoints.</p>
     */
    inline DescribeEndpointsResult& AddEndpoints(const Endpoint& value) { m_endpoints.push_back(value); return *this; }

    /**
     * <p>List of endpoints.</p>
     */
    inline DescribeEndpointsResult& AddEndpoints(Endpoint&& value) { m_endpoints.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Endpoint> m_endpoints;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
