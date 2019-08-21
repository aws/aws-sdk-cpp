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
#include <aws/forecast/ForecastService_EXPORTS.h>
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
namespace ForecastService
{
namespace Model
{
  class AWS_FORECASTSERVICE_API CreateForecastResult
  {
  public:
    CreateForecastResult();
    CreateForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline const Aws::String& GetForecastArn() const{ return m_forecastArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline void SetForecastArn(const Aws::String& value) { m_forecastArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline void SetForecastArn(Aws::String&& value) { m_forecastArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline void SetForecastArn(const char* value) { m_forecastArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline CreateForecastResult& WithForecastArn(const Aws::String& value) { SetForecastArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline CreateForecastResult& WithForecastArn(Aws::String&& value) { SetForecastArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline CreateForecastResult& WithForecastArn(const char* value) { SetForecastArn(value); return *this;}

  private:

    Aws::String m_forecastArn;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
