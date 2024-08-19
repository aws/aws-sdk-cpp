/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/FleetContextCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace FleetContextCodeMapper
      {

        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int ACTION_REQUIRED_HASH = HashingUtils::HashString("ACTION_REQUIRED");
        static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");
        static const int INSUFFICIENT_CAPACITY_HASH = HashingUtils::HashString("INSUFFICIENT_CAPACITY");


        FleetContextCode GetFleetContextCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_FAILED_HASH)
          {
            return FleetContextCode::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return FleetContextCode::UPDATE_FAILED;
          }
          else if (hashCode == ACTION_REQUIRED_HASH)
          {
            return FleetContextCode::ACTION_REQUIRED;
          }
          else if (hashCode == PENDING_DELETION_HASH)
          {
            return FleetContextCode::PENDING_DELETION;
          }
          else if (hashCode == INSUFFICIENT_CAPACITY_HASH)
          {
            return FleetContextCode::INSUFFICIENT_CAPACITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetContextCode>(hashCode);
          }

          return FleetContextCode::NOT_SET;
        }

        Aws::String GetNameForFleetContextCode(FleetContextCode enumValue)
        {
          switch(enumValue)
          {
          case FleetContextCode::NOT_SET:
            return {};
          case FleetContextCode::CREATE_FAILED:
            return "CREATE_FAILED";
          case FleetContextCode::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case FleetContextCode::ACTION_REQUIRED:
            return "ACTION_REQUIRED";
          case FleetContextCode::PENDING_DELETION:
            return "PENDING_DELETION";
          case FleetContextCode::INSUFFICIENT_CAPACITY:
            return "INSUFFICIENT_CAPACITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetContextCodeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
