/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/SettingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace SettingTypeMapper
      {

        static const int user_HASH = HashingUtils::HashString("user");
        static const int aws_managed_HASH = HashingUtils::HashString("aws_managed");


        SettingType GetSettingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == user_HASH)
          {
            return SettingType::user;
          }
          else if (hashCode == aws_managed_HASH)
          {
            return SettingType::aws_managed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SettingType>(hashCode);
          }

          return SettingType::NOT_SET;
        }

        Aws::String GetNameForSettingType(SettingType enumValue)
        {
          switch(enumValue)
          {
          case SettingType::NOT_SET:
            return {};
          case SettingType::user:
            return "user";
          case SettingType::aws_managed:
            return "aws_managed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SettingTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
