/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ScheduledAutoTuneActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace ScheduledAutoTuneActionTypeMapper
      {

        static const int JVM_HEAP_SIZE_TUNING_HASH = HashingUtils::HashString("JVM_HEAP_SIZE_TUNING");
        static const int JVM_YOUNG_GEN_TUNING_HASH = HashingUtils::HashString("JVM_YOUNG_GEN_TUNING");


        ScheduledAutoTuneActionType GetScheduledAutoTuneActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JVM_HEAP_SIZE_TUNING_HASH)
          {
            return ScheduledAutoTuneActionType::JVM_HEAP_SIZE_TUNING;
          }
          else if (hashCode == JVM_YOUNG_GEN_TUNING_HASH)
          {
            return ScheduledAutoTuneActionType::JVM_YOUNG_GEN_TUNING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduledAutoTuneActionType>(hashCode);
          }

          return ScheduledAutoTuneActionType::NOT_SET;
        }

        Aws::String GetNameForScheduledAutoTuneActionType(ScheduledAutoTuneActionType enumValue)
        {
          switch(enumValue)
          {
          case ScheduledAutoTuneActionType::NOT_SET:
            return {};
          case ScheduledAutoTuneActionType::JVM_HEAP_SIZE_TUNING:
            return "JVM_HEAP_SIZE_TUNING";
          case ScheduledAutoTuneActionType::JVM_YOUNG_GEN_TUNING:
            return "JVM_YOUNG_GEN_TUNING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduledAutoTuneActionTypeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
