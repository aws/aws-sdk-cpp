/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TriggerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace TriggerTypeMapper
      {

        static constexpr uint32_t SCHEDULED_HASH = ConstExprHashingUtils::HashString("SCHEDULED");
        static constexpr uint32_t CONDITIONAL_HASH = ConstExprHashingUtils::HashString("CONDITIONAL");
        static constexpr uint32_t ON_DEMAND_HASH = ConstExprHashingUtils::HashString("ON_DEMAND");
        static constexpr uint32_t EVENT_HASH = ConstExprHashingUtils::HashString("EVENT");


        TriggerType GetTriggerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCHEDULED_HASH)
          {
            return TriggerType::SCHEDULED;
          }
          else if (hashCode == CONDITIONAL_HASH)
          {
            return TriggerType::CONDITIONAL;
          }
          else if (hashCode == ON_DEMAND_HASH)
          {
            return TriggerType::ON_DEMAND;
          }
          else if (hashCode == EVENT_HASH)
          {
            return TriggerType::EVENT;
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
          case TriggerType::NOT_SET:
            return {};
          case TriggerType::SCHEDULED:
            return "SCHEDULED";
          case TriggerType::CONDITIONAL:
            return "CONDITIONAL";
          case TriggerType::ON_DEMAND:
            return "ON_DEMAND";
          case TriggerType::EVENT:
            return "EVENT";
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
  } // namespace Glue
} // namespace Aws
