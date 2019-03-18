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
#include <aws/apigateway/model/QuotaPeriodType.h>
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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Quotas configured for a usage plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/QuotaSettings">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API QuotaSettings
  {
  public:
    QuotaSettings();
    QuotaSettings(Aws::Utils::Json::JsonView jsonValue);
    QuotaSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of requests that can be made in a given time period.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of requests that can be made in a given time period.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of requests that can be made in a given time period.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of requests that can be made in a given time period.</p>
     */
    inline QuotaSettings& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The number of requests subtracted from the given limit in the initial time
     * period.</p>
     */
    inline int GetOffset() const{ return m_offset; }

    /**
     * <p>The number of requests subtracted from the given limit in the initial time
     * period.</p>
     */
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }

    /**
     * <p>The number of requests subtracted from the given limit in the initial time
     * period.</p>
     */
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }

    /**
     * <p>The number of requests subtracted from the given limit in the initial time
     * period.</p>
     */
    inline QuotaSettings& WithOffset(int value) { SetOffset(value); return *this;}


    /**
     * <p>The time period in which the limit applies. Valid values are "DAY", "WEEK" or
     * "MONTH".</p>
     */
    inline const QuotaPeriodType& GetPeriod() const{ return m_period; }

    /**
     * <p>The time period in which the limit applies. Valid values are "DAY", "WEEK" or
     * "MONTH".</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The time period in which the limit applies. Valid values are "DAY", "WEEK" or
     * "MONTH".</p>
     */
    inline void SetPeriod(const QuotaPeriodType& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The time period in which the limit applies. Valid values are "DAY", "WEEK" or
     * "MONTH".</p>
     */
    inline void SetPeriod(QuotaPeriodType&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>The time period in which the limit applies. Valid values are "DAY", "WEEK" or
     * "MONTH".</p>
     */
    inline QuotaSettings& WithPeriod(const QuotaPeriodType& value) { SetPeriod(value); return *this;}

    /**
     * <p>The time period in which the limit applies. Valid values are "DAY", "WEEK" or
     * "MONTH".</p>
     */
    inline QuotaSettings& WithPeriod(QuotaPeriodType&& value) { SetPeriod(std::move(value)); return *this;}

  private:

    int m_limit;
    bool m_limitHasBeenSet;

    int m_offset;
    bool m_offsetHasBeenSet;

    QuotaPeriodType m_period;
    bool m_periodHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
