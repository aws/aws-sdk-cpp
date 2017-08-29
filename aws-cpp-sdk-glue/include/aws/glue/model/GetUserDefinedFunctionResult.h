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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/UserDefinedFunction.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetUserDefinedFunctionResult
  {
  public:
    GetUserDefinedFunctionResult();
    GetUserDefinedFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUserDefinedFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested function definition.</p>
     */
    inline const UserDefinedFunction& GetUserDefinedFunction() const{ return m_userDefinedFunction; }

    /**
     * <p>The requested function definition.</p>
     */
    inline void SetUserDefinedFunction(const UserDefinedFunction& value) { m_userDefinedFunction = value; }

    /**
     * <p>The requested function definition.</p>
     */
    inline void SetUserDefinedFunction(UserDefinedFunction&& value) { m_userDefinedFunction = std::move(value); }

    /**
     * <p>The requested function definition.</p>
     */
    inline GetUserDefinedFunctionResult& WithUserDefinedFunction(const UserDefinedFunction& value) { SetUserDefinedFunction(value); return *this;}

    /**
     * <p>The requested function definition.</p>
     */
    inline GetUserDefinedFunctionResult& WithUserDefinedFunction(UserDefinedFunction&& value) { SetUserDefinedFunction(std::move(value)); return *this;}

  private:

    UserDefinedFunction m_userDefinedFunction;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
