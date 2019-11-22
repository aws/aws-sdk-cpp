/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class AWS_FORECASTSERVICE_API CreateForecastRequest : public ForecastServiceRequest
  {
  public:
    CreateForecastRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateForecast"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the forecast.</p>
     */
    inline const Aws::String& GetForecastName() const{ return m_forecastName; }

    /**
     * <p>A name for the forecast.</p>
     */
    inline bool ForecastNameHasBeenSet() const { return m_forecastNameHasBeenSet; }

    /**
     * <p>A name for the forecast.</p>
     */
    inline void SetForecastName(const Aws::String& value) { m_forecastNameHasBeenSet = true; m_forecastName = value; }

    /**
     * <p>A name for the forecast.</p>
     */
    inline void SetForecastName(Aws::String&& value) { m_forecastNameHasBeenSet = true; m_forecastName = std::move(value); }

    /**
     * <p>A name for the forecast.</p>
     */
    inline void SetForecastName(const char* value) { m_forecastNameHasBeenSet = true; m_forecastName.assign(value); }

    /**
     * <p>A name for the forecast.</p>
     */
    inline CreateForecastRequest& WithForecastName(const Aws::String& value) { SetForecastName(value); return *this;}

    /**
     * <p>A name for the forecast.</p>
     */
    inline CreateForecastRequest& WithForecastName(Aws::String&& value) { SetForecastName(std::move(value)); return *this;}

    /**
     * <p>A name for the forecast.</p>
     */
    inline CreateForecastRequest& WithForecastName(const char* value) { SetForecastName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline bool PredictorArnHasBeenSet() const { return m_predictorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArnHasBeenSet = true; m_predictorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline void SetPredictorArn(const char* value) { m_predictorArnHasBeenSet = true; m_predictorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline CreateForecastRequest& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline CreateForecastRequest& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline CreateForecastRequest& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}


    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per forecast. Accepted values include <code>0.01 to
     * 0.99</code> (increments of .01 only) and <code>mean</code>. The mean forecast is
     * different from the median (0.50) when the distribution is not symmetric (e.g.
     * Beta, Negative Binomial). The default value is <code>["0.1", "0.5",
     * "0.9"]</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastTypes() const{ return m_forecastTypes; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per forecast. Accepted values include <code>0.01 to
     * 0.99</code> (increments of .01 only) and <code>mean</code>. The mean forecast is
     * different from the median (0.50) when the distribution is not symmetric (e.g.
     * Beta, Negative Binomial). The default value is <code>["0.1", "0.5",
     * "0.9"]</code>.</p>
     */
    inline bool ForecastTypesHasBeenSet() const { return m_forecastTypesHasBeenSet; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per forecast. Accepted values include <code>0.01 to
     * 0.99</code> (increments of .01 only) and <code>mean</code>. The mean forecast is
     * different from the median (0.50) when the distribution is not symmetric (e.g.
     * Beta, Negative Binomial). The default value is <code>["0.1", "0.5",
     * "0.9"]</code>.</p>
     */
    inline void SetForecastTypes(const Aws::Vector<Aws::String>& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes = value; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per forecast. Accepted values include <code>0.01 to
     * 0.99</code> (increments of .01 only) and <code>mean</code>. The mean forecast is
     * different from the median (0.50) when the distribution is not symmetric (e.g.
     * Beta, Negative Binomial). The default value is <code>["0.1", "0.5",
     * "0.9"]</code>.</p>
     */
    inline void SetForecastTypes(Aws::Vector<Aws::String>&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes = std::move(value); }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per forecast. Accepted values include <code>0.01 to
     * 0.99</code> (increments of .01 only) and <code>mean</code>. The mean forecast is
     * different from the median (0.50) when the distribution is not symmetric (e.g.
     * Beta, Negative Binomial). The default value is <code>["0.1", "0.5",
     * "0.9"]</code>.</p>
     */
    inline CreateForecastRequest& WithForecastTypes(const Aws::Vector<Aws::String>& value) { SetForecastTypes(value); return *this;}

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per forecast. Accepted values include <code>0.01 to
     * 0.99</code> (increments of .01 only) and <code>mean</code>. The mean forecast is
     * different from the median (0.50) when the distribution is not symmetric (e.g.
     * Beta, Negative Binomial). The default value is <code>["0.1", "0.5",
     * "0.9"]</code>.</p>
     */
    inline CreateForecastRequest& WithForecastTypes(Aws::Vector<Aws::String>&& value) { SetForecastTypes(std::move(value)); return *this;}

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per forecast. Accepted values include <code>0.01 to
     * 0.99</code> (increments of .01 only) and <code>mean</code>. The mean forecast is
     * different from the median (0.50) when the distribution is not symmetric (e.g.
     * Beta, Negative Binomial). The default value is <code>["0.1", "0.5",
     * "0.9"]</code>.</p>
     */
    inline CreateForecastRequest& AddForecastTypes(const Aws::String& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.push_back(value); return *this; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per forecast. Accepted values include <code>0.01 to
     * 0.99</code> (increments of .01 only) and <code>mean</code>. The mean forecast is
     * different from the median (0.50) when the distribution is not symmetric (e.g.
     * Beta, Negative Binomial). The default value is <code>["0.1", "0.5",
     * "0.9"]</code>.</p>
     */
    inline CreateForecastRequest& AddForecastTypes(Aws::String&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per forecast. Accepted values include <code>0.01 to
     * 0.99</code> (increments of .01 only) and <code>mean</code>. The mean forecast is
     * different from the median (0.50) when the distribution is not symmetric (e.g.
     * Beta, Negative Binomial). The default value is <code>["0.1", "0.5",
     * "0.9"]</code>.</p>
     */
    inline CreateForecastRequest& AddForecastTypes(const char* value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.push_back(value); return *this; }

  private:

    Aws::String m_forecastName;
    bool m_forecastNameHasBeenSet;

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet;

    Aws::Vector<Aws::String> m_forecastTypes;
    bool m_forecastTypesHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
