/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RecordingFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace RecordingFrequencyMapper
      {

        static const int CONTINUOUS_HASH = HashingUtils::HashString("CONTINUOUS");
        static const int DAILY_HASH = HashingUtils::HashString("DAILY");


        RecordingFrequency GetRecordingFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTINUOUS_HASH)
          {
            return RecordingFrequency::CONTINUOUS;
          }
          else if (hashCode == DAILY_HASH)
          {
            return RecordingFrequency::DAILY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordingFrequency>(hashCode);
          }

          return RecordingFrequency::NOT_SET;
        }

        Aws::String GetNameForRecordingFrequency(RecordingFrequency enumValue)
        {
          switch(enumValue)
          {
          case RecordingFrequency::NOT_SET:
            return {};
          case RecordingFrequency::CONTINUOUS:
            return "CONTINUOUS";
          case RecordingFrequency::DAILY:
            return "DAILY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordingFrequencyMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
