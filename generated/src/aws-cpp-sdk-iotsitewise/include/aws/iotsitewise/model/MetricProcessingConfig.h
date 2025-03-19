/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ComputeLocation.h>
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
   * <p>The processing configuration for the given metric property. You can configure
   * metrics to be computed at the edge or in the Amazon Web Services Cloud. By
   * default, metrics are forwarded to the cloud.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/MetricProcessingConfig">AWS
   * API Reference</a></p>
   */
  class MetricProcessingConfig
  {
  public:
    AWS_IOTSITEWISE_API MetricProcessingConfig() = default;
    AWS_IOTSITEWISE_API MetricProcessingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API MetricProcessingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compute location for the given metric property. </p>
     */
    inline ComputeLocation GetComputeLocation() const { return m_computeLocation; }
    inline bool ComputeLocationHasBeenSet() const { return m_computeLocationHasBeenSet; }
    inline void SetComputeLocation(ComputeLocation value) { m_computeLocationHasBeenSet = true; m_computeLocation = value; }
    inline MetricProcessingConfig& WithComputeLocation(ComputeLocation value) { SetComputeLocation(value); return *this;}
    ///@}
  private:

    ComputeLocation m_computeLocation{ComputeLocation::NOT_SET};
    bool m_computeLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
