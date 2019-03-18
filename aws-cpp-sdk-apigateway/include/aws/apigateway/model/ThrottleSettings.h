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
#include <aws/apigateway/APIGateway_EXPORTS.h>

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
namespace APIGateway
{
namespace Model
{

  /**
   * <p> The API request rate limits.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ThrottleSettings">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API ThrottleSettings
  {
  public:
    ThrottleSettings();
    ThrottleSettings(Aws::Utils::Json::JsonView jsonValue);
    ThrottleSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The API request burst limit, the maximum rate limit over a time ranging from
     * one to a few seconds, depending upon whether the underlying token bucket is at
     * its full capacity.</p>
     */
    inline int GetBurstLimit() const{ return m_burstLimit; }

    /**
     * <p>The API request burst limit, the maximum rate limit over a time ranging from
     * one to a few seconds, depending upon whether the underlying token bucket is at
     * its full capacity.</p>
     */
    inline bool BurstLimitHasBeenSet() const { return m_burstLimitHasBeenSet; }

    /**
     * <p>The API request burst limit, the maximum rate limit over a time ranging from
     * one to a few seconds, depending upon whether the underlying token bucket is at
     * its full capacity.</p>
     */
    inline void SetBurstLimit(int value) { m_burstLimitHasBeenSet = true; m_burstLimit = value; }

    /**
     * <p>The API request burst limit, the maximum rate limit over a time ranging from
     * one to a few seconds, depending upon whether the underlying token bucket is at
     * its full capacity.</p>
     */
    inline ThrottleSettings& WithBurstLimit(int value) { SetBurstLimit(value); return *this;}


    /**
     * <p>The API request steady-state rate limit.</p>
     */
    inline double GetRateLimit() const{ return m_rateLimit; }

    /**
     * <p>The API request steady-state rate limit.</p>
     */
    inline bool RateLimitHasBeenSet() const { return m_rateLimitHasBeenSet; }

    /**
     * <p>The API request steady-state rate limit.</p>
     */
    inline void SetRateLimit(double value) { m_rateLimitHasBeenSet = true; m_rateLimit = value; }

    /**
     * <p>The API request steady-state rate limit.</p>
     */
    inline ThrottleSettings& WithRateLimit(double value) { SetRateLimit(value); return *this;}

  private:

    int m_burstLimit;
    bool m_burstLimitHasBeenSet;

    double m_rateLimit;
    bool m_rateLimitHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
