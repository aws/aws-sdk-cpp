/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>

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
namespace deadline
{
namespace Model
{

  /**
   * <p>The consumed usage for the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ConsumedUsages">AWS
   * API Reference</a></p>
   */
  class ConsumedUsages
  {
  public:
    AWS_DEADLINE_API ConsumedUsages();
    AWS_DEADLINE_API ConsumedUsages(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ConsumedUsages& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of the budget consumed.</p>
     */
    inline double GetApproximateDollarUsage() const{ return m_approximateDollarUsage; }

    /**
     * <p>The amount of the budget consumed.</p>
     */
    inline bool ApproximateDollarUsageHasBeenSet() const { return m_approximateDollarUsageHasBeenSet; }

    /**
     * <p>The amount of the budget consumed.</p>
     */
    inline void SetApproximateDollarUsage(double value) { m_approximateDollarUsageHasBeenSet = true; m_approximateDollarUsage = value; }

    /**
     * <p>The amount of the budget consumed.</p>
     */
    inline ConsumedUsages& WithApproximateDollarUsage(double value) { SetApproximateDollarUsage(value); return *this;}

  private:

    double m_approximateDollarUsage;
    bool m_approximateDollarUsageHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
