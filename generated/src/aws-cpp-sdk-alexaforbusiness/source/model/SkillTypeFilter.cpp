/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SkillTypeFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace SkillTypeFilterMapper
      {

        static constexpr uint32_t PUBLIC__HASH = ConstExprHashingUtils::HashString("PUBLIC");
        static constexpr uint32_t PRIVATE__HASH = ConstExprHashingUtils::HashString("PRIVATE");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        SkillTypeFilter GetSkillTypeFilterForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return SkillTypeFilter::PUBLIC_;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return SkillTypeFilter::PRIVATE_;
          }
          else if (hashCode == ALL_HASH)
          {
            return SkillTypeFilter::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SkillTypeFilter>(hashCode);
          }

          return SkillTypeFilter::NOT_SET;
        }

        Aws::String GetNameForSkillTypeFilter(SkillTypeFilter enumValue)
        {
          switch(enumValue)
          {
          case SkillTypeFilter::NOT_SET:
            return {};
          case SkillTypeFilter::PUBLIC_:
            return "PUBLIC";
          case SkillTypeFilter::PRIVATE_:
            return "PRIVATE";
          case SkillTypeFilter::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SkillTypeFilterMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
