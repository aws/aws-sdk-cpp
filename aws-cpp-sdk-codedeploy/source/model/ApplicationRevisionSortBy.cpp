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
#include <aws/codedeploy/model/ApplicationRevisionSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace ApplicationRevisionSortByMapper
      {

        static const int registerTime_HASH = HashingUtils::HashString("registerTime");
        static const int firstUsedTime_HASH = HashingUtils::HashString("firstUsedTime");
        static const int lastUsedTime_HASH = HashingUtils::HashString("lastUsedTime");


        ApplicationRevisionSortBy GetApplicationRevisionSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == registerTime_HASH)
          {
            return ApplicationRevisionSortBy::registerTime;
          }
          else if (hashCode == firstUsedTime_HASH)
          {
            return ApplicationRevisionSortBy::firstUsedTime;
          }
          else if (hashCode == lastUsedTime_HASH)
          {
            return ApplicationRevisionSortBy::lastUsedTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationRevisionSortBy>(hashCode);
          }

          return ApplicationRevisionSortBy::NOT_SET;
        }

        Aws::String GetNameForApplicationRevisionSortBy(ApplicationRevisionSortBy enumValue)
        {
          switch(enumValue)
          {
          case ApplicationRevisionSortBy::registerTime:
            return "registerTime";
          case ApplicationRevisionSortBy::firstUsedTime:
            return "firstUsedTime";
          case ApplicationRevisionSortBy::lastUsedTime:
            return "lastUsedTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ApplicationRevisionSortByMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
