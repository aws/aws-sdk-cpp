/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/FunctionConfiguration.h>

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
  /**
   * <p>Contains a list of AWS Lambda function configurations (see
   * <a>FunctionConfiguration</a>.</p>
   */
  class AWS_LAMBDA_API ListFunctionsResult
  {
  public:
    ListFunctionsResult();
    ListFunctionsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFunctionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A string, present if there are more functions.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>A string, present if there are more functions.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>A string, present if there are more functions.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = value; }

    /**
     * <p>A string, present if there are more functions.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>A string, present if there are more functions.</p>
     */
    inline ListFunctionsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>A string, present if there are more functions.</p>
     */
    inline ListFunctionsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>A string, present if there are more functions.</p>
     */
    inline ListFunctionsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

    /**
     * <p>A list of Lambda functions.</p>
     */
    inline const Aws::Vector<FunctionConfiguration>& GetFunctions() const{ return m_functions; }

    /**
     * <p>A list of Lambda functions.</p>
     */
    inline void SetFunctions(const Aws::Vector<FunctionConfiguration>& value) { m_functions = value; }

    /**
     * <p>A list of Lambda functions.</p>
     */
    inline void SetFunctions(Aws::Vector<FunctionConfiguration>&& value) { m_functions = value; }

    /**
     * <p>A list of Lambda functions.</p>
     */
    inline ListFunctionsResult& WithFunctions(const Aws::Vector<FunctionConfiguration>& value) { SetFunctions(value); return *this;}

    /**
     * <p>A list of Lambda functions.</p>
     */
    inline ListFunctionsResult& WithFunctions(Aws::Vector<FunctionConfiguration>&& value) { SetFunctions(value); return *this;}

    /**
     * <p>A list of Lambda functions.</p>
     */
    inline ListFunctionsResult& AddFunctions(const FunctionConfiguration& value) { m_functions.push_back(value); return *this; }

    /**
     * <p>A list of Lambda functions.</p>
     */
    inline ListFunctionsResult& AddFunctions(FunctionConfiguration&& value) { m_functions.push_back(value); return *this; }

  private:
    Aws::String m_nextMarker;
    Aws::Vector<FunctionConfiguration> m_functions;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
