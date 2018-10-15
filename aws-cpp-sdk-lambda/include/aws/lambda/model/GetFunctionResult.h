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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/FunctionConfiguration.h>
#include <aws/lambda/model/FunctionCodeLocation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lambda/model/Concurrency.h>
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
namespace Lambda
{
namespace Model
{
  /**
   * <p>This response contains the object for the Lambda function location (see
   * <a>FunctionCodeLocation</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionResponse">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API GetFunctionResult
  {
  public:
    GetFunctionResult();
    GetFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The function's configuration.</p>
     */
    inline const FunctionConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The function's configuration.</p>
     */
    inline void SetConfiguration(const FunctionConfiguration& value) { m_configuration = value; }

    /**
     * <p>The function's configuration.</p>
     */
    inline void SetConfiguration(FunctionConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>The function's configuration.</p>
     */
    inline GetFunctionResult& WithConfiguration(const FunctionConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The function's configuration.</p>
     */
    inline GetFunctionResult& WithConfiguration(FunctionConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The function's code.</p>
     */
    inline const FunctionCodeLocation& GetCode() const{ return m_code; }

    /**
     * <p>The function's code.</p>
     */
    inline void SetCode(const FunctionCodeLocation& value) { m_code = value; }

    /**
     * <p>The function's code.</p>
     */
    inline void SetCode(FunctionCodeLocation&& value) { m_code = std::move(value); }

    /**
     * <p>The function's code.</p>
     */
    inline GetFunctionResult& WithCode(const FunctionCodeLocation& value) { SetCode(value); return *this;}

    /**
     * <p>The function's code.</p>
     */
    inline GetFunctionResult& WithCode(FunctionCodeLocation&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>Returns the list of tags associated with the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Returns the list of tags associated with the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Returns the list of tags associated with the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Returns the list of tags associated with the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline GetFunctionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Returns the list of tags associated with the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline GetFunctionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Returns the list of tags associated with the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline GetFunctionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Returns the list of tags associated with the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline GetFunctionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Returns the list of tags associated with the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline GetFunctionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Returns the list of tags associated with the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline GetFunctionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Returns the list of tags associated with the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline GetFunctionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Returns the list of tags associated with the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline GetFunctionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Returns the list of tags associated with the function. For more information,
     * see <a href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging
     * Lambda Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline GetFunctionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The concurrent execution limit set for this function. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
     * Concurrency</a>.</p>
     */
    inline const Concurrency& GetConcurrency() const{ return m_concurrency; }

    /**
     * <p>The concurrent execution limit set for this function. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
     * Concurrency</a>.</p>
     */
    inline void SetConcurrency(const Concurrency& value) { m_concurrency = value; }

    /**
     * <p>The concurrent execution limit set for this function. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
     * Concurrency</a>.</p>
     */
    inline void SetConcurrency(Concurrency&& value) { m_concurrency = std::move(value); }

    /**
     * <p>The concurrent execution limit set for this function. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
     * Concurrency</a>.</p>
     */
    inline GetFunctionResult& WithConcurrency(const Concurrency& value) { SetConcurrency(value); return *this;}

    /**
     * <p>The concurrent execution limit set for this function. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
     * Concurrency</a>.</p>
     */
    inline GetFunctionResult& WithConcurrency(Concurrency&& value) { SetConcurrency(std::move(value)); return *this;}

  private:

    FunctionConfiguration m_configuration;

    FunctionCodeLocation m_code;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Concurrency m_concurrency;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
