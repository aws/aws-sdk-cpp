/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/Specialty.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace SpecialtyMapper
      {

        static const int PRIMARYCARE_HASH = HashingUtils::HashString("PRIMARYCARE");


        Specialty GetSpecialtyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARYCARE_HASH)
          {
            return Specialty::PRIMARYCARE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Specialty>(hashCode);
          }

          return Specialty::NOT_SET;
        }

        Aws::String GetNameForSpecialty(Specialty enumValue)
        {
          switch(enumValue)
          {
          case Specialty::PRIMARYCARE:
            return "PRIMARYCARE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpecialtyMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
