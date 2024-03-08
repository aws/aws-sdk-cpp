/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisScanResultDetailsSortBy.h>
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
      namespace CisScanResultDetailsSortByMapper
      {

        static const int CHECK_ID_HASH = HashingUtils::HashString("CHECK_ID");
        static const int STATUS_HASH = HashingUtils::HashString("STATUS");


        CisScanResultDetailsSortBy GetCisScanResultDetailsSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHECK_ID_HASH)
          {
            return CisScanResultDetailsSortBy::CHECK_ID;
          }
          else if (hashCode == STATUS_HASH)
          {
            return CisScanResultDetailsSortBy::STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisScanResultDetailsSortBy>(hashCode);
          }

          return CisScanResultDetailsSortBy::NOT_SET;
        }

        Aws::String GetNameForCisScanResultDetailsSortBy(CisScanResultDetailsSortBy enumValue)
        {
          switch(enumValue)
          {
          case CisScanResultDetailsSortBy::NOT_SET:
            return {};
          case CisScanResultDetailsSortBy::CHECK_ID:
            return "CHECK_ID";
          case CisScanResultDetailsSortBy::STATUS:
            return "STATUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CisScanResultDetailsSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
