/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RecordingStrategyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace RecordingStrategyTypeMapper
      {

        static const int ALL_SUPPORTED_RESOURCE_TYPES_HASH = HashingUtils::HashString("ALL_SUPPORTED_RESOURCE_TYPES");
        static const int INCLUSION_BY_RESOURCE_TYPES_HASH = HashingUtils::HashString("INCLUSION_BY_RESOURCE_TYPES");
        static const int EXCLUSION_BY_RESOURCE_TYPES_HASH = HashingUtils::HashString("EXCLUSION_BY_RESOURCE_TYPES");


        RecordingStrategyType GetRecordingStrategyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_SUPPORTED_RESOURCE_TYPES_HASH)
          {
            return RecordingStrategyType::ALL_SUPPORTED_RESOURCE_TYPES;
          }
          else if (hashCode == INCLUSION_BY_RESOURCE_TYPES_HASH)
          {
            return RecordingStrategyType::INCLUSION_BY_RESOURCE_TYPES;
          }
          else if (hashCode == EXCLUSION_BY_RESOURCE_TYPES_HASH)
          {
            return RecordingStrategyType::EXCLUSION_BY_RESOURCE_TYPES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordingStrategyType>(hashCode);
          }

          return RecordingStrategyType::NOT_SET;
        }

        Aws::String GetNameForRecordingStrategyType(RecordingStrategyType enumValue)
        {
          switch(enumValue)
          {
          case RecordingStrategyType::NOT_SET:
            return {};
          case RecordingStrategyType::ALL_SUPPORTED_RESOURCE_TYPES:
            return "ALL_SUPPORTED_RESOURCE_TYPES";
          case RecordingStrategyType::INCLUSION_BY_RESOURCE_TYPES:
            return "INCLUSION_BY_RESOURCE_TYPES";
          case RecordingStrategyType::EXCLUSION_BY_RESOURCE_TYPES:
            return "EXCLUSION_BY_RESOURCE_TYPES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordingStrategyTypeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
