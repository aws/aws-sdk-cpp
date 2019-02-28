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
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/IntegrationResponse.h>
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
namespace ApiGatewayV2
{
namespace Model
{
  class AWS_APIGATEWAYV2_API GetIntegrationResponsesResult
  {
  public:
    GetIntegrationResponsesResult();
    GetIntegrationResponsesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetIntegrationResponsesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The elements from this collection.</p>
     */
    inline const Aws::Vector<IntegrationResponse>& GetItems() const{ return m_items; }

    /**
     * <p>The elements from this collection.</p>
     */
    inline void SetItems(const Aws::Vector<IntegrationResponse>& value) { m_items = value; }

    /**
     * <p>The elements from this collection.</p>
     */
    inline void SetItems(Aws::Vector<IntegrationResponse>&& value) { m_items = std::move(value); }

    /**
     * <p>The elements from this collection.</p>
     */
    inline GetIntegrationResponsesResult& WithItems(const Aws::Vector<IntegrationResponse>& value) { SetItems(value); return *this;}

    /**
     * <p>The elements from this collection.</p>
     */
    inline GetIntegrationResponsesResult& WithItems(Aws::Vector<IntegrationResponse>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The elements from this collection.</p>
     */
    inline GetIntegrationResponsesResult& AddItems(const IntegrationResponse& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The elements from this collection.</p>
     */
    inline GetIntegrationResponsesResult& AddItems(IntegrationResponse&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of
 the collection.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of
 the collection.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of
 the collection.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of
 the collection.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of
 the collection.</p>
     */
    inline GetIntegrationResponsesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of
 the collection.</p>
     */
    inline GetIntegrationResponsesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of
 the collection.</p>
     */
    inline GetIntegrationResponsesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IntegrationResponse> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
