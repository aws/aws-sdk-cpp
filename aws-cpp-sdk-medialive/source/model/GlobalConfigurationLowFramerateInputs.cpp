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

#include <aws/medialive/model/GlobalConfigurationLowFramerateInputs.h>
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
      namespace GlobalConfigurationLowFramerateInputsMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        GlobalConfigurationLowFramerateInputs GetGlobalConfigurationLowFramerateInputsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return GlobalConfigurationLowFramerateInputs::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return GlobalConfigurationLowFramerateInputs::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalConfigurationLowFramerateInputs>(hashCode);
          }

          return GlobalConfigurationLowFramerateInputs::NOT_SET;
        }

        Aws::String GetNameForGlobalConfigurationLowFramerateInputs(GlobalConfigurationLowFramerateInputs enumValue)
        {
          switch(enumValue)
          {
          case GlobalConfigurationLowFramerateInputs::DISABLED:
            return "DISABLED";
          case GlobalConfigurationLowFramerateInputs::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace GlobalConfigurationLowFramerateInputsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
