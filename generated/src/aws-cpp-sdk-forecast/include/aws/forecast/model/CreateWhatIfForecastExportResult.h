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
    AWS_FORECASTSERVICE_API CreateWhatIfForecastExportResult() = default;
    AWS_FORECASTSERVICE_API CreateWhatIfForecastExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateWhatIfForecastExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportArn() const { return m_whatIfForecastExportArn; }
    template<typename WhatIfForecastExportArnT = Aws::String>
    void SetWhatIfForecastExportArn(WhatIfForecastExportArnT&& value) { m_whatIfForecastExportArnHasBeenSet = true; m_whatIfForecastExportArn = std::forward<WhatIfForecastExportArnT>(value); }
    template<typename WhatIfForecastExportArnT = Aws::String>
    CreateWhatIfForecastExportResult& WithWhatIfForecastExportArn(WhatIfForecastExportArnT&& value) { SetWhatIfForecastExportArn(std::forward<WhatIfForecastExportArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWhatIfForecastExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_whatIfForecastExportArn;
    bool m_whatIfForecastExportArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
