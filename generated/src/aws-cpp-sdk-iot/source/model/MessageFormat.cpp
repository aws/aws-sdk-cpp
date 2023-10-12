/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/MessageFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace MessageFormatMapper
      {

        static constexpr uint32_t RAW_HASH = ConstExprHashingUtils::HashString("RAW");
        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");


        MessageFormat GetMessageFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RAW_HASH)
          {
            return MessageFormat::RAW;
          }
          else if (hashCode == JSON_HASH)
          {
            return MessageFormat::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageFormat>(hashCode);
          }

          return MessageFormat::NOT_SET;
        }

        Aws::String GetNameForMessageFormat(MessageFormat enumValue)
        {
          switch(enumValue)
          {
          case MessageFormat::NOT_SET:
            return {};
          case MessageFormat::RAW:
            return "RAW";
          case MessageFormat::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageFormatMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
