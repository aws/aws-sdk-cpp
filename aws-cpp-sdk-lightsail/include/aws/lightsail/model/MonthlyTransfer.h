/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LIGHTSAIL_API MonthlyTransfer
  {
  public:
    MonthlyTransfer();
    MonthlyTransfer(Aws::Utils::Json::JsonView jsonValue);
    MonthlyTransfer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_gbPerMonthAllocatedHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
