/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/FunctionConfiguration.h>
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
  class ListVersionsByFunctionResult
  {
  public:
    AWS_LAMBDA_API ListVersionsByFunctionResult();
    AWS_LAMBDA_API ListVersionsByFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API ListVersionsByFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListVersionsByFunctionResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListVersionsByFunctionResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListVersionsByFunctionResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>A list of Lambda function versions.</p>
     */
    inline const Aws::Vector<FunctionConfiguration>& GetVersions() const{ return m_versions; }

    /**
     * <p>A list of Lambda function versions.</p>
     */
    inline void SetVersions(const Aws::Vector<FunctionConfiguration>& value) { m_versions = value; }

    /**
     * <p>A list of Lambda function versions.</p>
     */
    inline void SetVersions(Aws::Vector<FunctionConfiguration>&& value) { m_versions = std::move(value); }

    /**
     * <p>A list of Lambda function versions.</p>
     */
    inline ListVersionsByFunctionResult& WithVersions(const Aws::Vector<FunctionConfiguration>& value) { SetVersions(value); return *this;}

    /**
     * <p>A list of Lambda function versions.</p>
     */
    inline ListVersionsByFunctionResult& WithVersions(Aws::Vector<FunctionConfiguration>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p>A list of Lambda function versions.</p>
     */
    inline ListVersionsByFunctionResult& AddVersions(const FunctionConfiguration& value) { m_versions.push_back(value); return *this; }

    /**
     * <p>A list of Lambda function versions.</p>
     */
    inline ListVersionsByFunctionResult& AddVersions(FunctionConfiguration&& value) { m_versions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListVersionsByFunctionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListVersionsByFunctionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListVersionsByFunctionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextMarker;

    Aws::Vector<FunctionConfiguration> m_versions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
