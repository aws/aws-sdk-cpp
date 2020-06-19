/*
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

#include <aws/medialive/model/FeatureActivationsInputPrepareScheduleActions.h>
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
      namespace FeatureActivationsInputPrepareScheduleActionsMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        FeatureActivationsInputPrepareScheduleActions GetFeatureActivationsInputPrepareScheduleActionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return FeatureActivationsInputPrepareScheduleActions::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return FeatureActivationsInputPrepareScheduleActions::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureActivationsInputPrepareScheduleActions>(hashCode);
          }

          return FeatureActivationsInputPrepareScheduleActions::NOT_SET;
        }

        Aws::String GetNameForFeatureActivationsInputPrepareScheduleActions(FeatureActivationsInputPrepareScheduleActions enumValue)
        {
          switch(enumValue)
          {
          case FeatureActivationsInputPrepareScheduleActions::DISABLED:
            return "DISABLED";
          case FeatureActivationsInputPrepareScheduleActions::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureActivationsInputPrepareScheduleActionsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
