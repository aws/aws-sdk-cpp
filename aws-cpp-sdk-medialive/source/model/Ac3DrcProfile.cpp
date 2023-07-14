/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Ac3DrcProfile.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace Ac3DrcProfileMapper
      {

        static const int FILM_STANDARD_HASH = HashingUtils::HashString("FILM_STANDARD");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        Ac3DrcProfile GetAc3DrcProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILM_STANDARD_HASH)
          {
            return Ac3DrcProfile::FILM_STANDARD;
          }
          else if (hashCode == NONE_HASH)
          {
            return Ac3DrcProfile::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ac3DrcProfile>(hashCode);
          }

          return Ac3DrcProfile::NOT_SET;
        }

        Aws::String GetNameForAc3DrcProfile(Ac3DrcProfile enumValue)
        {
          switch(enumValue)
          {
          case Ac3DrcProfile::FILM_STANDARD:
            return "FILM_STANDARD";
          case Ac3DrcProfile::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ac3DrcProfileMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
