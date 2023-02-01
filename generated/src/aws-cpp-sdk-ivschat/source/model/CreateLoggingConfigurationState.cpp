/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/CreateLoggingConfigurationState.h>
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
      namespace CreateLoggingConfigurationStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        CreateLoggingConfigurationState GetCreateLoggingConfigurationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return CreateLoggingConfigurationState::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CreateLoggingConfigurationState>(hashCode);
          }

          return CreateLoggingConfigurationState::NOT_SET;
        }

        Aws::String GetNameForCreateLoggingConfigurationState(CreateLoggingConfigurationState enumValue)
        {
          switch(enumValue)
          {
          case CreateLoggingConfigurationState::ACTIVE:
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

      } // namespace CreateLoggingConfigurationStateMapper
    } // namespace Model
  } // namespace ivschat
} // namespace Aws
