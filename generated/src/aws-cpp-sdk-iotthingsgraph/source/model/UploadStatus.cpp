/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/UploadStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTThingsGraph
  {
    namespace Model
    {
      namespace UploadStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        UploadStatus GetUploadStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return UploadStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return UploadStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return UploadStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UploadStatus>(hashCode);
          }

          return UploadStatus::NOT_SET;
        }

        Aws::String GetNameForUploadStatus(UploadStatus enumValue)
        {
          switch(enumValue)
          {
          case UploadStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case UploadStatus::SUCCEEDED:
            return "SUCCEEDED";
          case UploadStatus::FAILED:
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

      } // namespace UploadStatusMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
