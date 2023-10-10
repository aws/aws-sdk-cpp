/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ScanType.h>
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
      namespace ScanTypeMapper
      {

        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int ENHANCED_HASH = HashingUtils::HashString("ENHANCED");


        ScanType GetScanTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return ScanType::BASIC;
          }
          else if (hashCode == ENHANCED_HASH)
          {
            return ScanType::ENHANCED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanType>(hashCode);
          }

          return ScanType::NOT_SET;
        }

        Aws::String GetNameForScanType(ScanType enumValue)
        {
          switch(enumValue)
          {
          case ScanType::NOT_SET:
            return {};
          case ScanType::BASIC:
            return "BASIC";
          case ScanType::ENHANCED:
            return "ENHANCED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanTypeMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
