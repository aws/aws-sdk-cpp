/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/RecordingFileFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    namespace Model
    {
      namespace RecordingFileFormatMapper
      {

        static const int Wav_HASH = HashingUtils::HashString("Wav");
        static const int Opus_HASH = HashingUtils::HashString("Opus");


        RecordingFileFormat GetRecordingFileFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Wav_HASH)
          {
            return RecordingFileFormat::Wav;
          }
          else if (hashCode == Opus_HASH)
          {
            return RecordingFileFormat::Opus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordingFileFormat>(hashCode);
          }

          return RecordingFileFormat::NOT_SET;
        }

        Aws::String GetNameForRecordingFileFormat(RecordingFileFormat enumValue)
        {
          switch(enumValue)
          {
          case RecordingFileFormat::NOT_SET:
            return {};
          case RecordingFileFormat::Wav:
            return "Wav";
          case RecordingFileFormat::Opus:
            return "Opus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordingFileFormatMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
