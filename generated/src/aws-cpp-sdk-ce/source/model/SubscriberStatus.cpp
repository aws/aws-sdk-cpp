/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SubscriberStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace SubscriberStatusMapper
      {

        static const int CONFIRMED_HASH = HashingUtils::HashString("CONFIRMED");
        static const int DECLINED_HASH = HashingUtils::HashString("DECLINED");


        SubscriberStatus GetSubscriberStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONFIRMED_HASH)
          {
            return SubscriberStatus::CONFIRMED;
          }
          else if (hashCode == DECLINED_HASH)
          {
            return SubscriberStatus::DECLINED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriberStatus>(hashCode);
          }

          return SubscriberStatus::NOT_SET;
        }

        Aws::String GetNameForSubscriberStatus(SubscriberStatus enumValue)
        {
          switch(enumValue)
          {
          case SubscriberStatus::CONFIRMED:
            return "CONFIRMED";
          case SubscriberStatus::DECLINED:
            return "DECLINED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubscriberStatusMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
