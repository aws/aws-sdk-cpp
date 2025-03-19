/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AmpConfiguration.h>
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
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Where to send the metrics from a scraper.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/Destination">AWS API
   * Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_PROMETHEUSSERVICE_API Destination() = default;
    AWS_PROMETHEUSSERVICE_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Managed Service for Prometheus workspace to send metrics to.</p>
     */
    inline const AmpConfiguration& GetAmpConfiguration() const { return m_ampConfiguration; }
    inline bool AmpConfigurationHasBeenSet() const { return m_ampConfigurationHasBeenSet; }
    template<typename AmpConfigurationT = AmpConfiguration>
    void SetAmpConfiguration(AmpConfigurationT&& value) { m_ampConfigurationHasBeenSet = true; m_ampConfiguration = std::forward<AmpConfigurationT>(value); }
    template<typename AmpConfigurationT = AmpConfiguration>
    Destination& WithAmpConfiguration(AmpConfigurationT&& value) { SetAmpConfiguration(std::forward<AmpConfigurationT>(value)); return *this;}
    ///@}
  private:

    AmpConfiguration m_ampConfiguration;
    bool m_ampConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
