/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/EnvironmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MWAA
  {
    namespace Model
    {
      namespace EnvironmentStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return EnvironmentStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return EnvironmentStatus::CREATE_FAILED;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return EnvironmentStatus::AVAILABLE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return EnvironmentStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EnvironmentStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return EnvironmentStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentStatus>(hashCode);
          }

          return EnvironmentStatus::NOT_SET;
        }

        Aws::String GetNameForEnvironmentStatus(EnvironmentStatus enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentStatus::CREATING:
            return "CREATING";
          case EnvironmentStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case EnvironmentStatus::AVAILABLE:
            return "AVAILABLE";
          case EnvironmentStatus::UPDATING:
            return "UPDATING";
          case EnvironmentStatus::DELETING:
            return "DELETING";
          case EnvironmentStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentStatusMapper
    } // namespace Model
  } // namespace MWAA
} // namespace Aws
