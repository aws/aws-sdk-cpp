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

        static constexpr uint32_t Topic_HASH = ConstExprHashingUtils::HashString("Topic");


        ConnectionNotificationType GetConnectionNotificationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ConnectionNotificationType::NOT_SET:
            return {};
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
