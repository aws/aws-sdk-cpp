/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ProfileTypeDimensionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace ProfileTypeDimensionTypeMapper
      {

        static const int INCLUSIVE_HASH = HashingUtils::HashString("INCLUSIVE");
        static const int EXCLUSIVE_HASH = HashingUtils::HashString("EXCLUSIVE");


        ProfileTypeDimensionType GetProfileTypeDimensionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUSIVE_HASH)
          {
            return ProfileTypeDimensionType::INCLUSIVE;
          }
          else if (hashCode == EXCLUSIVE_HASH)
          {
            return ProfileTypeDimensionType::EXCLUSIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProfileTypeDimensionType>(hashCode);
          }

          return ProfileTypeDimensionType::NOT_SET;
        }

        Aws::String GetNameForProfileTypeDimensionType(ProfileTypeDimensionType enumValue)
        {
          switch(enumValue)
          {
          case ProfileTypeDimensionType::NOT_SET:
            return {};
          case ProfileTypeDimensionType::INCLUSIVE:
            return "INCLUSIVE";
          case ProfileTypeDimensionType::EXCLUSIVE:
            return "EXCLUSIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProfileTypeDimensionTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
