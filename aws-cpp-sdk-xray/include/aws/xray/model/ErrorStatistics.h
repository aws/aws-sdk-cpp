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
#include <aws/xray/XRay_EXPORTS.h>

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
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about requests that failed with a 4xx Client Error status
   * code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ErrorStatistics">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API ErrorStatistics
  {
  public:
    ErrorStatistics();
    ErrorStatistics(Aws::Utils::Json::JsonView jsonValue);
    ErrorStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of requests that failed with a 419 throttling status code.</p>
     */
    inline long long GetThrottleCount() const{ return m_throttleCount; }

    /**
     * <p>The number of requests that failed with a 419 throttling status code.</p>
     */
    inline bool ThrottleCountHasBeenSet() const { return m_throttleCountHasBeenSet; }

    /**
     * <p>The number of requests that failed with a 419 throttling status code.</p>
     */
    inline void SetThrottleCount(long long value) { m_throttleCountHasBeenSet = true; m_throttleCount = value; }

    /**
     * <p>The number of requests that failed with a 419 throttling status code.</p>
     */
    inline ErrorStatistics& WithThrottleCount(long long value) { SetThrottleCount(value); return *this;}


    /**
     * <p>The number of requests that failed with untracked 4xx Client Error status
     * codes.</p>
     */
    inline long long GetOtherCount() const{ return m_otherCount; }

    /**
     * <p>The number of requests that failed with untracked 4xx Client Error status
     * codes.</p>
     */
    inline bool OtherCountHasBeenSet() const { return m_otherCountHasBeenSet; }

    /**
     * <p>The number of requests that failed with untracked 4xx Client Error status
     * codes.</p>
     */
    inline void SetOtherCount(long long value) { m_otherCountHasBeenSet = true; m_otherCount = value; }

    /**
     * <p>The number of requests that failed with untracked 4xx Client Error status
     * codes.</p>
     */
    inline ErrorStatistics& WithOtherCount(long long value) { SetOtherCount(value); return *this;}


    /**
     * <p>The total number of requests that failed with a 4xx Client Error status
     * code.</p>
     */
    inline long long GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of requests that failed with a 4xx Client Error status
     * code.</p>
     */
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }

    /**
     * <p>The total number of requests that failed with a 4xx Client Error status
     * code.</p>
     */
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }

    /**
     * <p>The total number of requests that failed with a 4xx Client Error status
     * code.</p>
     */
    inline ErrorStatistics& WithTotalCount(long long value) { SetTotalCount(value); return *this;}

  private:

    long long m_throttleCount;
    bool m_throttleCountHasBeenSet;

    long long m_otherCount;
    bool m_otherCountHasBeenSet;

    long long m_totalCount;
    bool m_totalCountHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
