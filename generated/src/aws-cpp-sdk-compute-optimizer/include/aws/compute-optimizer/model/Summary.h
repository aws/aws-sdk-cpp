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
    AWS_COMPUTEOPTIMIZER_API Summary();
    AWS_COMPUTEOPTIMIZER_API Summary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Summary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The finding classification of the recommendation.</p>
     */
    inline const Finding& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Finding& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Finding&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline Summary& WithName(const Finding& value) { SetName(value); return *this;}
    inline Summary& WithName(Finding&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the recommendation summary.</p>
     */
    inline double GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline Summary& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that summarize a finding reason code.</p>
     */
    inline const Aws::Vector<ReasonCodeSummary>& GetReasonCodeSummaries() const{ return m_reasonCodeSummaries; }
    inline bool ReasonCodeSummariesHasBeenSet() const { return m_reasonCodeSummariesHasBeenSet; }
    inline void SetReasonCodeSummaries(const Aws::Vector<ReasonCodeSummary>& value) { m_reasonCodeSummariesHasBeenSet = true; m_reasonCodeSummaries = value; }
    inline void SetReasonCodeSummaries(Aws::Vector<ReasonCodeSummary>&& value) { m_reasonCodeSummariesHasBeenSet = true; m_reasonCodeSummaries = std::move(value); }
    inline Summary& WithReasonCodeSummaries(const Aws::Vector<ReasonCodeSummary>& value) { SetReasonCodeSummaries(value); return *this;}
    inline Summary& WithReasonCodeSummaries(Aws::Vector<ReasonCodeSummary>&& value) { SetReasonCodeSummaries(std::move(value)); return *this;}
    inline Summary& AddReasonCodeSummaries(const ReasonCodeSummary& value) { m_reasonCodeSummariesHasBeenSet = true; m_reasonCodeSummaries.push_back(value); return *this; }
    inline Summary& AddReasonCodeSummaries(ReasonCodeSummary&& value) { m_reasonCodeSummariesHasBeenSet = true; m_reasonCodeSummaries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Finding m_name;
    bool m_nameHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<ReasonCodeSummary> m_reasonCodeSummaries;
    bool m_reasonCodeSummariesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
