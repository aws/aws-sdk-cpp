/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ModelHostingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutforVision
  {
    namespace Model
    {
      namespace ModelHostingStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ModelHostingStatus GetModelHostingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return ModelHostingStatus::RUNNING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ModelHostingStatus::STARTING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ModelHostingStatus::STOPPED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ModelHostingStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelHostingStatus>(hashCode);
          }

          return ModelHostingStatus::NOT_SET;
        }

        Aws::String GetNameForModelHostingStatus(ModelHostingStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelHostingStatus::RUNNING:
            return "RUNNING";
          case ModelHostingStatus::STARTING:
            return "STARTING";
          case ModelHostingStatus::STOPPED:
            return "STOPPED";
          case ModelHostingStatus::FAILED:
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

      } // namespace ModelHostingStatusMapper
    } // namespace Model
  } // namespace LookoutforVision
} // namespace Aws
