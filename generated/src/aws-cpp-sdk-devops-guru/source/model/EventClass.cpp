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

        static const int INFRASTRUCTURE_HASH = HashingUtils::HashString("INFRASTRUCTURE");
        static const int DEPLOYMENT_HASH = HashingUtils::HashString("DEPLOYMENT");
        static const int SECURITY_CHANGE_HASH = HashingUtils::HashString("SECURITY_CHANGE");
        static const int CONFIG_CHANGE_HASH = HashingUtils::HashString("CONFIG_CHANGE");
        static const int SCHEMA_CHANGE_HASH = HashingUtils::HashString("SCHEMA_CHANGE");


        EventClass GetEventClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
