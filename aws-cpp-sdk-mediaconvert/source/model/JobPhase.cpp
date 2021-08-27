/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/JobPhase.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace JobPhaseMapper
      {

        static const int PROBING_HASH = HashingUtils::HashString("PROBING");
        static const int TRANSCODING_HASH = HashingUtils::HashString("TRANSCODING");
        static const int UPLOADING_HASH = HashingUtils::HashString("UPLOADING");


        JobPhase GetJobPhaseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROBING_HASH)
          {
            return JobPhase::PROBING;
          }
          else if (hashCode == TRANSCODING_HASH)
          {
            return JobPhase::TRANSCODING;
          }
          else if (hashCode == UPLOADING_HASH)
          {
            return JobPhase::UPLOADING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobPhase>(hashCode);
          }

          return JobPhase::NOT_SET;
        }

        Aws::String GetNameForJobPhase(JobPhase enumValue)
        {
          switch(enumValue)
          {
          case JobPhase::PROBING:
            return "PROBING";
          case JobPhase::TRANSCODING:
            return "TRANSCODING";
          case JobPhase::UPLOADING:
            return "UPLOADING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobPhaseMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
