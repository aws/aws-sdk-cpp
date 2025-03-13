/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/iotwireless/model/SummaryMetricConfiguration.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class UpdateMetricConfigurationRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API UpdateMetricConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMetricConfiguration"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The value to be used to set summary metric configuration.</p>
     */
    inline const SummaryMetricConfiguration& GetSummaryMetric() const { return m_summaryMetric; }
    inline bool SummaryMetricHasBeenSet() const { return m_summaryMetricHasBeenSet; }
    template<typename SummaryMetricT = SummaryMetricConfiguration>
    void SetSummaryMetric(SummaryMetricT&& value) { m_summaryMetricHasBeenSet = true; m_summaryMetric = std::forward<SummaryMetricT>(value); }
    template<typename SummaryMetricT = SummaryMetricConfiguration>
    UpdateMetricConfigurationRequest& WithSummaryMetric(SummaryMetricT&& value) { SetSummaryMetric(std::forward<SummaryMetricT>(value)); return *this;}
    ///@}
  private:

    SummaryMetricConfiguration m_summaryMetric;
    bool m_summaryMetricHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
