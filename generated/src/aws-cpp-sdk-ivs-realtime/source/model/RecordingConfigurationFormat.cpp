/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/RecordingConfigurationFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace RecordingConfigurationFormatMapper
      {

        static const int HLS_HASH = HashingUtils::HashString("HLS");


        RecordingConfigurationFormat GetRecordingConfigurationFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HLS_HASH)
          {
            return RecordingConfigurationFormat::HLS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordingConfigurationFormat>(hashCode);
          }

          return RecordingConfigurationFormat::NOT_SET;
        }

        Aws::String GetNameForRecordingConfigurationFormat(RecordingConfigurationFormat enumValue)
        {
          switch(enumValue)
          {
          case RecordingConfigurationFormat::NOT_SET:
            return {};
          case RecordingConfigurationFormat::HLS:
            return "HLS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordingConfigurationFormatMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
