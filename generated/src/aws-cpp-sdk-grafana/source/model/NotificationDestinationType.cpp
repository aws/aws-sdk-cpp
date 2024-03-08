/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/NotificationDestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedGrafana
  {
    namespace Model
    {
      namespace NotificationDestinationTypeMapper
      {

        static const int SNS_HASH = HashingUtils::HashString("SNS");


        NotificationDestinationType GetNotificationDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SNS_HASH)
          {
            return NotificationDestinationType::SNS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationDestinationType>(hashCode);
          }

          return NotificationDestinationType::NOT_SET;
        }

        Aws::String GetNameForNotificationDestinationType(NotificationDestinationType enumValue)
        {
          switch(enumValue)
          {
          case NotificationDestinationType::NOT_SET:
            return {};
          case NotificationDestinationType::SNS:
            return "SNS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationDestinationTypeMapper
    } // namespace Model
  } // namespace ManagedGrafana
} // namespace Aws
