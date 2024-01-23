/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/StopCisSessionStatus.h>
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
      namespace StopCisSessionStatusMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int INTERRUPTED_HASH = HashingUtils::HashString("INTERRUPTED");
        static const int UNSUPPORTED_OS_HASH = HashingUtils::HashString("UNSUPPORTED_OS");


        StopCisSessionStatus GetStopCisSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return StopCisSessionStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StopCisSessionStatus::FAILED;
          }
          else if (hashCode == INTERRUPTED_HASH)
          {
            return StopCisSessionStatus::INTERRUPTED;
          }
          else if (hashCode == UNSUPPORTED_OS_HASH)
          {
            return StopCisSessionStatus::UNSUPPORTED_OS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StopCisSessionStatus>(hashCode);
          }

          return StopCisSessionStatus::NOT_SET;
        }

        Aws::String GetNameForStopCisSessionStatus(StopCisSessionStatus enumValue)
        {
          switch(enumValue)
          {
          case StopCisSessionStatus::NOT_SET:
            return {};
          case StopCisSessionStatus::SUCCESS:
            return "SUCCESS";
          case StopCisSessionStatus::FAILED:
            return "FAILED";
          case StopCisSessionStatus::INTERRUPTED:
            return "INTERRUPTED";
          case StopCisSessionStatus::UNSUPPORTED_OS:
            return "UNSUPPORTED_OS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StopCisSessionStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
