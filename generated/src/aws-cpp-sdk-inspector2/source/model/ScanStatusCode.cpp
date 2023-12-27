/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ScanStatusCode.h>
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
      namespace ScanStatusCodeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        ScanStatusCode GetScanStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ScanStatusCode::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return ScanStatusCode::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanStatusCode>(hashCode);
          }

          return ScanStatusCode::NOT_SET;
        }

        Aws::String GetNameForScanStatusCode(ScanStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ScanStatusCode::NOT_SET:
            return {};
          case ScanStatusCode::ACTIVE:
            return "ACTIVE";
          case ScanStatusCode::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanStatusCodeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
