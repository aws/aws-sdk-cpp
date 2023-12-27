/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace RealTimeContactAnalysisStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        RealTimeContactAnalysisStatus GetRealTimeContactAnalysisStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return RealTimeContactAnalysisStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RealTimeContactAnalysisStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return RealTimeContactAnalysisStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RealTimeContactAnalysisStatus>(hashCode);
          }

          return RealTimeContactAnalysisStatus::NOT_SET;
        }

        Aws::String GetNameForRealTimeContactAnalysisStatus(RealTimeContactAnalysisStatus enumValue)
        {
          switch(enumValue)
          {
          case RealTimeContactAnalysisStatus::NOT_SET:
            return {};
          case RealTimeContactAnalysisStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case RealTimeContactAnalysisStatus::FAILED:
            return "FAILED";
          case RealTimeContactAnalysisStatus::COMPLETED:
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

      } // namespace RealTimeContactAnalysisStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
