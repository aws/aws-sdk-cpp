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
   * <p>A time range for which the margin summary is effective. The time range can be
   * up to 12 months.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/BillingPeriodRange">AWS
   * API Reference</a></p>
   */
  class BillingPeriodRange
  {
  public:
    AWS_BILLINGCONDUCTOR_API BillingPeriodRange();
    AWS_BILLINGCONDUCTOR_API BillingPeriodRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API BillingPeriodRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The inclusive start billing period that defines a billing period range for
     * the margin summary.</p>
     */
    inline const Aws::String& GetInclusiveStartBillingPeriod() const{ return m_inclusiveStartBillingPeriod; }

    /**
     * <p>The inclusive start billing period that defines a billing period range for
     * the margin summary.</p>
     */
    inline bool InclusiveStartBillingPeriodHasBeenSet() const { return m_inclusiveStartBillingPeriodHasBeenSet; }

    /**
     * <p>The inclusive start billing period that defines a billing period range for
     * the margin summary.</p>
     */
    inline void SetInclusiveStartBillingPeriod(const Aws::String& value) { m_inclusiveStartBillingPeriodHasBeenSet = true; m_inclusiveStartBillingPeriod = value; }

    /**
     * <p>The inclusive start billing period that defines a billing period range for
     * the margin summary.</p>
     */
    inline void SetInclusiveStartBillingPeriod(Aws::String&& value) { m_inclusiveStartBillingPeriodHasBeenSet = true; m_inclusiveStartBillingPeriod = std::move(value); }

    /**
     * <p>The inclusive start billing period that defines a billing period range for
     * the margin summary.</p>
     */
    inline void SetInclusiveStartBillingPeriod(const char* value) { m_inclusiveStartBillingPeriodHasBeenSet = true; m_inclusiveStartBillingPeriod.assign(value); }

    /**
     * <p>The inclusive start billing period that defines a billing period range for
     * the margin summary.</p>
     */
    inline BillingPeriodRange& WithInclusiveStartBillingPeriod(const Aws::String& value) { SetInclusiveStartBillingPeriod(value); return *this;}

    /**
     * <p>The inclusive start billing period that defines a billing period range for
     * the margin summary.</p>
     */
    inline BillingPeriodRange& WithInclusiveStartBillingPeriod(Aws::String&& value) { SetInclusiveStartBillingPeriod(std::move(value)); return *this;}

    /**
     * <p>The inclusive start billing period that defines a billing period range for
     * the margin summary.</p>
     */
    inline BillingPeriodRange& WithInclusiveStartBillingPeriod(const char* value) { SetInclusiveStartBillingPeriod(value); return *this;}


    /**
     * <p>The exclusive end billing period that defines a billing period range for the
     * margin summary. For example, if you choose a billing period that starts in
     * October 2023 and ends in December 2023, the margin summary will only include
     * data from October 2023 and November 2023.</p>
     */
    inline const Aws::String& GetExclusiveEndBillingPeriod() const{ return m_exclusiveEndBillingPeriod; }

    /**
     * <p>The exclusive end billing period that defines a billing period range for the
     * margin summary. For example, if you choose a billing period that starts in
     * October 2023 and ends in December 2023, the margin summary will only include
     * data from October 2023 and November 2023.</p>
     */
    inline bool ExclusiveEndBillingPeriodHasBeenSet() const { return m_exclusiveEndBillingPeriodHasBeenSet; }

    /**
     * <p>The exclusive end billing period that defines a billing period range for the
     * margin summary. For example, if you choose a billing period that starts in
     * October 2023 and ends in December 2023, the margin summary will only include
     * data from October 2023 and November 2023.</p>
     */
    inline void SetExclusiveEndBillingPeriod(const Aws::String& value) { m_exclusiveEndBillingPeriodHasBeenSet = true; m_exclusiveEndBillingPeriod = value; }

    /**
     * <p>The exclusive end billing period that defines a billing period range for the
     * margin summary. For example, if you choose a billing period that starts in
     * October 2023 and ends in December 2023, the margin summary will only include
     * data from October 2023 and November 2023.</p>
     */
    inline void SetExclusiveEndBillingPeriod(Aws::String&& value) { m_exclusiveEndBillingPeriodHasBeenSet = true; m_exclusiveEndBillingPeriod = std::move(value); }

    /**
     * <p>The exclusive end billing period that defines a billing period range for the
     * margin summary. For example, if you choose a billing period that starts in
     * October 2023 and ends in December 2023, the margin summary will only include
     * data from October 2023 and November 2023.</p>
     */
    inline void SetExclusiveEndBillingPeriod(const char* value) { m_exclusiveEndBillingPeriodHasBeenSet = true; m_exclusiveEndBillingPeriod.assign(value); }

    /**
     * <p>The exclusive end billing period that defines a billing period range for the
     * margin summary. For example, if you choose a billing period that starts in
     * October 2023 and ends in December 2023, the margin summary will only include
     * data from October 2023 and November 2023.</p>
     */
    inline BillingPeriodRange& WithExclusiveEndBillingPeriod(const Aws::String& value) { SetExclusiveEndBillingPeriod(value); return *this;}

    /**
     * <p>The exclusive end billing period that defines a billing period range for the
     * margin summary. For example, if you choose a billing period that starts in
     * October 2023 and ends in December 2023, the margin summary will only include
     * data from October 2023 and November 2023.</p>
     */
    inline BillingPeriodRange& WithExclusiveEndBillingPeriod(Aws::String&& value) { SetExclusiveEndBillingPeriod(std::move(value)); return *this;}

    /**
     * <p>The exclusive end billing period that defines a billing period range for the
     * margin summary. For example, if you choose a billing period that starts in
     * October 2023 and ends in December 2023, the margin summary will only include
     * data from October 2023 and November 2023.</p>
     */
    inline BillingPeriodRange& WithExclusiveEndBillingPeriod(const char* value) { SetExclusiveEndBillingPeriod(value); return *this;}

  private:

    Aws::String m_inclusiveStartBillingPeriod;
    bool m_inclusiveStartBillingPeriodHasBeenSet = false;

    Aws::String m_exclusiveEndBillingPeriod;
    bool m_exclusiveEndBillingPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
