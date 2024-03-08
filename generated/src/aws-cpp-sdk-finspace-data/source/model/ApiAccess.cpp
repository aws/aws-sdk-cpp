/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ApiAccess.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace ApiAccessMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ApiAccess GetApiAccessForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ApiAccess::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ApiAccess::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApiAccess>(hashCode);
          }

          return ApiAccess::NOT_SET;
        }

        Aws::String GetNameForApiAccess(ApiAccess enumValue)
        {
          switch(enumValue)
          {
          case ApiAccess::NOT_SET:
            return {};
          case ApiAccess::ENABLED:
            return "ENABLED";
          case ApiAccess::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApiAccessMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
