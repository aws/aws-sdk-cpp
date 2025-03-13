/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/InstanceSavingsEstimationModeSource.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes the savings estimation mode used for calculating savings
   * opportunity for Amazon EC2 instances. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/InstanceSavingsEstimationMode">AWS
   * API Reference</a></p>
   */
  class InstanceSavingsEstimationMode
  {
  public:
    AWS_COMPUTEOPTIMIZER_API InstanceSavingsEstimationMode() = default;
    AWS_COMPUTEOPTIMIZER_API InstanceSavingsEstimationMode(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API InstanceSavingsEstimationMode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the source for calculating the savings opportunity for Amazon EC2
     * instances. </p>
     */
    inline InstanceSavingsEstimationModeSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(InstanceSavingsEstimationModeSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline InstanceSavingsEstimationMode& WithSource(InstanceSavingsEstimationModeSource value) { SetSource(value); return *this;}
    ///@}
  private:

    InstanceSavingsEstimationModeSource m_source{InstanceSavingsEstimationModeSource::NOT_SET};
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
