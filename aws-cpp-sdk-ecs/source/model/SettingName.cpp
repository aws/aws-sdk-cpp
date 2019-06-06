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

#include <aws/ecs/model/SettingName.h>
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
      namespace SettingNameMapper
      {

        static const int serviceLongArnFormat_HASH = HashingUtils::HashString("serviceLongArnFormat");
        static const int taskLongArnFormat_HASH = HashingUtils::HashString("taskLongArnFormat");
        static const int containerInstanceLongArnFormat_HASH = HashingUtils::HashString("containerInstanceLongArnFormat");
        static const int awsvpcTrunking_HASH = HashingUtils::HashString("awsvpcTrunking");


        SettingName GetSettingNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == serviceLongArnFormat_HASH)
          {
            return SettingName::serviceLongArnFormat;
          }
          else if (hashCode == taskLongArnFormat_HASH)
          {
            return SettingName::taskLongArnFormat;
          }
          else if (hashCode == containerInstanceLongArnFormat_HASH)
          {
            return SettingName::containerInstanceLongArnFormat;
          }
          else if (hashCode == awsvpcTrunking_HASH)
          {
            return SettingName::awsvpcTrunking;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SettingName>(hashCode);
          }

          return SettingName::NOT_SET;
        }

        Aws::String GetNameForSettingName(SettingName enumValue)
        {
          switch(enumValue)
          {
          case SettingName::serviceLongArnFormat:
            return "serviceLongArnFormat";
          case SettingName::taskLongArnFormat:
            return "taskLongArnFormat";
          case SettingName::containerInstanceLongArnFormat:
            return "containerInstanceLongArnFormat";
          case SettingName::awsvpcTrunking:
            return "awsvpcTrunking";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SettingNameMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
