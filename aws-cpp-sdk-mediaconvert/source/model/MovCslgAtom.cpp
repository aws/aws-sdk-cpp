/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MovCslgAtom.h>
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
      namespace MovCslgAtomMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        MovCslgAtom GetMovCslgAtomForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return MovCslgAtom::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return MovCslgAtom::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MovCslgAtom>(hashCode);
          }

          return MovCslgAtom::NOT_SET;
        }

        Aws::String GetNameForMovCslgAtom(MovCslgAtom enumValue)
        {
          switch(enumValue)
          {
          case MovCslgAtom::INCLUDE:
            return "INCLUDE";
          case MovCslgAtom::EXCLUDE:
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

      } // namespace MovCslgAtomMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
