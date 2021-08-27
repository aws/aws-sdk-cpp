/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ConnectionNotificationType.h>
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
      namespace ConnectionNotificationTypeMapper
      {

        static const int Topic_HASH = HashingUtils::HashString("Topic");


        ConnectionNotificationType GetConnectionNotificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Topic_HASH)
          {
            return ConnectionNotificationType::Topic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionNotificationType>(hashCode);
          }

          return ConnectionNotificationType::NOT_SET;
        }

        Aws::String GetNameForConnectionNotificationType(ConnectionNotificationType enumValue)
        {
          switch(enumValue)
          {
          case ConnectionNotificationType::Topic:
            return "Topic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionNotificationTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
