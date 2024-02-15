/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/UploadState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Artifact
  {
    namespace Model
    {
      namespace UploadStateMapper
      {

        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int FAULT_HASH = HashingUtils::HashString("FAULT");


        UploadState GetUploadStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROCESSING_HASH)
          {
            return UploadState::PROCESSING;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return UploadState::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return UploadState::FAILED;
          }
          else if (hashCode == FAULT_HASH)
          {
            return UploadState::FAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UploadState>(hashCode);
          }

          return UploadState::NOT_SET;
        }

        Aws::String GetNameForUploadState(UploadState enumValue)
        {
          switch(enumValue)
          {
          case UploadState::NOT_SET:
            return {};
          case UploadState::PROCESSING:
            return "PROCESSING";
          case UploadState::COMPLETE:
            return "COMPLETE";
          case UploadState::FAILED:
            return "FAILED";
          case UploadState::FAULT:
            return "FAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UploadStateMapper
    } // namespace Model
  } // namespace Artifact
} // namespace Aws
