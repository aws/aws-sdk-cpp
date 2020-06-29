/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/Finding.h>
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
  class AWS_COMPUTEOPTIMIZER_API Summary
  {
  public:
    Summary();
    Summary(Aws::Utils::Json::JsonView jsonValue);
    Summary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Finding m_name;
    bool m_nameHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
