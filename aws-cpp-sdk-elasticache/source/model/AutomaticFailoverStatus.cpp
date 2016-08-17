/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/model/AutomaticFailoverStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace AutomaticFailoverStatusMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int enabling_HASH = HashingUtils::HashString("enabling");
        static const int disabling_HASH = HashingUtils::HashString("disabling");


        AutomaticFailoverStatus GetAutomaticFailoverStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return AutomaticFailoverStatus::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return AutomaticFailoverStatus::disabled;
          }
          else if (hashCode == enabling_HASH)
          {
            return AutomaticFailoverStatus::enabling;
          }
          else if (hashCode == disabling_HASH)
          {
            return AutomaticFailoverStatus::disabling;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomaticFailoverStatus>(hashCode);
          }

          return AutomaticFailoverStatus::NOT_SET;
        }

        Aws::String GetNameForAutomaticFailoverStatus(AutomaticFailoverStatus enumValue)
        {
          switch(enumValue)
          {
          case AutomaticFailoverStatus::enabled:
            return "enabled";
          case AutomaticFailoverStatus::disabled:
            return "disabled";
          case AutomaticFailoverStatus::enabling:
            return "enabling";
          case AutomaticFailoverStatus::disabling:
            return "disabling";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AutomaticFailoverStatusMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
