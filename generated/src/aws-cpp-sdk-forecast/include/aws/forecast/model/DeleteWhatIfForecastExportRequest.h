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
  class DeleteWhatIfForecastExportRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API DeleteWhatIfForecastExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWhatIfForecastExport"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export that you want
     * to delete.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportArn() const{ return m_whatIfForecastExportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export that you want
     * to delete.</p>
     */
    inline bool WhatIfForecastExportArnHasBeenSet() const { return m_whatIfForecastExportArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export that you want
     * to delete.</p>
     */
    inline void SetWhatIfForecastExportArn(const Aws::String& value) { m_whatIfForecastExportArnHasBeenSet = true; m_whatIfForecastExportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export that you want
     * to delete.</p>
     */
    inline void SetWhatIfForecastExportArn(Aws::String&& value) { m_whatIfForecastExportArnHasBeenSet = true; m_whatIfForecastExportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export that you want
     * to delete.</p>
     */
    inline void SetWhatIfForecastExportArn(const char* value) { m_whatIfForecastExportArnHasBeenSet = true; m_whatIfForecastExportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export that you want
     * to delete.</p>
     */
    inline DeleteWhatIfForecastExportRequest& WithWhatIfForecastExportArn(const Aws::String& value) { SetWhatIfForecastExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export that you want
     * to delete.</p>
     */
    inline DeleteWhatIfForecastExportRequest& WithWhatIfForecastExportArn(Aws::String&& value) { SetWhatIfForecastExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export that you want
     * to delete.</p>
     */
    inline DeleteWhatIfForecastExportRequest& WithWhatIfForecastExportArn(const char* value) { SetWhatIfForecastExportArn(value); return *this;}

  private:

    Aws::String m_whatIfForecastExportArn;
    bool m_whatIfForecastExportArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
