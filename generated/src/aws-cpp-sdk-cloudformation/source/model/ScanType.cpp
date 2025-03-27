/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ScanType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ScanTypeMapper
      {

        static const int FULL_HASH = HashingUtils::HashString("FULL");
        static const int PARTIAL_HASH = HashingUtils::HashString("PARTIAL");


        ScanType GetScanTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_HASH)
          {
            return ScanType::FULL;
          }
          else if (hashCode == PARTIAL_HASH)
          {
            return ScanType::PARTIAL;
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
          case ScanType::FULL:
            return "FULL";
          case ScanType::PARTIAL:
            return "PARTIAL";
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
  } // namespace CloudFormation
} // namespace Aws
