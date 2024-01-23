/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisResultStatus.h>
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
      namespace CisResultStatusMapper
      {

        static const int PASSED_HASH = HashingUtils::HashString("PASSED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");


        CisResultStatus GetCisResultStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSED_HASH)
          {
            return CisResultStatus::PASSED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CisResultStatus::FAILED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return CisResultStatus::SKIPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisResultStatus>(hashCode);
          }

          return CisResultStatus::NOT_SET;
        }

        Aws::String GetNameForCisResultStatus(CisResultStatus enumValue)
        {
          switch(enumValue)
          {
          case CisResultStatus::NOT_SET:
            return {};
          case CisResultStatus::PASSED:
            return "PASSED";
          case CisResultStatus::FAILED:
            return "FAILED";
          case CisResultStatus::SKIPPED:
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

      } // namespace CisResultStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
