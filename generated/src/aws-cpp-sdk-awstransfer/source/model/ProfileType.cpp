/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ProfileType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace ProfileTypeMapper
      {

        static const int LOCAL_HASH = HashingUtils::HashString("LOCAL");
        static const int PARTNER_HASH = HashingUtils::HashString("PARTNER");


        ProfileType GetProfileTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOCAL_HASH)
          {
            return ProfileType::LOCAL;
          }
          else if (hashCode == PARTNER_HASH)
          {
            return ProfileType::PARTNER;
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
          case ProfileType::LOCAL:
            return "LOCAL";
          case ProfileType::PARTNER:
            return "PARTNER";
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
  } // namespace Transfer
} // namespace Aws
