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
#include <aws/lambda/model/FunctionConfiguration.h>
#include <aws/lambda/model/FunctionCodeLocation.h>

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
   * <p>This response contains the object for the Lambda function location (see .</p>
   */
  class AWS_LAMBDA_API GetFunctionResult
  {
  public:
    GetFunctionResult();
    GetFunctionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFunctionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const FunctionConfiguration& GetConfiguration() const{ return m_configuration; }

    
    inline void SetConfiguration(const FunctionConfiguration& value) { m_configuration = value; }

    
    inline void SetConfiguration(FunctionConfiguration&& value) { m_configuration = value; }

    
    inline GetFunctionResult& WithConfiguration(const FunctionConfiguration& value) { SetConfiguration(value); return *this;}

    
    inline GetFunctionResult& WithConfiguration(FunctionConfiguration&& value) { SetConfiguration(value); return *this;}

    
    inline const FunctionCodeLocation& GetCode() const{ return m_code; }

    
    inline void SetCode(const FunctionCodeLocation& value) { m_code = value; }

    
    inline void SetCode(FunctionCodeLocation&& value) { m_code = value; }

    
    inline GetFunctionResult& WithCode(const FunctionCodeLocation& value) { SetCode(value); return *this;}

    
    inline GetFunctionResult& WithCode(FunctionCodeLocation&& value) { SetCode(value); return *this;}

  private:
    FunctionConfiguration m_configuration;
    FunctionCodeLocation m_code;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
