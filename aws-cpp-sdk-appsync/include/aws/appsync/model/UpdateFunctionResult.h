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
  class AWS_APPSYNC_API UpdateFunctionResult
  {
  public:
    UpdateFunctionResult();
    UpdateFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>Function</code> object.</p>
     */
    inline const FunctionConfiguration& GetFunctionConfiguration() const{ return m_functionConfiguration; }

    /**
     * <p>The <code>Function</code> object.</p>
     */
    inline void SetFunctionConfiguration(const FunctionConfiguration& value) { m_functionConfiguration = value; }

    /**
     * <p>The <code>Function</code> object.</p>
     */
    inline void SetFunctionConfiguration(FunctionConfiguration&& value) { m_functionConfiguration = std::move(value); }

    /**
     * <p>The <code>Function</code> object.</p>
     */
    inline UpdateFunctionResult& WithFunctionConfiguration(const FunctionConfiguration& value) { SetFunctionConfiguration(value); return *this;}

    /**
     * <p>The <code>Function</code> object.</p>
     */
    inline UpdateFunctionResult& WithFunctionConfiguration(FunctionConfiguration&& value) { SetFunctionConfiguration(std::move(value)); return *this;}

  private:

    FunctionConfiguration m_functionConfiguration;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
