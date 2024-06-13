/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/ClusterMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudHSMV2
  {
    namespace Model
    {
      namespace ClusterModeMapper
      {

        static const int FIPS_HASH = HashingUtils::HashString("FIPS");
        static const int NON_FIPS_HASH = HashingUtils::HashString("NON_FIPS");


        ClusterMode GetClusterModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIPS_HASH)
          {
            return ClusterMode::FIPS;
          }
          else if (hashCode == NON_FIPS_HASH)
          {
            return ClusterMode::NON_FIPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterMode>(hashCode);
          }

          return ClusterMode::NOT_SET;
        }

        Aws::String GetNameForClusterMode(ClusterMode enumValue)
        {
          switch(enumValue)
          {
          case ClusterMode::NOT_SET:
            return {};
          case ClusterMode::FIPS:
            return "FIPS";
          case ClusterMode::NON_FIPS:
            return "NON_FIPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterModeMapper
    } // namespace Model
  } // namespace CloudHSMV2
} // namespace Aws
