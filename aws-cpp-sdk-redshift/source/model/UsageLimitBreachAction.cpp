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

#include <aws/redshift/model/UsageLimitBreachAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace UsageLimitBreachActionMapper
      {

        static const int log_HASH = HashingUtils::HashString("log");
        static const int emit_metric_HASH = HashingUtils::HashString("emit-metric");
        static const int disable_HASH = HashingUtils::HashString("disable");


        UsageLimitBreachAction GetUsageLimitBreachActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == log_HASH)
          {
            return UsageLimitBreachAction::log;
          }
          else if (hashCode == emit_metric_HASH)
          {
            return UsageLimitBreachAction::emit_metric;
          }
          else if (hashCode == disable_HASH)
          {
            return UsageLimitBreachAction::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageLimitBreachAction>(hashCode);
          }

          return UsageLimitBreachAction::NOT_SET;
        }

        Aws::String GetNameForUsageLimitBreachAction(UsageLimitBreachAction enumValue)
        {
          switch(enumValue)
          {
          case UsageLimitBreachAction::log:
            return "log";
          case UsageLimitBreachAction::emit_metric:
            return "emit-metric";
          case UsageLimitBreachAction::disable:
            return "disable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageLimitBreachActionMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
