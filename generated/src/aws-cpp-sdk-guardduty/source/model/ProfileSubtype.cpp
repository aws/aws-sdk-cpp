/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ProfileSubtype.h>
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
      namespace ProfileSubtypeMapper
      {

        static const int FREQUENT_HASH = HashingUtils::HashString("FREQUENT");
        static const int INFREQUENT_HASH = HashingUtils::HashString("INFREQUENT");
        static const int UNSEEN_HASH = HashingUtils::HashString("UNSEEN");
        static const int RARE_HASH = HashingUtils::HashString("RARE");


        ProfileSubtype GetProfileSubtypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FREQUENT_HASH)
          {
            return ProfileSubtype::FREQUENT;
          }
          else if (hashCode == INFREQUENT_HASH)
          {
            return ProfileSubtype::INFREQUENT;
          }
          else if (hashCode == UNSEEN_HASH)
          {
            return ProfileSubtype::UNSEEN;
          }
          else if (hashCode == RARE_HASH)
          {
            return ProfileSubtype::RARE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProfileSubtype>(hashCode);
          }

          return ProfileSubtype::NOT_SET;
        }

        Aws::String GetNameForProfileSubtype(ProfileSubtype enumValue)
        {
          switch(enumValue)
          {
          case ProfileSubtype::NOT_SET:
            return {};
          case ProfileSubtype::FREQUENT:
            return "FREQUENT";
          case ProfileSubtype::INFREQUENT:
            return "INFREQUENT";
          case ProfileSubtype::UNSEEN:
            return "UNSEEN";
          case ProfileSubtype::RARE:
            return "RARE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProfileSubtypeMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
