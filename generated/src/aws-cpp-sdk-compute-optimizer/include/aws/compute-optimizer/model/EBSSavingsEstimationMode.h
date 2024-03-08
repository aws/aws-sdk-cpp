/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/EBSSavingsEstimationModeSource.h>
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
   * opportunity for Amazon EBS volumes. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/EBSSavingsEstimationMode">AWS
   * API Reference</a></p>
   */
  class EBSSavingsEstimationMode
  {
  public:
    AWS_COMPUTEOPTIMIZER_API EBSSavingsEstimationMode();
    AWS_COMPUTEOPTIMIZER_API EBSSavingsEstimationMode(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API EBSSavingsEstimationMode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Describes the source for calculating the savings opportunity for Amazon EBS
     * volumes. </p>
     */
    inline const EBSSavingsEstimationModeSource& GetSource() const{ return m_source; }

    /**
     * <p> Describes the source for calculating the savings opportunity for Amazon EBS
     * volumes. </p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p> Describes the source for calculating the savings opportunity for Amazon EBS
     * volumes. </p>
     */
    inline void SetSource(const EBSSavingsEstimationModeSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p> Describes the source for calculating the savings opportunity for Amazon EBS
     * volumes. </p>
     */
    inline void SetSource(EBSSavingsEstimationModeSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p> Describes the source for calculating the savings opportunity for Amazon EBS
     * volumes. </p>
     */
    inline EBSSavingsEstimationMode& WithSource(const EBSSavingsEstimationModeSource& value) { SetSource(value); return *this;}

    /**
     * <p> Describes the source for calculating the savings opportunity for Amazon EBS
     * volumes. </p>
     */
    inline EBSSavingsEstimationMode& WithSource(EBSSavingsEstimationModeSource&& value) { SetSource(std::move(value)); return *this;}

  private:

    EBSSavingsEstimationModeSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
