﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/Integration.h>
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
  class GetIntegrationsResult
  {
  public:
    AWS_APIGATEWAYV2_API GetIntegrationsResult();
    AWS_APIGATEWAYV2_API GetIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API GetIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The elements from this collection.</p>
     */
    inline const Aws::Vector<Integration>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<Integration>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<Integration>&& value) { m_items = std::move(value); }
    inline GetIntegrationsResult& WithItems(const Aws::Vector<Integration>& value) { SetItems(value); return *this;}
    inline GetIntegrationsResult& WithItems(Aws::Vector<Integration>&& value) { SetItems(std::move(value)); return *this;}
    inline GetIntegrationsResult& AddItems(const Integration& value) { m_items.push_back(value); return *this; }
    inline GetIntegrationsResult& AddItems(Integration&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetIntegrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetIntegrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetIntegrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIntegrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIntegrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIntegrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Integration> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
