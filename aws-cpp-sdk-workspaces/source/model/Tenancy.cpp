/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/Tenancy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace TenancyMapper
      {

        static const int DEDICATED_HASH = HashingUtils::HashString("DEDICATED");
        static const int SHARED_HASH = HashingUtils::HashString("SHARED");


        Tenancy GetTenancyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEDICATED_HASH)
          {
            return Tenancy::DEDICATED;
          }
          else if (hashCode == SHARED_HASH)
          {
            return Tenancy::SHARED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Tenancy>(hashCode);
          }

          return Tenancy::NOT_SET;
        }

        Aws::String GetNameForTenancy(Tenancy enumValue)
        {
          switch(enumValue)
          {
          case Tenancy::DEDICATED:
            return "DEDICATED";
          case Tenancy::SHARED:
            return "SHARED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TenancyMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
