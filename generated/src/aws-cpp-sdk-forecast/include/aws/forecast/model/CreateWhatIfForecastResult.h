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
  class CreateWhatIfForecastResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateWhatIfForecastResult();
    AWS_FORECASTSERVICE_API CreateWhatIfForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateWhatIfForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline const Aws::String& GetWhatIfForecastArn() const{ return m_whatIfForecastArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline void SetWhatIfForecastArn(const Aws::String& value) { m_whatIfForecastArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline void SetWhatIfForecastArn(Aws::String&& value) { m_whatIfForecastArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline void SetWhatIfForecastArn(const char* value) { m_whatIfForecastArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline CreateWhatIfForecastResult& WithWhatIfForecastArn(const Aws::String& value) { SetWhatIfForecastArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline CreateWhatIfForecastResult& WithWhatIfForecastArn(Aws::String&& value) { SetWhatIfForecastArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline CreateWhatIfForecastResult& WithWhatIfForecastArn(const char* value) { SetWhatIfForecastArn(value); return *this;}

  private:

    Aws::String m_whatIfForecastArn;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
