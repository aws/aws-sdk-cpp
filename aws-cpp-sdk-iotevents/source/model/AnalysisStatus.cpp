﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AnalysisStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEvents
  {
    namespace Model
    {
      namespace AnalysisStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AnalysisStatus GetAnalysisStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return AnalysisStatus::RUNNING;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return AnalysisStatus::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AnalysisStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisStatus>(hashCode);
          }

          return AnalysisStatus::NOT_SET;
        }

        Aws::String GetNameForAnalysisStatus(AnalysisStatus enumValue)
        {
          switch(enumValue)
          {
          case AnalysisStatus::RUNNING:
            return "RUNNING";
          case AnalysisStatus::COMPLETE:
            return "COMPLETE";
          case AnalysisStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalysisStatusMapper
    } // namespace Model
  } // namespace IoTEvents
} // namespace Aws
