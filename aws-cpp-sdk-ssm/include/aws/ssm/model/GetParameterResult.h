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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/Parameter.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API GetParameterResult
  {
  public:
    GetParameterResult();
    GetParameterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetParameterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a parameter.</p>
     */
    inline const Parameter& GetParameter() const{ return m_parameter; }

    /**
     * <p>Information about a parameter.</p>
     */
    inline void SetParameter(const Parameter& value) { m_parameter = value; }

    /**
     * <p>Information about a parameter.</p>
     */
    inline void SetParameter(Parameter&& value) { m_parameter = std::move(value); }

    /**
     * <p>Information about a parameter.</p>
     */
    inline GetParameterResult& WithParameter(const Parameter& value) { SetParameter(value); return *this;}

    /**
     * <p>Information about a parameter.</p>
     */
    inline GetParameterResult& WithParameter(Parameter&& value) { SetParameter(std::move(value)); return *this;}

  private:

    Parameter m_parameter;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
