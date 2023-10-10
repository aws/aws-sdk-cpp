/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/ScanType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruSecurity
  {
    namespace Model
    {
      namespace ScanTypeMapper
      {

        static const int Standard_HASH = HashingUtils::HashString("Standard");
        static const int Express_HASH = HashingUtils::HashString("Express");


        ScanType GetScanTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standard_HASH)
          {
            return ScanType::Standard;
          }
          else if (hashCode == Express_HASH)
          {
            return ScanType::Express;
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
          case ScanType::Standard:
            return "Standard";
          case ScanType::Express:
            return "Express";
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
  } // namespace CodeGuruSecurity
} // namespace Aws
