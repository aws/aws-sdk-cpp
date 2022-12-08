/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BillingConductor
{
namespace Model
{

  /**
   * <p>A billing period filter that specifies the custom line item versions to
   * retrieve.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListCustomLineItemVersionsBillingPeriodRangeFilter">AWS
   * API Reference</a></p>
   */
  class ListCustomLineItemVersionsBillingPeriodRangeFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsBillingPeriodRangeFilter();
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsBillingPeriodRangeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsBillingPeriodRangeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The inclusive start billing period that defines a billing period range where
     * a custom line item version is applied.</p>
     */
    inline const Aws::String& GetStartBillingPeriod() const{ return m_startBillingPeriod; }

    /**
     * <p>The inclusive start billing period that defines a billing period range where
     * a custom line item version is applied.</p>
     */
    inline bool StartBillingPeriodHasBeenSet() const { return m_startBillingPeriodHasBeenSet; }

    /**
     * <p>The inclusive start billing period that defines a billing period range where
     * a custom line item version is applied.</p>
     */
    inline void SetStartBillingPeriod(const Aws::String& value) { m_startBillingPeriodHasBeenSet = true; m_startBillingPeriod = value; }

    /**
     * <p>The inclusive start billing period that defines a billing period range where
     * a custom line item version is applied.</p>
     */
    inline void SetStartBillingPeriod(Aws::String&& value) { m_startBillingPeriodHasBeenSet = true; m_startBillingPeriod = std::move(value); }

    /**
     * <p>The inclusive start billing period that defines a billing period range where
     * a custom line item version is applied.</p>
     */
    inline void SetStartBillingPeriod(const char* value) { m_startBillingPeriodHasBeenSet = true; m_startBillingPeriod.assign(value); }

    /**
     * <p>The inclusive start billing period that defines a billing period range where
     * a custom line item version is applied.</p>
     */
    inline ListCustomLineItemVersionsBillingPeriodRangeFilter& WithStartBillingPeriod(const Aws::String& value) { SetStartBillingPeriod(value); return *this;}

    /**
     * <p>The inclusive start billing period that defines a billing period range where
     * a custom line item version is applied.</p>
     */
    inline ListCustomLineItemVersionsBillingPeriodRangeFilter& WithStartBillingPeriod(Aws::String&& value) { SetStartBillingPeriod(std::move(value)); return *this;}

    /**
     * <p>The inclusive start billing period that defines a billing period range where
     * a custom line item version is applied.</p>
     */
    inline ListCustomLineItemVersionsBillingPeriodRangeFilter& WithStartBillingPeriod(const char* value) { SetStartBillingPeriod(value); return *this;}


    /**
     * <p>The exclusive end billing period that defines a billing period range where a
     * custom line item version is applied.</p>
     */
    inline const Aws::String& GetEndBillingPeriod() const{ return m_endBillingPeriod; }

    /**
     * <p>The exclusive end billing period that defines a billing period range where a
     * custom line item version is applied.</p>
     */
    inline bool EndBillingPeriodHasBeenSet() const { return m_endBillingPeriodHasBeenSet; }

    /**
     * <p>The exclusive end billing period that defines a billing period range where a
     * custom line item version is applied.</p>
     */
    inline void SetEndBillingPeriod(const Aws::String& value) { m_endBillingPeriodHasBeenSet = true; m_endBillingPeriod = value; }

    /**
     * <p>The exclusive end billing period that defines a billing period range where a
     * custom line item version is applied.</p>
     */
    inline void SetEndBillingPeriod(Aws::String&& value) { m_endBillingPeriodHasBeenSet = true; m_endBillingPeriod = std::move(value); }

    /**
     * <p>The exclusive end billing period that defines a billing period range where a
     * custom line item version is applied.</p>
     */
    inline void SetEndBillingPeriod(const char* value) { m_endBillingPeriodHasBeenSet = true; m_endBillingPeriod.assign(value); }

    /**
     * <p>The exclusive end billing period that defines a billing period range where a
     * custom line item version is applied.</p>
     */
    inline ListCustomLineItemVersionsBillingPeriodRangeFilter& WithEndBillingPeriod(const Aws::String& value) { SetEndBillingPeriod(value); return *this;}

    /**
     * <p>The exclusive end billing period that defines a billing period range where a
     * custom line item version is applied.</p>
     */
    inline ListCustomLineItemVersionsBillingPeriodRangeFilter& WithEndBillingPeriod(Aws::String&& value) { SetEndBillingPeriod(std::move(value)); return *this;}

    /**
     * <p>The exclusive end billing period that defines a billing period range where a
     * custom line item version is applied.</p>
     */
    inline ListCustomLineItemVersionsBillingPeriodRangeFilter& WithEndBillingPeriod(const char* value) { SetEndBillingPeriod(value); return *this;}

  private:

    Aws::String m_startBillingPeriod;
    bool m_startBillingPeriodHasBeenSet = false;

    Aws::String m_endBillingPeriod;
    bool m_endBillingPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
