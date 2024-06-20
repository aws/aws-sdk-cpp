/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/RDSSavingsEstimationModeSource.h>
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
   * opportunity for Amazon RDS. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSSavingsEstimationMode">AWS
   * API Reference</a></p>
   */
  class RDSSavingsEstimationMode
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSSavingsEstimationMode();
    AWS_COMPUTEOPTIMIZER_API RDSSavingsEstimationMode(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSSavingsEstimationMode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the source for calculating the savings opportunity for Amazon RDS.
     * </p>
     */
    inline const RDSSavingsEstimationModeSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const RDSSavingsEstimationModeSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(RDSSavingsEstimationModeSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline RDSSavingsEstimationMode& WithSource(const RDSSavingsEstimationModeSource& value) { SetSource(value); return *this;}
    inline RDSSavingsEstimationMode& WithSource(RDSSavingsEstimationModeSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}
  private:

    RDSSavingsEstimationModeSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
