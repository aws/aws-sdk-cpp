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


    /**
     * <p>The finding classification of the recommendation.</p>
     */
    inline const Finding& GetName() const{ return m_name; }

    /**
     * <p>The finding classification of the recommendation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The finding classification of the recommendation.</p>
     */
    inline void SetName(const Finding& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The finding classification of the recommendation.</p>
     */
    inline void SetName(Finding&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The finding classification of the recommendation.</p>
     */
    inline Summary& WithName(const Finding& value) { SetName(value); return *this;}

    /**
     * <p>The finding classification of the recommendation.</p>
     */
    inline Summary& WithName(Finding&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the recommendation summary.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the recommendation summary.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the recommendation summary.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the recommendation summary.</p>
     */
    inline Summary& WithValue(double value) { SetValue(value); return *this;}


    /**
     * <p>An array of objects that summarize a finding reason code.</p>
     */
    inline const Aws::Vector<ReasonCodeSummary>& GetReasonCodeSummaries() const{ return m_reasonCodeSummaries; }

    /**
     * <p>An array of objects that summarize a finding reason code.</p>
     */
    inline bool ReasonCodeSummariesHasBeenSet() const { return m_reasonCodeSummariesHasBeenSet; }

    /**
     * <p>An array of objects that summarize a finding reason code.</p>
     */
    inline void SetReasonCodeSummaries(const Aws::Vector<ReasonCodeSummary>& value) { m_reasonCodeSummariesHasBeenSet = true; m_reasonCodeSummaries = value; }

    /**
     * <p>An array of objects that summarize a finding reason code.</p>
     */
    inline void SetReasonCodeSummaries(Aws::Vector<ReasonCodeSummary>&& value) { m_reasonCodeSummariesHasBeenSet = true; m_reasonCodeSummaries = std::move(value); }

    /**
     * <p>An array of objects that summarize a finding reason code.</p>
     */
    inline Summary& WithReasonCodeSummaries(const Aws::Vector<ReasonCodeSummary>& value) { SetReasonCodeSummaries(value); return *this;}

    /**
     * <p>An array of objects that summarize a finding reason code.</p>
     */
    inline Summary& WithReasonCodeSummaries(Aws::Vector<ReasonCodeSummary>&& value) { SetReasonCodeSummaries(std::move(value)); return *this;}

    /**
     * <p>An array of objects that summarize a finding reason code.</p>
     */
    inline Summary& AddReasonCodeSummaries(const ReasonCodeSummary& value) { m_reasonCodeSummariesHasBeenSet = true; m_reasonCodeSummaries.push_back(value); return *this; }

    /**
     * <p>An array of objects that summarize a finding reason code.</p>
     */
    inline Summary& AddReasonCodeSummaries(ReasonCodeSummary&& value) { m_reasonCodeSummariesHasBeenSet = true; m_reasonCodeSummaries.push_back(std::move(value)); return *this; }

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
