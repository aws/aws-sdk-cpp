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

#include <aws/medialive/model/GlobalConfigurationOutputTimingSource.h>
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
      namespace GlobalConfigurationOutputTimingSourceMapper
      {

        static const int INPUT_CLOCK_HASH = HashingUtils::HashString("INPUT_CLOCK");
        static const int SYSTEM_CLOCK_HASH = HashingUtils::HashString("SYSTEM_CLOCK");


        GlobalConfigurationOutputTimingSource GetGlobalConfigurationOutputTimingSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INPUT_CLOCK_HASH)
          {
            return GlobalConfigurationOutputTimingSource::INPUT_CLOCK;
          }
          else if (hashCode == SYSTEM_CLOCK_HASH)
          {
            return GlobalConfigurationOutputTimingSource::SYSTEM_CLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalConfigurationOutputTimingSource>(hashCode);
          }

          return GlobalConfigurationOutputTimingSource::NOT_SET;
        }

        Aws::String GetNameForGlobalConfigurationOutputTimingSource(GlobalConfigurationOutputTimingSource enumValue)
        {
          switch(enumValue)
          {
          case GlobalConfigurationOutputTimingSource::INPUT_CLOCK:
            return "INPUT_CLOCK";
          case GlobalConfigurationOutputTimingSource::SYSTEM_CLOCK:
            return "SYSTEM_CLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace GlobalConfigurationOutputTimingSourceMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
