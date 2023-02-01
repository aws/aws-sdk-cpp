/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/FindingReasonCode.h>
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
   * <p>A summary of a finding reason code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ReasonCodeSummary">AWS
   * API Reference</a></p>
   */
  class ReasonCodeSummary
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ReasonCodeSummary();
    AWS_COMPUTEOPTIMIZER_API ReasonCodeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ReasonCodeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the finding reason code.</p>
     */
    inline const FindingReasonCode& GetName() const{ return m_name; }

    /**
     * <p>The name of the finding reason code.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the finding reason code.</p>
     */
    inline void SetName(const FindingReasonCode& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the finding reason code.</p>
     */
    inline void SetName(FindingReasonCode&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the finding reason code.</p>
     */
    inline ReasonCodeSummary& WithName(const FindingReasonCode& value) { SetName(value); return *this;}

    /**
     * <p>The name of the finding reason code.</p>
     */
    inline ReasonCodeSummary& WithName(FindingReasonCode&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the finding reason code summary.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the finding reason code summary.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the finding reason code summary.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the finding reason code summary.</p>
     */
    inline ReasonCodeSummary& WithValue(double value) { SetValue(value); return *this;}

  private:

    FindingReasonCode m_name;
    bool m_nameHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
