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
   * <p> The billing period range in which the custom line item request will be
   * applied. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CustomLineItemBillingPeriodRange">AWS
   * API Reference</a></p>
   */
  class CustomLineItemBillingPeriodRange
  {
  public:
    AWS_BILLINGCONDUCTOR_API CustomLineItemBillingPeriodRange();
    AWS_BILLINGCONDUCTOR_API CustomLineItemBillingPeriodRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API CustomLineItemBillingPeriodRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The inclusive start billing period that defines a billing period range where
     * a custom line is applied. </p>
     */
    inline const Aws::String& GetInclusiveStartBillingPeriod() const{ return m_inclusiveStartBillingPeriod; }

    /**
     * <p> The inclusive start billing period that defines a billing period range where
     * a custom line is applied. </p>
     */
    inline bool InclusiveStartBillingPeriodHasBeenSet() const { return m_inclusiveStartBillingPeriodHasBeenSet; }

    /**
     * <p> The inclusive start billing period that defines a billing period range where
     * a custom line is applied. </p>
     */
    inline void SetInclusiveStartBillingPeriod(const Aws::String& value) { m_inclusiveStartBillingPeriodHasBeenSet = true; m_inclusiveStartBillingPeriod = value; }

    /**
     * <p> The inclusive start billing period that defines a billing period range where
     * a custom line is applied. </p>
     */
    inline void SetInclusiveStartBillingPeriod(Aws::String&& value) { m_inclusiveStartBillingPeriodHasBeenSet = true; m_inclusiveStartBillingPeriod = std::move(value); }

    /**
     * <p> The inclusive start billing period that defines a billing period range where
     * a custom line is applied. </p>
     */
    inline void SetInclusiveStartBillingPeriod(const char* value) { m_inclusiveStartBillingPeriodHasBeenSet = true; m_inclusiveStartBillingPeriod.assign(value); }

    /**
     * <p> The inclusive start billing period that defines a billing period range where
     * a custom line is applied. </p>
     */
    inline CustomLineItemBillingPeriodRange& WithInclusiveStartBillingPeriod(const Aws::String& value) { SetInclusiveStartBillingPeriod(value); return *this;}

    /**
     * <p> The inclusive start billing period that defines a billing period range where
     * a custom line is applied. </p>
     */
    inline CustomLineItemBillingPeriodRange& WithInclusiveStartBillingPeriod(Aws::String&& value) { SetInclusiveStartBillingPeriod(std::move(value)); return *this;}

    /**
     * <p> The inclusive start billing period that defines a billing period range where
     * a custom line is applied. </p>
     */
    inline CustomLineItemBillingPeriodRange& WithInclusiveStartBillingPeriod(const char* value) { SetInclusiveStartBillingPeriod(value); return *this;}


    /**
     * <p> The inclusive end billing period that defines a billing period range where a
     * custom line is applied. </p>
     */
    inline const Aws::String& GetExclusiveEndBillingPeriod() const{ return m_exclusiveEndBillingPeriod; }

    /**
     * <p> The inclusive end billing period that defines a billing period range where a
     * custom line is applied. </p>
     */
    inline bool ExclusiveEndBillingPeriodHasBeenSet() const { return m_exclusiveEndBillingPeriodHasBeenSet; }

    /**
     * <p> The inclusive end billing period that defines a billing period range where a
     * custom line is applied. </p>
     */
    inline void SetExclusiveEndBillingPeriod(const Aws::String& value) { m_exclusiveEndBillingPeriodHasBeenSet = true; m_exclusiveEndBillingPeriod = value; }

    /**
     * <p> The inclusive end billing period that defines a billing period range where a
     * custom line is applied. </p>
     */
    inline void SetExclusiveEndBillingPeriod(Aws::String&& value) { m_exclusiveEndBillingPeriodHasBeenSet = true; m_exclusiveEndBillingPeriod = std::move(value); }

    /**
     * <p> The inclusive end billing period that defines a billing period range where a
     * custom line is applied. </p>
     */
    inline void SetExclusiveEndBillingPeriod(const char* value) { m_exclusiveEndBillingPeriodHasBeenSet = true; m_exclusiveEndBillingPeriod.assign(value); }

    /**
     * <p> The inclusive end billing period that defines a billing period range where a
     * custom line is applied. </p>
     */
    inline CustomLineItemBillingPeriodRange& WithExclusiveEndBillingPeriod(const Aws::String& value) { SetExclusiveEndBillingPeriod(value); return *this;}

    /**
     * <p> The inclusive end billing period that defines a billing period range where a
     * custom line is applied. </p>
     */
    inline CustomLineItemBillingPeriodRange& WithExclusiveEndBillingPeriod(Aws::String&& value) { SetExclusiveEndBillingPeriod(std::move(value)); return *this;}

    /**
     * <p> The inclusive end billing period that defines a billing period range where a
     * custom line is applied. </p>
     */
    inline CustomLineItemBillingPeriodRange& WithExclusiveEndBillingPeriod(const char* value) { SetExclusiveEndBillingPeriod(value); return *this;}

  private:

    Aws::String m_inclusiveStartBillingPeriod;
    bool m_inclusiveStartBillingPeriodHasBeenSet = false;

    Aws::String m_exclusiveEndBillingPeriod;
    bool m_exclusiveEndBillingPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
