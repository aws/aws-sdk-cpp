/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/NotificationResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace NotificationResourceTypeMapper
      {

        static const int PROJECT_HASH = HashingUtils::HashString("PROJECT");


        NotificationResourceType GetNotificationResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECT_HASH)
          {
            return NotificationResourceType::PROJECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationResourceType>(hashCode);
          }

          return NotificationResourceType::NOT_SET;
        }

        Aws::String GetNameForNotificationResourceType(NotificationResourceType enumValue)
        {
          switch(enumValue)
          {
          case NotificationResourceType::NOT_SET:
            return {};
          case NotificationResourceType::PROJECT:
            return "PROJECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationResourceTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
