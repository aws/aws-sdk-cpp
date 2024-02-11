/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
   * <p>A representation of a Prometheus configuration file.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ScrapeConfiguration">AWS
   * API Reference</a></p>
   */
  class ScrapeConfiguration
  {
  public:
    AWS_PROMETHEUSSERVICE_API ScrapeConfiguration();
    AWS_PROMETHEUSSERVICE_API ScrapeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API ScrapeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Binary data representing a Prometheus configuration file.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetConfigurationBlob() const{ return m_configurationBlob; }

    /**
     * <p>Binary data representing a Prometheus configuration file.</p>
     */
    inline bool ConfigurationBlobHasBeenSet() const { return m_configurationBlobHasBeenSet; }

    /**
     * <p>Binary data representing a Prometheus configuration file.</p>
     */
    inline void SetConfigurationBlob(const Aws::Utils::ByteBuffer& value) { m_configurationBlobHasBeenSet = true; m_configurationBlob = value; }

    /**
     * <p>Binary data representing a Prometheus configuration file.</p>
     */
    inline void SetConfigurationBlob(Aws::Utils::ByteBuffer&& value) { m_configurationBlobHasBeenSet = true; m_configurationBlob = std::move(value); }

    /**
     * <p>Binary data representing a Prometheus configuration file.</p>
     */
    inline ScrapeConfiguration& WithConfigurationBlob(const Aws::Utils::ByteBuffer& value) { SetConfigurationBlob(value); return *this;}

    /**
     * <p>Binary data representing a Prometheus configuration file.</p>
     */
    inline ScrapeConfiguration& WithConfigurationBlob(Aws::Utils::ByteBuffer&& value) { SetConfigurationBlob(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_configurationBlob;
    bool m_configurationBlobHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
