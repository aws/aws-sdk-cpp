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
  class AWS_FORECASTSERVICE_API CreateForecastExportJobResult
  {
  public:
    CreateForecastExportJobResult();
    CreateForecastExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateForecastExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the export job.</p>
     */
    inline const Aws::String& GetForecastExportJobArn() const{ return m_forecastExportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export job.</p>
     */
    inline void SetForecastExportJobArn(const Aws::String& value) { m_forecastExportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export job.</p>
     */
    inline void SetForecastExportJobArn(Aws::String&& value) { m_forecastExportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the export job.</p>
     */
    inline void SetForecastExportJobArn(const char* value) { m_forecastExportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the export job.</p>
     */
    inline CreateForecastExportJobResult& WithForecastExportJobArn(const Aws::String& value) { SetForecastExportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the export job.</p>
     */
    inline CreateForecastExportJobResult& WithForecastExportJobArn(Aws::String&& value) { SetForecastExportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the export job.</p>
     */
    inline CreateForecastExportJobResult& WithForecastExportJobArn(const char* value) { SetForecastExportJobArn(value); return *this;}

  private:

    Aws::String m_forecastExportJobArn;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
