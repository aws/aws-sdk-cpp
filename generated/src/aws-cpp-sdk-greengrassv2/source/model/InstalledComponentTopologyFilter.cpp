/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/InstalledComponentTopologyFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace InstalledComponentTopologyFilterMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int ROOT_HASH = HashingUtils::HashString("ROOT");


        InstalledComponentTopologyFilter GetInstalledComponentTopologyFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return InstalledComponentTopologyFilter::ALL;
          }
          else if (hashCode == ROOT_HASH)
          {
            return InstalledComponentTopologyFilter::ROOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstalledComponentTopologyFilter>(hashCode);
          }

          return InstalledComponentTopologyFilter::NOT_SET;
        }

        Aws::String GetNameForInstalledComponentTopologyFilter(InstalledComponentTopologyFilter enumValue)
        {
          switch(enumValue)
          {
          case InstalledComponentTopologyFilter::ALL:
            return "ALL";
          case InstalledComponentTopologyFilter::ROOT:
            return "ROOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstalledComponentTopologyFilterMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
