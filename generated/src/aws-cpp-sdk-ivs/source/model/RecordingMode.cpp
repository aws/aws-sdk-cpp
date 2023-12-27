/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/RecordingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IVS
  {
    namespace Model
    {
      namespace RecordingModeMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int INTERVAL_HASH = HashingUtils::HashString("INTERVAL");


        RecordingMode GetRecordingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return RecordingMode::DISABLED;
          }
          else if (hashCode == INTERVAL_HASH)
          {
            return RecordingMode::INTERVAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordingMode>(hashCode);
          }

          return RecordingMode::NOT_SET;
        }

        Aws::String GetNameForRecordingMode(RecordingMode enumValue)
        {
          switch(enumValue)
          {
          case RecordingMode::NOT_SET:
            return {};
          case RecordingMode::DISABLED:
            return "DISABLED";
          case RecordingMode::INTERVAL:
            return "INTERVAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordingModeMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws
