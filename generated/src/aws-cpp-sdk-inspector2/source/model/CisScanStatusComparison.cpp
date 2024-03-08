/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisScanStatusComparison.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace CisScanStatusComparisonMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");


        CisScanStatusComparison GetCisScanStatusComparisonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return CisScanStatusComparison::EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisScanStatusComparison>(hashCode);
          }

          return CisScanStatusComparison::NOT_SET;
        }

        Aws::String GetNameForCisScanStatusComparison(CisScanStatusComparison enumValue)
        {
          switch(enumValue)
          {
          case CisScanStatusComparison::NOT_SET:
            return {};
          case CisScanStatusComparison::EQUALS:
            return "EQUALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CisScanStatusComparisonMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
