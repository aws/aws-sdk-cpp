/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ObservabilityConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace ObservabilityConfigurationStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        ObservabilityConfigurationStatus GetObservabilityConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ObservabilityConfigurationStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return ObservabilityConfigurationStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObservabilityConfigurationStatus>(hashCode);
          }

          return ObservabilityConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForObservabilityConfigurationStatus(ObservabilityConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case ObservabilityConfigurationStatus::NOT_SET:
            return {};
          case ObservabilityConfigurationStatus::ACTIVE:
            return "ACTIVE";
          case ObservabilityConfigurationStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObservabilityConfigurationStatusMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
