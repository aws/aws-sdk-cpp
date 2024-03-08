/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisTargetStatusReason.h>
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
      namespace CisTargetStatusReasonMapper
      {

        static const int SCAN_IN_PROGRESS_HASH = HashingUtils::HashString("SCAN_IN_PROGRESS");
        static const int UNSUPPORTED_OS_HASH = HashingUtils::HashString("UNSUPPORTED_OS");
        static const int SSM_UNMANAGED_HASH = HashingUtils::HashString("SSM_UNMANAGED");


        CisTargetStatusReason GetCisTargetStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCAN_IN_PROGRESS_HASH)
          {
            return CisTargetStatusReason::SCAN_IN_PROGRESS;
          }
          else if (hashCode == UNSUPPORTED_OS_HASH)
          {
            return CisTargetStatusReason::UNSUPPORTED_OS;
          }
          else if (hashCode == SSM_UNMANAGED_HASH)
          {
            return CisTargetStatusReason::SSM_UNMANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisTargetStatusReason>(hashCode);
          }

          return CisTargetStatusReason::NOT_SET;
        }

        Aws::String GetNameForCisTargetStatusReason(CisTargetStatusReason enumValue)
        {
          switch(enumValue)
          {
          case CisTargetStatusReason::NOT_SET:
            return {};
          case CisTargetStatusReason::SCAN_IN_PROGRESS:
            return "SCAN_IN_PROGRESS";
          case CisTargetStatusReason::UNSUPPORTED_OS:
            return "UNSUPPORTED_OS";
          case CisTargetStatusReason::SSM_UNMANAGED:
            return "SSM_UNMANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CisTargetStatusReasonMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
