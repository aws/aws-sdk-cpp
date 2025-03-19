/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class DescribeWhatIfForecastRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWhatIfForecast"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast that you are
     * interested in.</p>
     */
    inline const Aws::String& GetWhatIfForecastArn() const { return m_whatIfForecastArn; }
    inline bool WhatIfForecastArnHasBeenSet() const { return m_whatIfForecastArnHasBeenSet; }
    template<typename WhatIfForecastArnT = Aws::String>
    void SetWhatIfForecastArn(WhatIfForecastArnT&& value) { m_whatIfForecastArnHasBeenSet = true; m_whatIfForecastArn = std::forward<WhatIfForecastArnT>(value); }
    template<typename WhatIfForecastArnT = Aws::String>
    DescribeWhatIfForecastRequest& WithWhatIfForecastArn(WhatIfForecastArnT&& value) { SetWhatIfForecastArn(std::forward<WhatIfForecastArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_whatIfForecastArn;
    bool m_whatIfForecastArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
