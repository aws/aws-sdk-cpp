﻿/**
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

        static const int ok_HASH = HashingUtils::HashString("ok");
        static const int impaired_HASH = HashingUtils::HashString("impaired");
        static const int insufficient_data_HASH = HashingUtils::HashString("insufficient-data");
        static const int not_applicable_HASH = HashingUtils::HashString("not-applicable");
        static const int initializing_HASH = HashingUtils::HashString("initializing");


        SummaryStatus GetSummaryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
