/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/TriggerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace TriggerTypeMapper
      {

        static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");
        static const int Event_HASH = HashingUtils::HashString("Event");
        static const int OnDemand_HASH = HashingUtils::HashString("OnDemand");


        TriggerType GetTriggerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Scheduled_HASH)
          {
            return TriggerType::Scheduled;
          }
          else if (hashCode == Event_HASH)
          {
            return TriggerType::Event;
          }
          else if (hashCode == OnDemand_HASH)
          {
            return TriggerType::OnDemand;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TriggerType>(hashCode);
          }

          return TriggerType::NOT_SET;
        }

        Aws::String GetNameForTriggerType(TriggerType enumValue)
        {
          switch(enumValue)
          {
          case TriggerType::Scheduled:
            return "Scheduled";
          case TriggerType::Event:
            return "Event";
          case TriggerType::OnDemand:
            return "OnDemand";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TriggerTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
