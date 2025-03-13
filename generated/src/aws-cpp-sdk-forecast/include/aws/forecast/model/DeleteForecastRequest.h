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
  class DeleteForecastRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API DeleteForecastRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteForecast"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the forecast to delete.</p>
     */
    inline const Aws::String& GetForecastArn() const { return m_forecastArn; }
    inline bool ForecastArnHasBeenSet() const { return m_forecastArnHasBeenSet; }
    template<typename ForecastArnT = Aws::String>
    void SetForecastArn(ForecastArnT&& value) { m_forecastArnHasBeenSet = true; m_forecastArn = std::forward<ForecastArnT>(value); }
    template<typename ForecastArnT = Aws::String>
    DeleteForecastRequest& WithForecastArn(ForecastArnT&& value) { SetForecastArn(std::forward<ForecastArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_forecastArn;
    bool m_forecastArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
