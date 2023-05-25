/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/MessageFormatValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace MessageFormatValueMapper
      {

        static const int json_HASH = HashingUtils::HashString("json");
        static const int json_unformatted_HASH = HashingUtils::HashString("json-unformatted");


        MessageFormatValue GetMessageFormatValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == json_HASH)
          {
            return MessageFormatValue::json;
          }
          else if (hashCode == json_unformatted_HASH)
          {
            return MessageFormatValue::json_unformatted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageFormatValue>(hashCode);
          }

          return MessageFormatValue::NOT_SET;
        }

        Aws::String GetNameForMessageFormatValue(MessageFormatValue enumValue)
        {
          switch(enumValue)
          {
          case MessageFormatValue::json:
            return "json";
          case MessageFormatValue::json_unformatted:
            return "json-unformatted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageFormatValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
