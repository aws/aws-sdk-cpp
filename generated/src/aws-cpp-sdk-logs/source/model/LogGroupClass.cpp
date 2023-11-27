/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/LogGroupClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace LogGroupClassMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int INFREQUENT_ACCESS_HASH = HashingUtils::HashString("INFREQUENT_ACCESS");


        LogGroupClass GetLogGroupClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return LogGroupClass::STANDARD;
          }
          else if (hashCode == INFREQUENT_ACCESS_HASH)
          {
            return LogGroupClass::INFREQUENT_ACCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogGroupClass>(hashCode);
          }

          return LogGroupClass::NOT_SET;
        }

        Aws::String GetNameForLogGroupClass(LogGroupClass enumValue)
        {
          switch(enumValue)
          {
          case LogGroupClass::NOT_SET:
            return {};
          case LogGroupClass::STANDARD:
            return "STANDARD";
          case LogGroupClass::INFREQUENT_ACCESS:
            return "INFREQUENT_ACCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogGroupClassMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
