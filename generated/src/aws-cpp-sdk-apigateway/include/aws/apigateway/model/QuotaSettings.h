﻿/**
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
    AWS_APIGATEWAY_API QuotaSettings() = default;
    AWS_APIGATEWAY_API QuotaSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API QuotaSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target maximum number of requests that can be made in a given time
     * period.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline QuotaSettings& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests subtracted from the given limit in the initial time
     * period.</p>
     */
    inline int GetOffset() const { return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline QuotaSettings& WithOffset(int value) { SetOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period in which the limit applies. Valid values are "DAY", "WEEK" or
     * "MONTH".</p>
     */
    inline QuotaPeriodType GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(QuotaPeriodType value) { m_periodHasBeenSet = true; m_period = value; }
    inline QuotaSettings& WithPeriod(QuotaPeriodType value) { SetPeriod(value); return *this;}
    ///@}
  private:

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    int m_offset{0};
    bool m_offsetHasBeenSet = false;

    QuotaPeriodType m_period{QuotaPeriodType::NOT_SET};
    bool m_periodHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
