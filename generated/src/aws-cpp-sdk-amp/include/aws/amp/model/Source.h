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
   * <p>A representation of a source that a scraper can discover and collect metrics
   * from.</p><p><h3>See Also:</h3>   <a
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
     * <p>A representation of an EKS source.</p>
     */
    inline const EksConfiguration& GetEksConfiguration() const{ return m_eksConfiguration; }

    /**
     * <p>A representation of an EKS source.</p>
     */
    inline bool EksConfigurationHasBeenSet() const { return m_eksConfigurationHasBeenSet; }

    /**
     * <p>A representation of an EKS source.</p>
     */
    inline void SetEksConfiguration(const EksConfiguration& value) { m_eksConfigurationHasBeenSet = true; m_eksConfiguration = value; }

    /**
     * <p>A representation of an EKS source.</p>
     */
    inline void SetEksConfiguration(EksConfiguration&& value) { m_eksConfigurationHasBeenSet = true; m_eksConfiguration = std::move(value); }

    /**
     * <p>A representation of an EKS source.</p>
     */
    inline Source& WithEksConfiguration(const EksConfiguration& value) { SetEksConfiguration(value); return *this;}

    /**
     * <p>A representation of an EKS source.</p>
     */
    inline Source& WithEksConfiguration(EksConfiguration&& value) { SetEksConfiguration(std::move(value)); return *this;}

  private:

    EksConfiguration m_eksConfiguration;
    bool m_eksConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
