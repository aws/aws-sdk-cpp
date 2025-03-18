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
    AWS_FORECASTSERVICE_API CreateForecastExportJobResult() = default;
    AWS_FORECASTSERVICE_API CreateForecastExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateForecastExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the export job.</p>
     */
    inline const Aws::String& GetForecastExportJobArn() const { return m_forecastExportJobArn; }
    template<typename ForecastExportJobArnT = Aws::String>
    void SetForecastExportJobArn(ForecastExportJobArnT&& value) { m_forecastExportJobArnHasBeenSet = true; m_forecastExportJobArn = std::forward<ForecastExportJobArnT>(value); }
    template<typename ForecastExportJobArnT = Aws::String>
    CreateForecastExportJobResult& WithForecastExportJobArn(ForecastExportJobArnT&& value) { SetForecastExportJobArn(std::forward<ForecastExportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateForecastExportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_forecastExportJobArn;
    bool m_forecastExportJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
