/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisTargetStatus.h>
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
      namespace CisTargetStatusMapper
      {

        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        CisTargetStatus GetCisTargetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TIMED_OUT_HASH)
          {
            return CisTargetStatus::TIMED_OUT;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return CisTargetStatus::CANCELLED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CisTargetStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisTargetStatus>(hashCode);
          }

          return CisTargetStatus::NOT_SET;
        }

        Aws::String GetNameForCisTargetStatus(CisTargetStatus enumValue)
        {
          switch(enumValue)
          {
          case CisTargetStatus::NOT_SET:
            return {};
          case CisTargetStatus::TIMED_OUT:
            return "TIMED_OUT";
          case CisTargetStatus::CANCELLED:
            return "CANCELLED";
          case CisTargetStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CisTargetStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
