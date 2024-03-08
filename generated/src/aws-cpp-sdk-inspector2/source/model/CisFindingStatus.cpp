/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisFindingStatus.h>
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
      namespace CisFindingStatusMapper
      {

        static const int PASSED_HASH = HashingUtils::HashString("PASSED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");


        CisFindingStatus GetCisFindingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSED_HASH)
          {
            return CisFindingStatus::PASSED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CisFindingStatus::FAILED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return CisFindingStatus::SKIPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisFindingStatus>(hashCode);
          }

          return CisFindingStatus::NOT_SET;
        }

        Aws::String GetNameForCisFindingStatus(CisFindingStatus enumValue)
        {
          switch(enumValue)
          {
          case CisFindingStatus::NOT_SET:
            return {};
          case CisFindingStatus::PASSED:
            return "PASSED";
          case CisFindingStatus::FAILED:
            return "FAILED";
          case CisFindingStatus::SKIPPED:
            return "SKIPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CisFindingStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
