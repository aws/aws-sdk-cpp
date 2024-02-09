/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/EksConfiguration.h>
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
   * <p>The source of collected metrics for a scraper.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/Source">AWS API
   * Reference</a></p>
   */
  class Source
  {
  public:
    AWS_PROMETHEUSSERVICE_API Source();
    AWS_PROMETHEUSSERVICE_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon EKS cluster from which a scraper collects metrics.</p>
     */
    inline const EksConfiguration& GetEksConfiguration() const{ return m_eksConfiguration; }

    /**
     * <p>The Amazon EKS cluster from which a scraper collects metrics.</p>
     */
    inline bool EksConfigurationHasBeenSet() const { return m_eksConfigurationHasBeenSet; }

    /**
     * <p>The Amazon EKS cluster from which a scraper collects metrics.</p>
     */
    inline void SetEksConfiguration(const EksConfiguration& value) { m_eksConfigurationHasBeenSet = true; m_eksConfiguration = value; }

    /**
     * <p>The Amazon EKS cluster from which a scraper collects metrics.</p>
     */
    inline void SetEksConfiguration(EksConfiguration&& value) { m_eksConfigurationHasBeenSet = true; m_eksConfiguration = std::move(value); }

    /**
     * <p>The Amazon EKS cluster from which a scraper collects metrics.</p>
     */
    inline Source& WithEksConfiguration(const EksConfiguration& value) { SetEksConfiguration(value); return *this;}

    /**
     * <p>The Amazon EKS cluster from which a scraper collects metrics.</p>
     */
    inline Source& WithEksConfiguration(EksConfiguration&& value) { SetEksConfiguration(std::move(value)); return *this;}

  private:

    EksConfiguration m_eksConfiguration;
    bool m_eksConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
