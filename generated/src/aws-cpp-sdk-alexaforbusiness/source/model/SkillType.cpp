/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SkillType.h>
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
      namespace SkillTypeMapper
      {

        static constexpr uint32_t PUBLIC__HASH = ConstExprHashingUtils::HashString("PUBLIC");
        static constexpr uint32_t PRIVATE__HASH = ConstExprHashingUtils::HashString("PRIVATE");


        SkillType GetSkillTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return SkillType::PUBLIC_;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return SkillType::PRIVATE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SkillType>(hashCode);
          }

          return SkillType::NOT_SET;
        }

        Aws::String GetNameForSkillType(SkillType enumValue)
        {
          switch(enumValue)
          {
          case SkillType::NOT_SET:
            return {};
          case SkillType::PUBLIC_:
            return "PUBLIC";
          case SkillType::PRIVATE_:
            return "PRIVATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SkillTypeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
