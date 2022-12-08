/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>

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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the monthly data transfer in and out of your virtual private server
   * (or <i>instance</i>).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/MonthlyTransfer">AWS
   * API Reference</a></p>
   */
  class MonthlyTransfer
  {
  public:
    AWS_LIGHTSAIL_API MonthlyTransfer();
    AWS_LIGHTSAIL_API MonthlyTransfer(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API MonthlyTransfer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount allocated per month (in GB).</p>
     */
    inline int GetGbPerMonthAllocated() const{ return m_gbPerMonthAllocated; }

    /**
     * <p>The amount allocated per month (in GB).</p>
     */
    inline bool GbPerMonthAllocatedHasBeenSet() const { return m_gbPerMonthAllocatedHasBeenSet; }

    /**
     * <p>The amount allocated per month (in GB).</p>
     */
    inline void SetGbPerMonthAllocated(int value) { m_gbPerMonthAllocatedHasBeenSet = true; m_gbPerMonthAllocated = value; }

    /**
     * <p>The amount allocated per month (in GB).</p>
     */
    inline MonthlyTransfer& WithGbPerMonthAllocated(int value) { SetGbPerMonthAllocated(value); return *this;}

  private:

    int m_gbPerMonthAllocated;
    bool m_gbPerMonthAllocatedHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
