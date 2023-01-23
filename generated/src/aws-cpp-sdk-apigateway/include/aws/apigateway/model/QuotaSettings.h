/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class QuotaSettings
  {
  public:
    AWS_APIGATEWAY_API QuotaSettings();
    AWS_APIGATEWAY_API QuotaSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API QuotaSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target maximum number of requests that can be made in a given time
     * period.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The target maximum number of requests that can be made in a given time
     * period.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The target maximum number of requests that can be made in a given time
     * period.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The target maximum number of requests that can be made in a given time
     * period.</p>
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
    bool m_limitHasBeenSet = false;

    int m_offset;
    bool m_offsetHasBeenSet = false;

    QuotaPeriodType m_period;
    bool m_periodHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
