/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/LogDestination.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace LogDestinationMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int CLOUDWATCH_HASH = HashingUtils::HashString("CLOUDWATCH");
        static const int S3_HASH = HashingUtils::HashString("S3");


        LogDestination GetLogDestinationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return LogDestination::NONE;
          }
          else if (hashCode == CLOUDWATCH_HASH)
          {
            return LogDestination::CLOUDWATCH;
          }
          else if (hashCode == S3_HASH)
          {
            return LogDestination::S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogDestination>(hashCode);
          }

          return LogDestination::NOT_SET;
        }

        Aws::String GetNameForLogDestination(LogDestination enumValue)
        {
          switch(enumValue)
          {
          case LogDestination::NOT_SET:
            return {};
          case LogDestination::NONE:
            return "NONE";
          case LogDestination::CLOUDWATCH:
            return "CLOUDWATCH";
          case LogDestination::S3:
            return "S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogDestinationMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
