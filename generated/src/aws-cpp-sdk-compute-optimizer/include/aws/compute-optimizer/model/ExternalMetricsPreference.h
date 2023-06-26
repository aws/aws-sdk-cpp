/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/ExternalMetricsSource.h>
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
   * <p> Describes the external metrics preferences for EC2 rightsizing
   * recommendations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ExternalMetricsPreference">AWS
   * API Reference</a></p>
   */
  class ExternalMetricsPreference
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ExternalMetricsPreference();
    AWS_COMPUTEOPTIMIZER_API ExternalMetricsPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ExternalMetricsPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Contains the source options for external metrics preferences. </p>
     */
    inline const ExternalMetricsSource& GetSource() const{ return m_source; }

    /**
     * <p> Contains the source options for external metrics preferences. </p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p> Contains the source options for external metrics preferences. </p>
     */
    inline void SetSource(const ExternalMetricsSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p> Contains the source options for external metrics preferences. </p>
     */
    inline void SetSource(ExternalMetricsSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p> Contains the source options for external metrics preferences. </p>
     */
    inline ExternalMetricsPreference& WithSource(const ExternalMetricsSource& value) { SetSource(value); return *this;}

    /**
     * <p> Contains the source options for external metrics preferences. </p>
     */
    inline ExternalMetricsPreference& WithSource(ExternalMetricsSource&& value) { SetSource(std::move(value)); return *this;}

  private:

    ExternalMetricsSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
