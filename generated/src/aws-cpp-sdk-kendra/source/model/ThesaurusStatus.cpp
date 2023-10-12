/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ThesaurusStatus.h>
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
      namespace ThesaurusStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t ACTIVE_BUT_UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("ACTIVE_BUT_UPDATE_FAILED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ThesaurusStatus GetThesaurusStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ThesaurusStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ThesaurusStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ThesaurusStatus::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ThesaurusStatus::UPDATING;
          }
          else if (hashCode == ACTIVE_BUT_UPDATE_FAILED_HASH)
          {
            return ThesaurusStatus::ACTIVE_BUT_UPDATE_FAILED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ThesaurusStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThesaurusStatus>(hashCode);
          }

          return ThesaurusStatus::NOT_SET;
        }

        Aws::String GetNameForThesaurusStatus(ThesaurusStatus enumValue)
        {
          switch(enumValue)
          {
          case ThesaurusStatus::NOT_SET:
            return {};
          case ThesaurusStatus::CREATING:
            return "CREATING";
          case ThesaurusStatus::ACTIVE:
            return "ACTIVE";
          case ThesaurusStatus::DELETING:
            return "DELETING";
          case ThesaurusStatus::UPDATING:
            return "UPDATING";
          case ThesaurusStatus::ACTIVE_BUT_UPDATE_FAILED:
            return "ACTIVE_BUT_UPDATE_FAILED";
          case ThesaurusStatus::FAILED:
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

      } // namespace ThesaurusStatusMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
