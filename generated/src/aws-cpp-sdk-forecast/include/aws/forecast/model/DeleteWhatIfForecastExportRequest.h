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
    AWS_FORECASTSERVICE_API DeleteWhatIfForecastExportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWhatIfForecastExport"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export that you want
     * to delete.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportArn() const { return m_whatIfForecastExportArn; }
    inline bool WhatIfForecastExportArnHasBeenSet() const { return m_whatIfForecastExportArnHasBeenSet; }
    template<typename WhatIfForecastExportArnT = Aws::String>
    void SetWhatIfForecastExportArn(WhatIfForecastExportArnT&& value) { m_whatIfForecastExportArnHasBeenSet = true; m_whatIfForecastExportArn = std::forward<WhatIfForecastExportArnT>(value); }
    template<typename WhatIfForecastExportArnT = Aws::String>
    DeleteWhatIfForecastExportRequest& WithWhatIfForecastExportArn(WhatIfForecastExportArnT&& value) { SetWhatIfForecastExportArn(std::forward<WhatIfForecastExportArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_whatIfForecastExportArn;
    bool m_whatIfForecastExportArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
