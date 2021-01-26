/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ScheduledActionTypeValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ScheduledActionTypeValuesMapper
      {

        static const int ResizeCluster_HASH = HashingUtils::HashString("ResizeCluster");
        static const int PauseCluster_HASH = HashingUtils::HashString("PauseCluster");
        static const int ResumeCluster_HASH = HashingUtils::HashString("ResumeCluster");


        ScheduledActionTypeValues GetScheduledActionTypeValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResizeCluster_HASH)
          {
            return ScheduledActionTypeValues::ResizeCluster;
          }
          else if (hashCode == PauseCluster_HASH)
          {
            return ScheduledActionTypeValues::PauseCluster;
          }
          else if (hashCode == ResumeCluster_HASH)
          {
            return ScheduledActionTypeValues::ResumeCluster;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduledActionTypeValues>(hashCode);
          }

          return ScheduledActionTypeValues::NOT_SET;
        }

        Aws::String GetNameForScheduledActionTypeValues(ScheduledActionTypeValues enumValue)
        {
          switch(enumValue)
          {
          case ScheduledActionTypeValues::ResizeCluster:
            return "ResizeCluster";
          case ScheduledActionTypeValues::PauseCluster:
            return "PauseCluster";
          case ScheduledActionTypeValues::ResumeCluster:
            return "ResumeCluster";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduledActionTypeValuesMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
