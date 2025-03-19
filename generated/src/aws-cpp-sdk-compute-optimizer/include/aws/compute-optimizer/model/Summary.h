/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/Finding.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/ReasonCodeSummary.h>
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
   * <p>The summary of a recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/Summary">AWS
   * API Reference</a></p>
   */
  class Summary
  {
  public:
    AWS_COMPUTEOPTIMIZER_API Summary() = default;
    AWS_COMPUTEOPTIMIZER_API Summary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Summary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The finding classification of the recommendation.</p>
     */
    inline Finding GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(Finding value) { m_nameHasBeenSet = true; m_name = value; }
    inline Summary& WithName(Finding value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the recommendation summary.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline Summary& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that summarize a finding reason code.</p>
     */
    inline const Aws::Vector<ReasonCodeSummary>& GetReasonCodeSummaries() const { return m_reasonCodeSummaries; }
    inline bool ReasonCodeSummariesHasBeenSet() const { return m_reasonCodeSummariesHasBeenSet; }
    template<typename ReasonCodeSummariesT = Aws::Vector<ReasonCodeSummary>>
    void SetReasonCodeSummaries(ReasonCodeSummariesT&& value) { m_reasonCodeSummariesHasBeenSet = true; m_reasonCodeSummaries = std::forward<ReasonCodeSummariesT>(value); }
    template<typename ReasonCodeSummariesT = Aws::Vector<ReasonCodeSummary>>
    Summary& WithReasonCodeSummaries(ReasonCodeSummariesT&& value) { SetReasonCodeSummaries(std::forward<ReasonCodeSummariesT>(value)); return *this;}
    template<typename ReasonCodeSummariesT = ReasonCodeSummary>
    Summary& AddReasonCodeSummaries(ReasonCodeSummariesT&& value) { m_reasonCodeSummariesHasBeenSet = true; m_reasonCodeSummaries.emplace_back(std::forward<ReasonCodeSummariesT>(value)); return *this; }
    ///@}
  private:

    Finding m_name{Finding::NOT_SET};
    bool m_nameHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;

    Aws::Vector<ReasonCodeSummary> m_reasonCodeSummaries;
    bool m_reasonCodeSummariesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
