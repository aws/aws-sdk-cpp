﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Connect
{
namespace Model
{
  class ListLambdaFunctionsResult
  {
  public:
    AWS_CONNECT_API ListLambdaFunctionsResult();
    AWS_CONNECT_API ListLambdaFunctionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListLambdaFunctionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Lambdafunction ARNs associated with the specified instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLambdaFunctions() const{ return m_lambdaFunctions; }
    inline void SetLambdaFunctions(const Aws::Vector<Aws::String>& value) { m_lambdaFunctions = value; }
    inline void SetLambdaFunctions(Aws::Vector<Aws::String>&& value) { m_lambdaFunctions = std::move(value); }
    inline ListLambdaFunctionsResult& WithLambdaFunctions(const Aws::Vector<Aws::String>& value) { SetLambdaFunctions(value); return *this;}
    inline ListLambdaFunctionsResult& WithLambdaFunctions(Aws::Vector<Aws::String>&& value) { SetLambdaFunctions(std::move(value)); return *this;}
    inline ListLambdaFunctionsResult& AddLambdaFunctions(const Aws::String& value) { m_lambdaFunctions.push_back(value); return *this; }
    inline ListLambdaFunctionsResult& AddLambdaFunctions(Aws::String&& value) { m_lambdaFunctions.push_back(std::move(value)); return *this; }
    inline ListLambdaFunctionsResult& AddLambdaFunctions(const char* value) { m_lambdaFunctions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLambdaFunctionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLambdaFunctionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLambdaFunctionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLambdaFunctionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLambdaFunctionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLambdaFunctionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_lambdaFunctions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
