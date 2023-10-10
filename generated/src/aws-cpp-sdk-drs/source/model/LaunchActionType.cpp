/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LaunchActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace LaunchActionTypeMapper
      {

        static const int SSM_AUTOMATION_HASH = HashingUtils::HashString("SSM_AUTOMATION");
        static const int SSM_COMMAND_HASH = HashingUtils::HashString("SSM_COMMAND");


        LaunchActionType GetLaunchActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSM_AUTOMATION_HASH)
          {
            return LaunchActionType::SSM_AUTOMATION;
          }
          else if (hashCode == SSM_COMMAND_HASH)
          {
            return LaunchActionType::SSM_COMMAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchActionType>(hashCode);
          }

          return LaunchActionType::NOT_SET;
        }

        Aws::String GetNameForLaunchActionType(LaunchActionType enumValue)
        {
          switch(enumValue)
          {
          case LaunchActionType::NOT_SET:
            return {};
          case LaunchActionType::SSM_AUTOMATION:
            return "SSM_AUTOMATION";
          case LaunchActionType::SSM_COMMAND:
            return "SSM_COMMAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchActionTypeMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
