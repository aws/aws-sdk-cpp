/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/LoggerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace LoggerTypeMapper
      {

        static const int FileSystem_HASH = HashingUtils::HashString("FileSystem");
        static const int AWSCloudWatch_HASH = HashingUtils::HashString("AWSCloudWatch");


        LoggerType GetLoggerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FileSystem_HASH)
          {
            return LoggerType::FileSystem;
          }
          else if (hashCode == AWSCloudWatch_HASH)
          {
            return LoggerType::AWSCloudWatch;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoggerType>(hashCode);
          }

          return LoggerType::NOT_SET;
        }

        Aws::String GetNameForLoggerType(LoggerType enumValue)
        {
          switch(enumValue)
          {
          case LoggerType::FileSystem:
            return "FileSystem";
          case LoggerType::AWSCloudWatch:
            return "AWSCloudWatch";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoggerTypeMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
