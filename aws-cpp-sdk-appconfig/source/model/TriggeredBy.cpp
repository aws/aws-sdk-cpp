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

#include <aws/appconfig/model/TriggeredBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfig
  {
    namespace Model
    {
      namespace TriggeredByMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int APPCONFIG_HASH = HashingUtils::HashString("APPCONFIG");
        static const int CLOUDWATCH_ALARM_HASH = HashingUtils::HashString("CLOUDWATCH_ALARM");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");


        TriggeredBy GetTriggeredByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return TriggeredBy::USER;
          }
          else if (hashCode == APPCONFIG_HASH)
          {
            return TriggeredBy::APPCONFIG;
          }
          else if (hashCode == CLOUDWATCH_ALARM_HASH)
          {
            return TriggeredBy::CLOUDWATCH_ALARM;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return TriggeredBy::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TriggeredBy>(hashCode);
          }

          return TriggeredBy::NOT_SET;
        }

        Aws::String GetNameForTriggeredBy(TriggeredBy enumValue)
        {
          switch(enumValue)
          {
          case TriggeredBy::USER:
            return "USER";
          case TriggeredBy::APPCONFIG:
            return "APPCONFIG";
          case TriggeredBy::CLOUDWATCH_ALARM:
            return "CLOUDWATCH_ALARM";
          case TriggeredBy::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TriggeredByMapper
    } // namespace Model
  } // namespace AppConfig
} // namespace Aws
