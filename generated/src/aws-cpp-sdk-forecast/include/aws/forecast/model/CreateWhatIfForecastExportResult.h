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
  class CreateWhatIfForecastExportResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateWhatIfForecastExportResult();
    AWS_FORECASTSERVICE_API CreateWhatIfForecastExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateWhatIfForecastExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportArn() const{ return m_whatIfForecastExportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline void SetWhatIfForecastExportArn(const Aws::String& value) { m_whatIfForecastExportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline void SetWhatIfForecastExportArn(Aws::String&& value) { m_whatIfForecastExportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline void SetWhatIfForecastExportArn(const char* value) { m_whatIfForecastExportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline CreateWhatIfForecastExportResult& WithWhatIfForecastExportArn(const Aws::String& value) { SetWhatIfForecastExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline CreateWhatIfForecastExportResult& WithWhatIfForecastExportArn(Aws::String&& value) { SetWhatIfForecastExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline CreateWhatIfForecastExportResult& WithWhatIfForecastExportArn(const char* value) { SetWhatIfForecastExportArn(value); return *this;}

  private:

    Aws::String m_whatIfForecastExportArn;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
