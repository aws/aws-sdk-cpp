﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/ApiMapping.h>
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
  class AWS_APIGATEWAYV2_API GetApiMappingsResult
  {
  public:
    GetApiMappingsResult();
    GetApiMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetApiMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The elements from this collection.</p>
     */
    inline const Aws::Vector<ApiMapping>& GetItems() const{ return m_items; }

    /**
     * <p>The elements from this collection.</p>
     */
    inline void SetItems(const Aws::Vector<ApiMapping>& value) { m_items = value; }

    /**
     * <p>The elements from this collection.</p>
     */
    inline void SetItems(Aws::Vector<ApiMapping>&& value) { m_items = std::move(value); }

    /**
     * <p>The elements from this collection.</p>
     */
    inline GetApiMappingsResult& WithItems(const Aws::Vector<ApiMapping>& value) { SetItems(value); return *this;}

    /**
     * <p>The elements from this collection.</p>
     */
    inline GetApiMappingsResult& WithItems(Aws::Vector<ApiMapping>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The elements from this collection.</p>
     */
    inline GetApiMappingsResult& AddItems(const ApiMapping& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The elements from this collection.</p>
     */
    inline GetApiMappingsResult& AddItems(ApiMapping&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline GetApiMappingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline GetApiMappingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline GetApiMappingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApiMapping> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
