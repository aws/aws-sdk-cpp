/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/IncludeOptions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace IncludeOptionsMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int ANY_HASH = HashingUtils::HashString("ANY");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        IncludeOptions GetIncludeOptionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return IncludeOptions::ALL;
          }
          else if (hashCode == ANY_HASH)
          {
            return IncludeOptions::ANY;
          }
          else if (hashCode == NONE_HASH)
          {
            return IncludeOptions::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncludeOptions>(hashCode);
          }

          return IncludeOptions::NOT_SET;
        }

        Aws::String GetNameForIncludeOptions(IncludeOptions enumValue)
        {
          switch(enumValue)
          {
          case IncludeOptions::NOT_SET:
            return {};
          case IncludeOptions::ALL:
            return "ALL";
          case IncludeOptions::ANY:
            return "ANY";
          case IncludeOptions::NONE:
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

      } // namespace IncludeOptionsMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
