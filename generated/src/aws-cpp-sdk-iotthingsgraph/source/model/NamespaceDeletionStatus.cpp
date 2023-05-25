/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/NamespaceDeletionStatus.h>
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
      namespace NamespaceDeletionStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        NamespaceDeletionStatus GetNamespaceDeletionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return NamespaceDeletionStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return NamespaceDeletionStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return NamespaceDeletionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamespaceDeletionStatus>(hashCode);
          }

          return NamespaceDeletionStatus::NOT_SET;
        }

        Aws::String GetNameForNamespaceDeletionStatus(NamespaceDeletionStatus enumValue)
        {
          switch(enumValue)
          {
          case NamespaceDeletionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case NamespaceDeletionStatus::SUCCEEDED:
            return "SUCCEEDED";
          case NamespaceDeletionStatus::FAILED:
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

      } // namespace NamespaceDeletionStatusMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
