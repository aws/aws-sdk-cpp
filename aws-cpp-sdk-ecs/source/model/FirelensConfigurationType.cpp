/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/FirelensConfigurationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace FirelensConfigurationTypeMapper
      {

        static const int fluentd_HASH = HashingUtils::HashString("fluentd");
        static const int fluentbit_HASH = HashingUtils::HashString("fluentbit");


        FirelensConfigurationType GetFirelensConfigurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == fluentd_HASH)
          {
            return FirelensConfigurationType::fluentd;
          }
          else if (hashCode == fluentbit_HASH)
          {
            return FirelensConfigurationType::fluentbit;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FirelensConfigurationType>(hashCode);
          }

          return FirelensConfigurationType::NOT_SET;
        }

        Aws::String GetNameForFirelensConfigurationType(FirelensConfigurationType enumValue)
        {
          switch(enumValue)
          {
          case FirelensConfigurationType::fluentd:
            return "fluentd";
          case FirelensConfigurationType::fluentbit:
            return "fluentbit";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FirelensConfigurationTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
