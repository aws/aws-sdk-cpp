/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceEnvironmentState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace ServiceEnvironmentStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ServiceEnvironmentState GetServiceEnvironmentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ServiceEnvironmentState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ServiceEnvironmentState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceEnvironmentState>(hashCode);
          }

          return ServiceEnvironmentState::NOT_SET;
        }

        Aws::String GetNameForServiceEnvironmentState(ServiceEnvironmentState enumValue)
        {
          switch(enumValue)
          {
          case ServiceEnvironmentState::NOT_SET:
            return {};
          case ServiceEnvironmentState::ENABLED:
            return "ENABLED";
          case ServiceEnvironmentState::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceEnvironmentStateMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
