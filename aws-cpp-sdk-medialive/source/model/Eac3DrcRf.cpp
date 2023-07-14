/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Eac3DrcRf.h>
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
      namespace Eac3DrcRfMapper
      {

        static const int FILM_LIGHT_HASH = HashingUtils::HashString("FILM_LIGHT");
        static const int FILM_STANDARD_HASH = HashingUtils::HashString("FILM_STANDARD");
        static const int MUSIC_LIGHT_HASH = HashingUtils::HashString("MUSIC_LIGHT");
        static const int MUSIC_STANDARD_HASH = HashingUtils::HashString("MUSIC_STANDARD");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SPEECH_HASH = HashingUtils::HashString("SPEECH");


        Eac3DrcRf GetEac3DrcRfForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILM_LIGHT_HASH)
          {
            return Eac3DrcRf::FILM_LIGHT;
          }
          else if (hashCode == FILM_STANDARD_HASH)
          {
            return Eac3DrcRf::FILM_STANDARD;
          }
          else if (hashCode == MUSIC_LIGHT_HASH)
          {
            return Eac3DrcRf::MUSIC_LIGHT;
          }
          else if (hashCode == MUSIC_STANDARD_HASH)
          {
            return Eac3DrcRf::MUSIC_STANDARD;
          }
          else if (hashCode == NONE_HASH)
          {
            return Eac3DrcRf::NONE;
          }
          else if (hashCode == SPEECH_HASH)
          {
            return Eac3DrcRf::SPEECH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3DrcRf>(hashCode);
          }

          return Eac3DrcRf::NOT_SET;
        }

        Aws::String GetNameForEac3DrcRf(Eac3DrcRf enumValue)
        {
          switch(enumValue)
          {
          case Eac3DrcRf::FILM_LIGHT:
            return "FILM_LIGHT";
          case Eac3DrcRf::FILM_STANDARD:
            return "FILM_STANDARD";
          case Eac3DrcRf::MUSIC_LIGHT:
            return "MUSIC_LIGHT";
          case Eac3DrcRf::MUSIC_STANDARD:
            return "MUSIC_STANDARD";
          case Eac3DrcRf::NONE:
            return "NONE";
          case Eac3DrcRf::SPEECH:
            return "SPEECH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3DrcRfMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
