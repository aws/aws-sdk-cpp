/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Gender.h>
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
      namespace GenderMapper
      {

        static const int MALE_HASH = HashingUtils::HashString("MALE");
        static const int FEMALE_HASH = HashingUtils::HashString("FEMALE");
        static const int UNSPECIFIED_HASH = HashingUtils::HashString("UNSPECIFIED");


        Gender GetGenderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MALE_HASH)
          {
            return Gender::MALE;
          }
          else if (hashCode == FEMALE_HASH)
          {
            return Gender::FEMALE;
          }
          else if (hashCode == UNSPECIFIED_HASH)
          {
            return Gender::UNSPECIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Gender>(hashCode);
          }

          return Gender::NOT_SET;
        }

        Aws::String GetNameForGender(Gender enumValue)
        {
          switch(enumValue)
          {
          case Gender::NOT_SET:
            return {};
          case Gender::MALE:
            return "MALE";
          case Gender::FEMALE:
            return "FEMALE";
          case Gender::UNSPECIFIED:
            return "UNSPECIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GenderMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
