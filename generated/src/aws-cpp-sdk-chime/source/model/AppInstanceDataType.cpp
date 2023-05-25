/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/AppInstanceDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace AppInstanceDataTypeMapper
      {

        static const int Channel_HASH = HashingUtils::HashString("Channel");
        static const int ChannelMessage_HASH = HashingUtils::HashString("ChannelMessage");


        AppInstanceDataType GetAppInstanceDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Channel_HASH)
          {
            return AppInstanceDataType::Channel;
          }
          else if (hashCode == ChannelMessage_HASH)
          {
            return AppInstanceDataType::ChannelMessage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppInstanceDataType>(hashCode);
          }

          return AppInstanceDataType::NOT_SET;
        }

        Aws::String GetNameForAppInstanceDataType(AppInstanceDataType enumValue)
        {
          switch(enumValue)
          {
          case AppInstanceDataType::Channel:
            return "Channel";
          case AppInstanceDataType::ChannelMessage:
            return "ChannelMessage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppInstanceDataTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
