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
  class DescribeForecastRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API DescribeForecastRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeForecast"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline const Aws::String& GetForecastArn() const{ return m_forecastArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline bool ForecastArnHasBeenSet() const { return m_forecastArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline void SetForecastArn(const Aws::String& value) { m_forecastArnHasBeenSet = true; m_forecastArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline void SetForecastArn(Aws::String&& value) { m_forecastArnHasBeenSet = true; m_forecastArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline void SetForecastArn(const char* value) { m_forecastArnHasBeenSet = true; m_forecastArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline DescribeForecastRequest& WithForecastArn(const Aws::String& value) { SetForecastArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline DescribeForecastRequest& WithForecastArn(Aws::String&& value) { SetForecastArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast.</p>
     */
    inline DescribeForecastRequest& WithForecastArn(const char* value) { SetForecastArn(value); return *this;}

  private:

    Aws::String m_forecastArn;
    bool m_forecastArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
