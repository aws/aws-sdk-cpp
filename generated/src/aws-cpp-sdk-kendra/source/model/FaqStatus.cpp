/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/FaqStatus.h>
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
      namespace FaqStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        FaqStatus GetFaqStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return FaqStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return FaqStatus::UPDATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return FaqStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FaqStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return FaqStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FaqStatus>(hashCode);
          }

          return FaqStatus::NOT_SET;
        }

        Aws::String GetNameForFaqStatus(FaqStatus enumValue)
        {
          switch(enumValue)
          {
          case FaqStatus::NOT_SET:
            return {};
          case FaqStatus::CREATING:
            return "CREATING";
          case FaqStatus::UPDATING:
            return "UPDATING";
          case FaqStatus::ACTIVE:
            return "ACTIVE";
          case FaqStatus::DELETING:
            return "DELETING";
          case FaqStatus::FAILED:
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

      } // namespace FaqStatusMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
