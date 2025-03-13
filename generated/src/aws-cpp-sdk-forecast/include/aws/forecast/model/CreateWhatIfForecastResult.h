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
    AWS_FORECASTSERVICE_API CreateWhatIfForecastResult() = default;
    AWS_FORECASTSERVICE_API CreateWhatIfForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateWhatIfForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline const Aws::String& GetWhatIfForecastArn() const { return m_whatIfForecastArn; }
    template<typename WhatIfForecastArnT = Aws::String>
    void SetWhatIfForecastArn(WhatIfForecastArnT&& value) { m_whatIfForecastArnHasBeenSet = true; m_whatIfForecastArn = std::forward<WhatIfForecastArnT>(value); }
    template<typename WhatIfForecastArnT = Aws::String>
    CreateWhatIfForecastResult& WithWhatIfForecastArn(WhatIfForecastArnT&& value) { SetWhatIfForecastArn(std::forward<WhatIfForecastArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWhatIfForecastResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_whatIfForecastArn;
    bool m_whatIfForecastArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
