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
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/FunctionConfiguration.h>
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
namespace AppSync
{
namespace Model
{
  class AWS_APPSYNC_API ListFunctionsResult
  {
  public:
    ListFunctionsResult();
    ListFunctionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFunctionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline const Aws::Vector<FunctionConfiguration>& GetFunctions() const{ return m_functions; }

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline void SetFunctions(const Aws::Vector<FunctionConfiguration>& value) { m_functions = value; }

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline void SetFunctions(Aws::Vector<FunctionConfiguration>&& value) { m_functions = std::move(value); }

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline ListFunctionsResult& WithFunctions(const Aws::Vector<FunctionConfiguration>& value) { SetFunctions(value); return *this;}

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline ListFunctionsResult& WithFunctions(Aws::Vector<FunctionConfiguration>&& value) { SetFunctions(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline ListFunctionsResult& AddFunctions(const FunctionConfiguration& value) { m_functions.push_back(value); return *this; }

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline ListFunctionsResult& AddFunctions(FunctionConfiguration&& value) { m_functions.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListFunctionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListFunctionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListFunctionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FunctionConfiguration> m_functions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
