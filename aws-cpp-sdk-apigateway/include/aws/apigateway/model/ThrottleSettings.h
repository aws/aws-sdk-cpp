/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Returns the throttle settings.</p>
   */
  class AWS_APIGATEWAY_API ThrottleSettings
  {
  public:
    ThrottleSettings();
    ThrottleSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    ThrottleSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Returns the burstLimit when <b>ThrottleSettings</b> is called.</p>
     */
    inline long GetBurstLimit() const{ return m_burstLimit; }

    /**
     * <p>Returns the burstLimit when <b>ThrottleSettings</b> is called.</p>
     */
    inline void SetBurstLimit(long value) { m_burstLimitHasBeenSet = true; m_burstLimit = value; }

    /**
     * <p>Returns the burstLimit when <b>ThrottleSettings</b> is called.</p>
     */
    inline ThrottleSettings& WithBurstLimit(long value) { SetBurstLimit(value); return *this;}

    /**
     * <p>Returns the rateLimit when <b>ThrottleSettings</b> is called.</p>
     */
    inline double GetRateLimit() const{ return m_rateLimit; }

    /**
     * <p>Returns the rateLimit when <b>ThrottleSettings</b> is called.</p>
     */
    inline void SetRateLimit(double value) { m_rateLimitHasBeenSet = true; m_rateLimit = value; }

    /**
     * <p>Returns the rateLimit when <b>ThrottleSettings</b> is called.</p>
     */
    inline ThrottleSettings& WithRateLimit(double value) { SetRateLimit(value); return *this;}

  private:
    long m_burstLimit;
    bool m_burstLimitHasBeenSet;
    double m_rateLimit;
    bool m_rateLimitHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
