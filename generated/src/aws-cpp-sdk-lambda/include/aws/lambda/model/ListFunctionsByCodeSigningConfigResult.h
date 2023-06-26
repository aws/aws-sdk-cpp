/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Lambda
{
namespace Model
{
  class ListFunctionsByCodeSigningConfigResult
  {
  public:
    AWS_LAMBDA_API ListFunctionsByCodeSigningConfigResult();
    AWS_LAMBDA_API ListFunctionsByCodeSigningConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API ListFunctionsByCodeSigningConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListFunctionsByCodeSigningConfigResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListFunctionsByCodeSigningConfigResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListFunctionsByCodeSigningConfigResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The function ARNs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFunctionArns() const{ return m_functionArns; }

    /**
     * <p>The function ARNs. </p>
     */
    inline void SetFunctionArns(const Aws::Vector<Aws::String>& value) { m_functionArns = value; }

    /**
     * <p>The function ARNs. </p>
     */
    inline void SetFunctionArns(Aws::Vector<Aws::String>&& value) { m_functionArns = std::move(value); }

    /**
     * <p>The function ARNs. </p>
     */
    inline ListFunctionsByCodeSigningConfigResult& WithFunctionArns(const Aws::Vector<Aws::String>& value) { SetFunctionArns(value); return *this;}

    /**
     * <p>The function ARNs. </p>
     */
    inline ListFunctionsByCodeSigningConfigResult& WithFunctionArns(Aws::Vector<Aws::String>&& value) { SetFunctionArns(std::move(value)); return *this;}

    /**
     * <p>The function ARNs. </p>
     */
    inline ListFunctionsByCodeSigningConfigResult& AddFunctionArns(const Aws::String& value) { m_functionArns.push_back(value); return *this; }

    /**
     * <p>The function ARNs. </p>
     */
    inline ListFunctionsByCodeSigningConfigResult& AddFunctionArns(Aws::String&& value) { m_functionArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The function ARNs. </p>
     */
    inline ListFunctionsByCodeSigningConfigResult& AddFunctionArns(const char* value) { m_functionArns.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListFunctionsByCodeSigningConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListFunctionsByCodeSigningConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListFunctionsByCodeSigningConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextMarker;

    Aws::Vector<Aws::String> m_functionArns;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
