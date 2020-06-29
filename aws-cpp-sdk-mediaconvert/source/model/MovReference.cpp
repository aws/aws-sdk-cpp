/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MovReference.h>
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
      namespace MovReferenceMapper
      {

        static const int SELF_CONTAINED_HASH = HashingUtils::HashString("SELF_CONTAINED");
        static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");


        MovReference GetMovReferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELF_CONTAINED_HASH)
          {
            return MovReference::SELF_CONTAINED;
          }
          else if (hashCode == EXTERNAL_HASH)
          {
            return MovReference::EXTERNAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MovReference>(hashCode);
          }

          return MovReference::NOT_SET;
        }

        Aws::String GetNameForMovReference(MovReference enumValue)
        {
          switch(enumValue)
          {
          case MovReference::SELF_CONTAINED:
            return "SELF_CONTAINED";
          case MovReference::EXTERNAL:
            return "EXTERNAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MovReferenceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
