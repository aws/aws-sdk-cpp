/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/OutpostMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace OutpostModeMapper
      {

        static const int single_outpost_HASH = HashingUtils::HashString("single-outpost");
        static const int cross_outpost_HASH = HashingUtils::HashString("cross-outpost");


        OutpostMode GetOutpostModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == single_outpost_HASH)
          {
            return OutpostMode::single_outpost;
          }
          else if (hashCode == cross_outpost_HASH)
          {
            return OutpostMode::cross_outpost;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutpostMode>(hashCode);
          }

          return OutpostMode::NOT_SET;
        }

        Aws::String GetNameForOutpostMode(OutpostMode enumValue)
        {
          switch(enumValue)
          {
          case OutpostMode::single_outpost:
            return "single-outpost";
          case OutpostMode::cross_outpost:
            return "cross-outpost";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutpostModeMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
