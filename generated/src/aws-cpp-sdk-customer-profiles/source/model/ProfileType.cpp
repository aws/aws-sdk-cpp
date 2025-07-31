/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ProfileType.h>
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
      namespace ProfileTypeMapper
      {

        static const int ACCOUNT_PROFILE_HASH = HashingUtils::HashString("ACCOUNT_PROFILE");
        static const int PROFILE_HASH = HashingUtils::HashString("PROFILE");


        ProfileType GetProfileTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_PROFILE_HASH)
          {
            return ProfileType::ACCOUNT_PROFILE;
          }
          else if (hashCode == PROFILE_HASH)
          {
            return ProfileType::PROFILE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProfileType>(hashCode);
          }

          return ProfileType::NOT_SET;
        }

        Aws::String GetNameForProfileType(ProfileType enumValue)
        {
          switch(enumValue)
          {
          case ProfileType::NOT_SET:
            return {};
          case ProfileType::ACCOUNT_PROFILE:
            return "ACCOUNT_PROFILE";
          case ProfileType::PROFILE:
            return "PROFILE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProfileTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
