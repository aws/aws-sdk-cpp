/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/FleetStatusCode.h>
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
      namespace FleetStatusCodeMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int ROTATING_HASH = HashingUtils::HashString("ROTATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_ROLLBACK_FAILED_HASH = HashingUtils::HashString("UPDATE_ROLLBACK_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        FleetStatusCode GetFleetStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return FleetStatusCode::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return FleetStatusCode::UPDATING;
          }
          else if (hashCode == ROTATING_HASH)
          {
            return FleetStatusCode::ROTATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FleetStatusCode::DELETING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return FleetStatusCode::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_ROLLBACK_FAILED_HASH)
          {
            return FleetStatusCode::UPDATE_ROLLBACK_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return FleetStatusCode::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetStatusCode>(hashCode);
          }

          return FleetStatusCode::NOT_SET;
        }

        Aws::String GetNameForFleetStatusCode(FleetStatusCode enumValue)
        {
          switch(enumValue)
          {
          case FleetStatusCode::NOT_SET:
            return {};
          case FleetStatusCode::CREATING:
            return "CREATING";
          case FleetStatusCode::UPDATING:
            return "UPDATING";
          case FleetStatusCode::ROTATING:
            return "ROTATING";
          case FleetStatusCode::DELETING:
            return "DELETING";
          case FleetStatusCode::CREATE_FAILED:
            return "CREATE_FAILED";
          case FleetStatusCode::UPDATE_ROLLBACK_FAILED:
            return "UPDATE_ROLLBACK_FAILED";
          case FleetStatusCode::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetStatusCodeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
