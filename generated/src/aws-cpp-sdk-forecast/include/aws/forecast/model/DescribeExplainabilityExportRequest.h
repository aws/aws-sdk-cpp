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
  class DescribeExplainabilityExportRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API DescribeExplainabilityExportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExplainabilityExport"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export.</p>
     */
    inline const Aws::String& GetExplainabilityExportArn() const { return m_explainabilityExportArn; }
    inline bool ExplainabilityExportArnHasBeenSet() const { return m_explainabilityExportArnHasBeenSet; }
    template<typename ExplainabilityExportArnT = Aws::String>
    void SetExplainabilityExportArn(ExplainabilityExportArnT&& value) { m_explainabilityExportArnHasBeenSet = true; m_explainabilityExportArn = std::forward<ExplainabilityExportArnT>(value); }
    template<typename ExplainabilityExportArnT = Aws::String>
    DescribeExplainabilityExportRequest& WithExplainabilityExportArn(ExplainabilityExportArnT&& value) { SetExplainabilityExportArn(std::forward<ExplainabilityExportArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_explainabilityExportArn;
    bool m_explainabilityExportArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
