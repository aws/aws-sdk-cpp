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
#include <aws/codedeploy/model/ListStateFilterAction.h>
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
      namespace ListStateFilterActionMapper
      {

        static const int include_HASH = HashingUtils::HashString("include");
        static const int exclude_HASH = HashingUtils::HashString("exclude");
        static const int ignore_HASH = HashingUtils::HashString("ignore");


        ListStateFilterAction GetListStateFilterActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == include_HASH)
          {
            return ListStateFilterAction::include;
          }
          else if (hashCode == exclude_HASH)
          {
            return ListStateFilterAction::exclude;
          }
          else if (hashCode == ignore_HASH)
          {
            return ListStateFilterAction::ignore;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListStateFilterAction>(hashCode);
          }

          return ListStateFilterAction::NOT_SET;
        }

        Aws::String GetNameForListStateFilterAction(ListStateFilterAction enumValue)
        {
          switch(enumValue)
          {
          case ListStateFilterAction::include:
            return "include";
          case ListStateFilterAction::exclude:
            return "exclude";
          case ListStateFilterAction::ignore:
            return "ignore";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ListStateFilterActionMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
