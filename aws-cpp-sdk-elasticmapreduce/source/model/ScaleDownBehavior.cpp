/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ScaleDownBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace ScaleDownBehaviorMapper
      {

        static const int TERMINATE_AT_INSTANCE_HOUR_HASH = HashingUtils::HashString("TERMINATE_AT_INSTANCE_HOUR");
        static const int TERMINATE_AT_TASK_COMPLETION_HASH = HashingUtils::HashString("TERMINATE_AT_TASK_COMPLETION");


        ScaleDownBehavior GetScaleDownBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TERMINATE_AT_INSTANCE_HOUR_HASH)
          {
            return ScaleDownBehavior::TERMINATE_AT_INSTANCE_HOUR;
          }
          else if (hashCode == TERMINATE_AT_TASK_COMPLETION_HASH)
          {
            return ScaleDownBehavior::TERMINATE_AT_TASK_COMPLETION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScaleDownBehavior>(hashCode);
          }

          return ScaleDownBehavior::NOT_SET;
        }

        Aws::String GetNameForScaleDownBehavior(ScaleDownBehavior enumValue)
        {
          switch(enumValue)
          {
          case ScaleDownBehavior::TERMINATE_AT_INSTANCE_HOUR:
            return "TERMINATE_AT_INSTANCE_HOUR";
          case ScaleDownBehavior::TERMINATE_AT_TASK_COMPLETION:
            return "TERMINATE_AT_TASK_COMPLETION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScaleDownBehaviorMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
