/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/SuppressionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace SuppressionStateMapper
      {

        static const int SUPPRESSED_HASH = HashingUtils::HashString("SUPPRESSED");
        static const int UNSUPPRESSED_HASH = HashingUtils::HashString("UNSUPPRESSED");


        SuppressionState GetSuppressionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUPPRESSED_HASH)
          {
            return SuppressionState::SUPPRESSED;
          }
          else if (hashCode == UNSUPPRESSED_HASH)
          {
            return SuppressionState::UNSUPPRESSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SuppressionState>(hashCode);
          }

          return SuppressionState::NOT_SET;
        }

        Aws::String GetNameForSuppressionState(SuppressionState enumValue)
        {
          switch(enumValue)
          {
          case SuppressionState::NOT_SET:
            return {};
          case SuppressionState::SUPPRESSED:
            return "SUPPRESSED";
          case SuppressionState::UNSUPPRESSED:
            return "UNSUPPRESSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SuppressionStateMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
