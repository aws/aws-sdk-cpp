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
    AWS_PROMETHEUSSERVICE_API Destination();
    AWS_PROMETHEUSSERVICE_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Managed Service for Prometheusworkspace to send metrics to.</p>
     */
    inline const AmpConfiguration& GetAmpConfiguration() const{ return m_ampConfiguration; }

    /**
     * <p>The Amazon Managed Service for Prometheusworkspace to send metrics to.</p>
     */
    inline bool AmpConfigurationHasBeenSet() const { return m_ampConfigurationHasBeenSet; }

    /**
     * <p>The Amazon Managed Service for Prometheusworkspace to send metrics to.</p>
     */
    inline void SetAmpConfiguration(const AmpConfiguration& value) { m_ampConfigurationHasBeenSet = true; m_ampConfiguration = value; }

    /**
     * <p>The Amazon Managed Service for Prometheusworkspace to send metrics to.</p>
     */
    inline void SetAmpConfiguration(AmpConfiguration&& value) { m_ampConfigurationHasBeenSet = true; m_ampConfiguration = std::move(value); }

    /**
     * <p>The Amazon Managed Service for Prometheusworkspace to send metrics to.</p>
     */
    inline Destination& WithAmpConfiguration(const AmpConfiguration& value) { SetAmpConfiguration(value); return *this;}

    /**
     * <p>The Amazon Managed Service for Prometheusworkspace to send metrics to.</p>
     */
    inline Destination& WithAmpConfiguration(AmpConfiguration&& value) { SetAmpConfiguration(std::move(value)); return *this;}

  private:

    AmpConfiguration m_ampConfiguration;
    bool m_ampConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
