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
  class DescribeForecastExportJobRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API DescribeForecastExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeForecastExportJob"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline const Aws::String& GetForecastExportJobArn() const{ return m_forecastExportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline bool ForecastExportJobArnHasBeenSet() const { return m_forecastExportJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline void SetForecastExportJobArn(const Aws::String& value) { m_forecastExportJobArnHasBeenSet = true; m_forecastExportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline void SetForecastExportJobArn(Aws::String&& value) { m_forecastExportJobArnHasBeenSet = true; m_forecastExportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline void SetForecastExportJobArn(const char* value) { m_forecastExportJobArnHasBeenSet = true; m_forecastExportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline DescribeForecastExportJobRequest& WithForecastExportJobArn(const Aws::String& value) { SetForecastExportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline DescribeForecastExportJobRequest& WithForecastExportJobArn(Aws::String&& value) { SetForecastExportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline DescribeForecastExportJobRequest& WithForecastExportJobArn(const char* value) { SetForecastExportJobArn(value); return *this;}

  private:

    Aws::String m_forecastExportJobArn;
    bool m_forecastExportJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
