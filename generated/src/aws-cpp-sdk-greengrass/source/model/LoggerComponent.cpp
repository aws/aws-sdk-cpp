/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/LoggerComponent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace LoggerComponentMapper
      {

        static const int GreengrassSystem_HASH = HashingUtils::HashString("GreengrassSystem");
        static const int Lambda_HASH = HashingUtils::HashString("Lambda");


        LoggerComponent GetLoggerComponentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GreengrassSystem_HASH)
          {
            return LoggerComponent::GreengrassSystem;
          }
          else if (hashCode == Lambda_HASH)
          {
            return LoggerComponent::Lambda;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoggerComponent>(hashCode);
          }

          return LoggerComponent::NOT_SET;
        }

        Aws::String GetNameForLoggerComponent(LoggerComponent enumValue)
        {
          switch(enumValue)
          {
          case LoggerComponent::GreengrassSystem:
            return "GreengrassSystem";
          case LoggerComponent::Lambda:
            return "Lambda";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoggerComponentMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
