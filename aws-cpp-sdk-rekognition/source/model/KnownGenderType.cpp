/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/KnownGenderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace KnownGenderTypeMapper
      {

        static const int Male_HASH = HashingUtils::HashString("Male");
        static const int Female_HASH = HashingUtils::HashString("Female");


        KnownGenderType GetKnownGenderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Male_HASH)
          {
            return KnownGenderType::Male;
          }
          else if (hashCode == Female_HASH)
          {
            return KnownGenderType::Female;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KnownGenderType>(hashCode);
          }

          return KnownGenderType::NOT_SET;
        }

        Aws::String GetNameForKnownGenderType(KnownGenderType enumValue)
        {
          switch(enumValue)
          {
          case KnownGenderType::Male:
            return "Male";
          case KnownGenderType::Female:
            return "Female";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KnownGenderTypeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
