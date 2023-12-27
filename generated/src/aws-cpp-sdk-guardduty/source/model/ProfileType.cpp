/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ProfileType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace ProfileTypeMapper
      {

        static const int FREQUENCY_HASH = HashingUtils::HashString("FREQUENCY");


        ProfileType GetProfileTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FREQUENCY_HASH)
          {
            return ProfileType::FREQUENCY;
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
          case ProfileType::FREQUENCY:
            return "FREQUENCY";
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
  } // namespace GuardDuty
} // namespace Aws
