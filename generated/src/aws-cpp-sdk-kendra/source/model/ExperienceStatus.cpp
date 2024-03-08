/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ExperienceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace ExperienceStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ExperienceStatus GetExperienceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ExperienceStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ExperienceStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ExperienceStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExperienceStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExperienceStatus>(hashCode);
          }

          return ExperienceStatus::NOT_SET;
        }

        Aws::String GetNameForExperienceStatus(ExperienceStatus enumValue)
        {
          switch(enumValue)
          {
          case ExperienceStatus::NOT_SET:
            return {};
          case ExperienceStatus::CREATING:
            return "CREATING";
          case ExperienceStatus::ACTIVE:
            return "ACTIVE";
          case ExperienceStatus::DELETING:
            return "DELETING";
          case ExperienceStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExperienceStatusMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
