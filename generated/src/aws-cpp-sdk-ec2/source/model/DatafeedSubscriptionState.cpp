/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DatafeedSubscriptionState.h>
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
      namespace DatafeedSubscriptionStateMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");


        DatafeedSubscriptionState GetDatafeedSubscriptionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return DatafeedSubscriptionState::Active;
          }
          else if (hashCode == Inactive_HASH)
          {
            return DatafeedSubscriptionState::Inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatafeedSubscriptionState>(hashCode);
          }

          return DatafeedSubscriptionState::NOT_SET;
        }

        Aws::String GetNameForDatafeedSubscriptionState(DatafeedSubscriptionState enumValue)
        {
          switch(enumValue)
          {
          case DatafeedSubscriptionState::Active:
            return "Active";
          case DatafeedSubscriptionState::Inactive:
            return "Inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatafeedSubscriptionStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
