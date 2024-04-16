/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SummaryMetricConfigurationStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The configuration of summary metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SummaryMetricConfiguration">AWS
   * API Reference</a></p>
   */
  class SummaryMetricConfiguration
  {
  public:
    AWS_IOTWIRELESS_API SummaryMetricConfiguration();
    AWS_IOTWIRELESS_API SummaryMetricConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SummaryMetricConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the configuration of summary metrics.</p>
     */
    inline const SummaryMetricConfigurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the configuration of summary metrics.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the configuration of summary metrics.</p>
     */
    inline void SetStatus(const SummaryMetricConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the configuration of summary metrics.</p>
     */
    inline void SetStatus(SummaryMetricConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the configuration of summary metrics.</p>
     */
    inline SummaryMetricConfiguration& WithStatus(const SummaryMetricConfigurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the configuration of summary metrics.</p>
     */
    inline SummaryMetricConfiguration& WithStatus(SummaryMetricConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    SummaryMetricConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
