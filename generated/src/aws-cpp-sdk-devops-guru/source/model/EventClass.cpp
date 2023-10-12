/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/EventClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace EventClassMapper
      {

        static constexpr uint32_t INFRASTRUCTURE_HASH = ConstExprHashingUtils::HashString("INFRASTRUCTURE");
        static constexpr uint32_t DEPLOYMENT_HASH = ConstExprHashingUtils::HashString("DEPLOYMENT");
        static constexpr uint32_t SECURITY_CHANGE_HASH = ConstExprHashingUtils::HashString("SECURITY_CHANGE");
        static constexpr uint32_t CONFIG_CHANGE_HASH = ConstExprHashingUtils::HashString("CONFIG_CHANGE");
        static constexpr uint32_t SCHEMA_CHANGE_HASH = ConstExprHashingUtils::HashString("SCHEMA_CHANGE");


        EventClass GetEventClassForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFRASTRUCTURE_HASH)
          {
            return EventClass::INFRASTRUCTURE;
          }
          else if (hashCode == DEPLOYMENT_HASH)
          {
            return EventClass::DEPLOYMENT;
          }
          else if (hashCode == SECURITY_CHANGE_HASH)
          {
            return EventClass::SECURITY_CHANGE;
          }
          else if (hashCode == CONFIG_CHANGE_HASH)
          {
            return EventClass::CONFIG_CHANGE;
          }
          else if (hashCode == SCHEMA_CHANGE_HASH)
          {
            return EventClass::SCHEMA_CHANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventClass>(hashCode);
          }

          return EventClass::NOT_SET;
        }

        Aws::String GetNameForEventClass(EventClass enumValue)
        {
          switch(enumValue)
          {
          case EventClass::NOT_SET:
            return {};
          case EventClass::INFRASTRUCTURE:
            return "INFRASTRUCTURE";
          case EventClass::DEPLOYMENT:
            return "DEPLOYMENT";
          case EventClass::SECURITY_CHANGE:
            return "SECURITY_CHANGE";
          case EventClass::CONFIG_CHANGE:
            return "CONFIG_CHANGE";
          case EventClass::SCHEMA_CHANGE:
            return "SCHEMA_CHANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventClassMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
