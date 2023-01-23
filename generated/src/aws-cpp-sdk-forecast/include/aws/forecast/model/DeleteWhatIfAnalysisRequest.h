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
  class DeleteWhatIfAnalysisRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API DeleteWhatIfAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWhatIfAnalysis"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that you want to
     * delete.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisArn() const{ return m_whatIfAnalysisArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that you want to
     * delete.</p>
     */
    inline bool WhatIfAnalysisArnHasBeenSet() const { return m_whatIfAnalysisArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that you want to
     * delete.</p>
     */
    inline void SetWhatIfAnalysisArn(const Aws::String& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that you want to
     * delete.</p>
     */
    inline void SetWhatIfAnalysisArn(Aws::String&& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that you want to
     * delete.</p>
     */
    inline void SetWhatIfAnalysisArn(const char* value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that you want to
     * delete.</p>
     */
    inline DeleteWhatIfAnalysisRequest& WithWhatIfAnalysisArn(const Aws::String& value) { SetWhatIfAnalysisArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that you want to
     * delete.</p>
     */
    inline DeleteWhatIfAnalysisRequest& WithWhatIfAnalysisArn(Aws::String&& value) { SetWhatIfAnalysisArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that you want to
     * delete.</p>
     */
    inline DeleteWhatIfAnalysisRequest& WithWhatIfAnalysisArn(const char* value) { SetWhatIfAnalysisArn(value); return *this;}

  private:

    Aws::String m_whatIfAnalysisArn;
    bool m_whatIfAnalysisArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
