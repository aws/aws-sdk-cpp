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

#include <aws/inspector/model/StopAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace StopActionMapper
      {

        static const int START_EVALUATION_HASH = HashingUtils::HashString("START_EVALUATION");
        static const int SKIP_EVALUATION_HASH = HashingUtils::HashString("SKIP_EVALUATION");


        StopAction GetStopActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_EVALUATION_HASH)
          {
            return StopAction::START_EVALUATION;
          }
          else if (hashCode == SKIP_EVALUATION_HASH)
          {
            return StopAction::SKIP_EVALUATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StopAction>(hashCode);
          }

          return StopAction::NOT_SET;
        }

        Aws::String GetNameForStopAction(StopAction enumValue)
        {
          switch(enumValue)
          {
          case StopAction::START_EVALUATION:
            return "START_EVALUATION";
          case StopAction::SKIP_EVALUATION:
            return "SKIP_EVALUATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StopActionMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
