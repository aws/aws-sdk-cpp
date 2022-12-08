/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateForecastExportJobResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateForecastExportJobResult();
    AWS_FORECASTSERVICE_API CreateForecastExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateForecastExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
