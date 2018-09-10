/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_DYNAMODB_API DescribeEndpointsResult
  {
  public:
    DescribeEndpointsResult();
    DescribeEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<Endpoint>& GetEndpoints() const{ return m_endpoints; }

    
    inline void SetEndpoints(const Aws::Vector<Endpoint>& value) { m_endpoints = value; }

    
    inline void SetEndpoints(Aws::Vector<Endpoint>&& value) { m_endpoints = std::move(value); }

    
    inline DescribeEndpointsResult& WithEndpoints(const Aws::Vector<Endpoint>& value) { SetEndpoints(value); return *this;}

    
    inline DescribeEndpointsResult& WithEndpoints(Aws::Vector<Endpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    
    inline DescribeEndpointsResult& AddEndpoints(const Endpoint& value) { m_endpoints.push_back(value); return *this; }

    
    inline DescribeEndpointsResult& AddEndpoints(Endpoint&& value) { m_endpoints.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Endpoint> m_endpoints;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
