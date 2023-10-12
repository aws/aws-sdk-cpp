/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BlueprintStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace BlueprintStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        BlueprintStatus GetBlueprintStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return BlueprintStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return BlueprintStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return BlueprintStatus::UPDATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BlueprintStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlueprintStatus>(hashCode);
          }

          return BlueprintStatus::NOT_SET;
        }

        Aws::String GetNameForBlueprintStatus(BlueprintStatus enumValue)
        {
          switch(enumValue)
          {
          case BlueprintStatus::NOT_SET:
            return {};
          case BlueprintStatus::CREATING:
            return "CREATING";
          case BlueprintStatus::ACTIVE:
            return "ACTIVE";
          case BlueprintStatus::UPDATING:
            return "UPDATING";
          case BlueprintStatus::FAILED:
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

      } // namespace BlueprintStatusMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
