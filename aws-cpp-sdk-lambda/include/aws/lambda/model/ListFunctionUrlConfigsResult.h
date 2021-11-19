/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FunctionUrlConfig.h>
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
  class AWS_LAMBDA_API ListFunctionUrlConfigsResult
  {
  public:
    ListFunctionUrlConfigsResult();
    ListFunctionUrlConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFunctionUrlConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<FunctionUrlConfig>& GetFunctionUrlConfigs() const{ return m_functionUrlConfigs; }

    
    inline void SetFunctionUrlConfigs(const Aws::Vector<FunctionUrlConfig>& value) { m_functionUrlConfigs = value; }

    
    inline void SetFunctionUrlConfigs(Aws::Vector<FunctionUrlConfig>&& value) { m_functionUrlConfigs = std::move(value); }

    
    inline ListFunctionUrlConfigsResult& WithFunctionUrlConfigs(const Aws::Vector<FunctionUrlConfig>& value) { SetFunctionUrlConfigs(value); return *this;}

    
    inline ListFunctionUrlConfigsResult& WithFunctionUrlConfigs(Aws::Vector<FunctionUrlConfig>&& value) { SetFunctionUrlConfigs(std::move(value)); return *this;}

    
    inline ListFunctionUrlConfigsResult& AddFunctionUrlConfigs(const FunctionUrlConfig& value) { m_functionUrlConfigs.push_back(value); return *this; }

    
    inline ListFunctionUrlConfigsResult& AddFunctionUrlConfigs(FunctionUrlConfig&& value) { m_functionUrlConfigs.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    
    inline ListFunctionUrlConfigsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    
    inline ListFunctionUrlConfigsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    
    inline ListFunctionUrlConfigsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<FunctionUrlConfig> m_functionUrlConfigs;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
