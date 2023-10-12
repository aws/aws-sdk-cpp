/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SummaryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace SummaryStatusMapper
      {

        static constexpr uint32_t ok_HASH = ConstExprHashingUtils::HashString("ok");
        static constexpr uint32_t impaired_HASH = ConstExprHashingUtils::HashString("impaired");
        static constexpr uint32_t insufficient_data_HASH = ConstExprHashingUtils::HashString("insufficient-data");
        static constexpr uint32_t not_applicable_HASH = ConstExprHashingUtils::HashString("not-applicable");
        static constexpr uint32_t initializing_HASH = ConstExprHashingUtils::HashString("initializing");


        SummaryStatus GetSummaryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ok_HASH)
          {
            return SummaryStatus::ok;
          }
          else if (hashCode == impaired_HASH)
          {
            return SummaryStatus::impaired;
          }
          else if (hashCode == insufficient_data_HASH)
          {
            return SummaryStatus::insufficient_data;
          }
          else if (hashCode == not_applicable_HASH)
          {
            return SummaryStatus::not_applicable;
          }
          else if (hashCode == initializing_HASH)
          {
            return SummaryStatus::initializing;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SummaryStatus>(hashCode);
          }

          return SummaryStatus::NOT_SET;
        }

        Aws::String GetNameForSummaryStatus(SummaryStatus enumValue)
        {
          switch(enumValue)
          {
          case SummaryStatus::NOT_SET:
            return {};
          case SummaryStatus::ok:
            return "ok";
          case SummaryStatus::impaired:
            return "impaired";
          case SummaryStatus::insufficient_data:
            return "insufficient-data";
          case SummaryStatus::not_applicable:
            return "not-applicable";
          case SummaryStatus::initializing:
            return "initializing";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SummaryStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
