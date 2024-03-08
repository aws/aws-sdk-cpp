/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LicenseName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace LicenseNameMapper
      {

        static const int SQLServer_HASH = HashingUtils::HashString("SQLServer");


        LicenseName GetLicenseNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SQLServer_HASH)
          {
            return LicenseName::SQLServer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseName>(hashCode);
          }

          return LicenseName::NOT_SET;
        }

        Aws::String GetNameForLicenseName(LicenseName enumValue)
        {
          switch(enumValue)
          {
          case LicenseName::NOT_SET:
            return {};
          case LicenseName::SQLServer:
            return "SQLServer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
