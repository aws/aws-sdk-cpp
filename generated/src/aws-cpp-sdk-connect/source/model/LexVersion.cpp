/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/LexVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace LexVersionMapper
      {

        static const int V1_HASH = HashingUtils::HashString("V1");
        static const int V2_HASH = HashingUtils::HashString("V2");


        LexVersion GetLexVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V1_HASH)
          {
            return LexVersion::V1;
          }
          else if (hashCode == V2_HASH)
          {
            return LexVersion::V2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LexVersion>(hashCode);
          }

          return LexVersion::NOT_SET;
        }

        Aws::String GetNameForLexVersion(LexVersion enumValue)
        {
          switch(enumValue)
          {
          case LexVersion::NOT_SET:
            return {};
          case LexVersion::V1:
            return "V1";
          case LexVersion::V2:
            return "V2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LexVersionMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
