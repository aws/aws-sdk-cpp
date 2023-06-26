/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NotificationContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace NotificationContentTypeMapper
      {

        static const int PLAIN_TEXT_HASH = HashingUtils::HashString("PLAIN_TEXT");


        NotificationContentType GetNotificationContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLAIN_TEXT_HASH)
          {
            return NotificationContentType::PLAIN_TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationContentType>(hashCode);
          }

          return NotificationContentType::NOT_SET;
        }

        Aws::String GetNameForNotificationContentType(NotificationContentType enumValue)
        {
          switch(enumValue)
          {
          case NotificationContentType::PLAIN_TEXT:
            return "PLAIN_TEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationContentTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
