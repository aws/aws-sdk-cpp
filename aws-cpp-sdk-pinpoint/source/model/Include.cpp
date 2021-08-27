/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/Include.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace IncludeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int ANY_HASH = HashingUtils::HashString("ANY");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        Include GetIncludeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return Include::ALL;
          }
          else if (hashCode == ANY_HASH)
          {
            return Include::ANY;
          }
          else if (hashCode == NONE_HASH)
          {
            return Include::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Include>(hashCode);
          }

          return Include::NOT_SET;
        }

        Aws::String GetNameForInclude(Include enumValue)
        {
          switch(enumValue)
          {
          case Include::ALL:
            return "ALL";
          case Include::ANY:
            return "ANY";
          case Include::NONE:
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

      } // namespace IncludeMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
