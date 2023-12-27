/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ScanType.h>
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
      namespace ScanTypeMapper
      {

        static const int NETWORK_HASH = HashingUtils::HashString("NETWORK");
        static const int PACKAGE_HASH = HashingUtils::HashString("PACKAGE");
        static const int CODE_HASH = HashingUtils::HashString("CODE");


        ScanType GetScanTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NETWORK_HASH)
          {
            return ScanType::NETWORK;
          }
          else if (hashCode == PACKAGE_HASH)
          {
            return ScanType::PACKAGE;
          }
          else if (hashCode == CODE_HASH)
          {
            return ScanType::CODE;
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
          case ScanType::NETWORK:
            return "NETWORK";
          case ScanType::PACKAGE:
            return "PACKAGE";
          case ScanType::CODE:
            return "CODE";
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
  } // namespace Inspector2
} // namespace Aws
