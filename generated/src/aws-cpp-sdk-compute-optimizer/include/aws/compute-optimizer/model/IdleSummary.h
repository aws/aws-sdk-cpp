/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/IdleFinding.h>
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
   * <p>Describes the findings summary of the idle resources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/IdleSummary">AWS
   * API Reference</a></p>
   */
  class IdleSummary
  {
  public:
    AWS_COMPUTEOPTIMIZER_API IdleSummary();
    AWS_COMPUTEOPTIMIZER_API IdleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API IdleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the finding group for the idle resources.</p>
     */
    inline const IdleFinding& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const IdleFinding& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(IdleFinding&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline IdleSummary& WithName(const IdleFinding& value) { SetName(value); return *this;}
    inline IdleSummary& WithName(IdleFinding&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of idle resources in the finding group.</p>
     */
    inline double GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline IdleSummary& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    IdleFinding m_name;
    bool m_nameHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
