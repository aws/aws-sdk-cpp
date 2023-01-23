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
  class CreateForecastResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateForecastResult();
    AWS_FORECASTSERVICE_API CreateForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
