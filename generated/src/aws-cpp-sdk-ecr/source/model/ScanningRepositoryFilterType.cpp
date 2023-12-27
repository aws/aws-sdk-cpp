/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ScanningRepositoryFilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace ScanningRepositoryFilterTypeMapper
      {

        static const int WILDCARD_HASH = HashingUtils::HashString("WILDCARD");


        ScanningRepositoryFilterType GetScanningRepositoryFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WILDCARD_HASH)
          {
            return ScanningRepositoryFilterType::WILDCARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanningRepositoryFilterType>(hashCode);
          }

          return ScanningRepositoryFilterType::NOT_SET;
        }

        Aws::String GetNameForScanningRepositoryFilterType(ScanningRepositoryFilterType enumValue)
        {
          switch(enumValue)
          {
          case ScanningRepositoryFilterType::NOT_SET:
            return {};
          case ScanningRepositoryFilterType::WILDCARD:
            return "WILDCARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanningRepositoryFilterTypeMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
