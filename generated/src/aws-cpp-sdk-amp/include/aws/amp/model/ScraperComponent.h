/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/ScraperComponentType.h>
#include <aws/amp/model/ComponentConfig.h>
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
   * <p>A component of a Amazon Managed Service for Prometheus scraper that can be
   * configured for logging.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ScraperComponent">AWS
   * API Reference</a></p>
   */
  class ScraperComponent
  {
  public:
    AWS_PROMETHEUSSERVICE_API ScraperComponent() = default;
    AWS_PROMETHEUSSERVICE_API ScraperComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API ScraperComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the scraper component.</p>
     */
    inline ScraperComponentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ScraperComponentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ScraperComponent& WithType(ScraperComponentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the scraper component.</p>
     */
    inline const ComponentConfig& GetConfig() const { return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    template<typename ConfigT = ComponentConfig>
    void SetConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config = std::forward<ConfigT>(value); }
    template<typename ConfigT = ComponentConfig>
    ScraperComponent& WithConfig(ConfigT&& value) { SetConfig(std::forward<ConfigT>(value)); return *this;}
    ///@}
  private:

    ScraperComponentType m_type{ScraperComponentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ComponentConfig m_config;
    bool m_configHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
