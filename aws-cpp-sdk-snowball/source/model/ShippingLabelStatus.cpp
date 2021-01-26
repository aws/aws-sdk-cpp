/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ShippingLabelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace ShippingLabelStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int TimedOut_HASH = HashingUtils::HashString("TimedOut");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        ShippingLabelStatus GetShippingLabelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ShippingLabelStatus::InProgress;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return ShippingLabelStatus::TimedOut;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return ShippingLabelStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return ShippingLabelStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShippingLabelStatus>(hashCode);
          }

          return ShippingLabelStatus::NOT_SET;
        }

        Aws::String GetNameForShippingLabelStatus(ShippingLabelStatus enumValue)
        {
          switch(enumValue)
          {
          case ShippingLabelStatus::InProgress:
            return "InProgress";
          case ShippingLabelStatus::TimedOut:
            return "TimedOut";
          case ShippingLabelStatus::Succeeded:
            return "Succeeded";
          case ShippingLabelStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShippingLabelStatusMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
