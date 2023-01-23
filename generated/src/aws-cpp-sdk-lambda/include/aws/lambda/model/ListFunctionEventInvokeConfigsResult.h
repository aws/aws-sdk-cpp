/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FunctionEventInvokeConfig.h>
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
  class ListFunctionEventInvokeConfigsResult
  {
  public:
    AWS_LAMBDA_API ListFunctionEventInvokeConfigsResult();
    AWS_LAMBDA_API ListFunctionEventInvokeConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API ListFunctionEventInvokeConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of configurations.</p>
     */
    inline const Aws::Vector<FunctionEventInvokeConfig>& GetFunctionEventInvokeConfigs() const{ return m_functionEventInvokeConfigs; }

    /**
     * <p>A list of configurations.</p>
     */
    inline void SetFunctionEventInvokeConfigs(const Aws::Vector<FunctionEventInvokeConfig>& value) { m_functionEventInvokeConfigs = value; }

    /**
     * <p>A list of configurations.</p>
     */
    inline void SetFunctionEventInvokeConfigs(Aws::Vector<FunctionEventInvokeConfig>&& value) { m_functionEventInvokeConfigs = std::move(value); }

    /**
     * <p>A list of configurations.</p>
     */
    inline ListFunctionEventInvokeConfigsResult& WithFunctionEventInvokeConfigs(const Aws::Vector<FunctionEventInvokeConfig>& value) { SetFunctionEventInvokeConfigs(value); return *this;}

    /**
     * <p>A list of configurations.</p>
     */
    inline ListFunctionEventInvokeConfigsResult& WithFunctionEventInvokeConfigs(Aws::Vector<FunctionEventInvokeConfig>&& value) { SetFunctionEventInvokeConfigs(std::move(value)); return *this;}

    /**
     * <p>A list of configurations.</p>
     */
    inline ListFunctionEventInvokeConfigsResult& AddFunctionEventInvokeConfigs(const FunctionEventInvokeConfig& value) { m_functionEventInvokeConfigs.push_back(value); return *this; }

    /**
     * <p>A list of configurations.</p>
     */
    inline ListFunctionEventInvokeConfigsResult& AddFunctionEventInvokeConfigs(FunctionEventInvokeConfig&& value) { m_functionEventInvokeConfigs.push_back(std::move(value)); return *this; }


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
    inline ListFunctionEventInvokeConfigsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListFunctionEventInvokeConfigsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListFunctionEventInvokeConfigsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<FunctionEventInvokeConfig> m_functionEventInvokeConfigs;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
