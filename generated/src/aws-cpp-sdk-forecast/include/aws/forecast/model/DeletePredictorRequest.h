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
  class DeletePredictorRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API DeletePredictorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePredictor"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to delete.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to delete.</p>
     */
    inline bool PredictorArnHasBeenSet() const { return m_predictorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to delete.</p>
     */
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArnHasBeenSet = true; m_predictorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to delete.</p>
     */
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to delete.</p>
     */
    inline void SetPredictorArn(const char* value) { m_predictorArnHasBeenSet = true; m_predictorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to delete.</p>
     */
    inline DeletePredictorRequest& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to delete.</p>
     */
    inline DeletePredictorRequest& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to delete.</p>
     */
    inline DeletePredictorRequest& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}

  private:

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
