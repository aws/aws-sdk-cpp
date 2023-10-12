/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/RecordingConfigurationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IVS
  {
    namespace Model
    {
      namespace RecordingConfigurationStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");


        RecordingConfigurationState GetRecordingConfigurationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return RecordingConfigurationState::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return RecordingConfigurationState::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return RecordingConfigurationState::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordingConfigurationState>(hashCode);
          }

          return RecordingConfigurationState::NOT_SET;
        }

        Aws::String GetNameForRecordingConfigurationState(RecordingConfigurationState enumValue)
        {
          switch(enumValue)
          {
          case RecordingConfigurationState::NOT_SET:
            return {};
          case RecordingConfigurationState::CREATING:
            return "CREATING";
          case RecordingConfigurationState::CREATE_FAILED:
            return "CREATE_FAILED";
          case RecordingConfigurationState::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordingConfigurationStateMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws
