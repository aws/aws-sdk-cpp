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
#include <aws/codepipeline/model/ActionCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace ActionCategoryMapper
      {

        static const int Source_HASH = HashingUtils::HashString("Source");
        static const int Build_HASH = HashingUtils::HashString("Build");
        static const int Deploy_HASH = HashingUtils::HashString("Deploy");
        static const int Test_HASH = HashingUtils::HashString("Test");
        static const int Invoke_HASH = HashingUtils::HashString("Invoke");
        static const int Approval_HASH = HashingUtils::HashString("Approval");


        ActionCategory GetActionCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Source_HASH)
          {
            return ActionCategory::Source;
          }
          else if (hashCode == Build_HASH)
          {
            return ActionCategory::Build;
          }
          else if (hashCode == Deploy_HASH)
          {
            return ActionCategory::Deploy;
          }
          else if (hashCode == Test_HASH)
          {
            return ActionCategory::Test;
          }
          else if (hashCode == Invoke_HASH)
          {
            return ActionCategory::Invoke;
          }
          else if (hashCode == Approval_HASH)
          {
            return ActionCategory::Approval;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionCategory>(hashCode);
          }

          return ActionCategory::NOT_SET;
        }

        Aws::String GetNameForActionCategory(ActionCategory enumValue)
        {
          switch(enumValue)
          {
          case ActionCategory::Source:
            return "Source";
          case ActionCategory::Build:
            return "Build";
          case ActionCategory::Deploy:
            return "Deploy";
          case ActionCategory::Test:
            return "Test";
          case ActionCategory::Invoke:
            return "Invoke";
          case ActionCategory::Approval:
            return "Approval";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ActionCategoryMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
