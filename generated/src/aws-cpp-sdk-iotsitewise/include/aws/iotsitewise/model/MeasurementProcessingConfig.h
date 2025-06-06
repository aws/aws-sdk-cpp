﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ForwardingConfig.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The processing configuration for the given measurement property. You can
   * configure measurements to be kept at the edge or forwarded to the Amazon Web
   * Services Cloud. By default, measurements are forwarded to the
   * cloud.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/MeasurementProcessingConfig">AWS
   * API Reference</a></p>
   */
  class MeasurementProcessingConfig
  {
  public:
    AWS_IOTSITEWISE_API MeasurementProcessingConfig() = default;
    AWS_IOTSITEWISE_API MeasurementProcessingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API MeasurementProcessingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The forwarding configuration for the given measurement property. </p>
     */
    inline const ForwardingConfig& GetForwardingConfig() const { return m_forwardingConfig; }
    inline bool ForwardingConfigHasBeenSet() const { return m_forwardingConfigHasBeenSet; }
    template<typename ForwardingConfigT = ForwardingConfig>
    void SetForwardingConfig(ForwardingConfigT&& value) { m_forwardingConfigHasBeenSet = true; m_forwardingConfig = std::forward<ForwardingConfigT>(value); }
    template<typename ForwardingConfigT = ForwardingConfig>
    MeasurementProcessingConfig& WithForwardingConfig(ForwardingConfigT&& value) { SetForwardingConfig(std::forward<ForwardingConfigT>(value)); return *this;}
    ///@}
  private:

    ForwardingConfig m_forwardingConfig;
    bool m_forwardingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
