﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/medialive/model/GlobalConfigurationOutputLockingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace GlobalConfigurationOutputLockingModeMapper
      {

        static const int EPOCH_LOCKING_HASH = HashingUtils::HashString("EPOCH_LOCKING");
        static const int PIPELINE_LOCKING_HASH = HashingUtils::HashString("PIPELINE_LOCKING");


        GlobalConfigurationOutputLockingMode GetGlobalConfigurationOutputLockingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EPOCH_LOCKING_HASH)
          {
            return GlobalConfigurationOutputLockingMode::EPOCH_LOCKING;
          }
          else if (hashCode == PIPELINE_LOCKING_HASH)
          {
            return GlobalConfigurationOutputLockingMode::PIPELINE_LOCKING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalConfigurationOutputLockingMode>(hashCode);
          }

          return GlobalConfigurationOutputLockingMode::NOT_SET;
        }

        Aws::String GetNameForGlobalConfigurationOutputLockingMode(GlobalConfigurationOutputLockingMode enumValue)
        {
          switch(enumValue)
          {
          case GlobalConfigurationOutputLockingMode::EPOCH_LOCKING:
            return "EPOCH_LOCKING";
          case GlobalConfigurationOutputLockingMode::PIPELINE_LOCKING:
            return "PIPELINE_LOCKING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlobalConfigurationOutputLockingModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
