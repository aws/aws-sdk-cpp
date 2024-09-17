/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/WorkerConfigurationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KafkaConnect
  {
    namespace Model
    {
      namespace WorkerConfigurationStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        WorkerConfigurationState GetWorkerConfigurationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return WorkerConfigurationState::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return WorkerConfigurationState::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkerConfigurationState>(hashCode);
          }

          return WorkerConfigurationState::NOT_SET;
        }

        Aws::String GetNameForWorkerConfigurationState(WorkerConfigurationState enumValue)
        {
          switch(enumValue)
          {
          case WorkerConfigurationState::NOT_SET:
            return {};
          case WorkerConfigurationState::ACTIVE:
            return "ACTIVE";
          case WorkerConfigurationState::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkerConfigurationStateMapper
    } // namespace Model
  } // namespace KafkaConnect
} // namespace Aws
