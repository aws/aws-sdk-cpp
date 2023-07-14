/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mp4CslgAtom.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace Mp4CslgAtomMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        Mp4CslgAtom GetMp4CslgAtomForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return Mp4CslgAtom::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return Mp4CslgAtom::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mp4CslgAtom>(hashCode);
          }

          return Mp4CslgAtom::NOT_SET;
        }

        Aws::String GetNameForMp4CslgAtom(Mp4CslgAtom enumValue)
        {
          switch(enumValue)
          {
          case Mp4CslgAtom::INCLUDE:
            return "INCLUDE";
          case Mp4CslgAtom::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mp4CslgAtomMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
