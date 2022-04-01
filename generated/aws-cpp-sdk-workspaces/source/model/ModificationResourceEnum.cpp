/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ModificationResourceEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace ModificationResourceEnumMapper
      {

        static const int ROOT_VOLUME_HASH = HashingUtils::HashString("ROOT_VOLUME");
        static const int USER_VOLUME_HASH = HashingUtils::HashString("USER_VOLUME");
        static const int COMPUTE_TYPE_HASH = HashingUtils::HashString("COMPUTE_TYPE");


        ModificationResourceEnum GetModificationResourceEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROOT_VOLUME_HASH)
          {
            return ModificationResourceEnum::ROOT_VOLUME;
          }
          else if (hashCode == USER_VOLUME_HASH)
          {
            return ModificationResourceEnum::USER_VOLUME;
          }
          else if (hashCode == COMPUTE_TYPE_HASH)
          {
            return ModificationResourceEnum::COMPUTE_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModificationResourceEnum>(hashCode);
          }

          return ModificationResourceEnum::NOT_SET;
        }

        Aws::String GetNameForModificationResourceEnum(ModificationResourceEnum enumValue)
        {
          switch(enumValue)
          {
          case ModificationResourceEnum::ROOT_VOLUME:
            return "ROOT_VOLUME";
          case ModificationResourceEnum::USER_VOLUME:
            return "USER_VOLUME";
          case ModificationResourceEnum::COMPUTE_TYPE:
            return "COMPUTE_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModificationResourceEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
