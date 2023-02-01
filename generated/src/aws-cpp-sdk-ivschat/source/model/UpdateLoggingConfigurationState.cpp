/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/UpdateLoggingConfigurationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivschat
  {
    namespace Model
    {
      namespace UpdateLoggingConfigurationStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        UpdateLoggingConfigurationState GetUpdateLoggingConfigurationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return UpdateLoggingConfigurationState::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateLoggingConfigurationState>(hashCode);
          }

          return UpdateLoggingConfigurationState::NOT_SET;
        }

        Aws::String GetNameForUpdateLoggingConfigurationState(UpdateLoggingConfigurationState enumValue)
        {
          switch(enumValue)
          {
          case UpdateLoggingConfigurationState::ACTIVE:
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

      } // namespace UpdateLoggingConfigurationStateMapper
    } // namespace Model
  } // namespace ivschat
} // namespace Aws
