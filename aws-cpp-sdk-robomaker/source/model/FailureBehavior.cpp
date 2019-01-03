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

#include <aws/robomaker/model/FailureBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace FailureBehaviorMapper
      {

        static const int Fail_HASH = HashingUtils::HashString("Fail");
        static const int Continue_HASH = HashingUtils::HashString("Continue");


        FailureBehavior GetFailureBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Fail_HASH)
          {
            return FailureBehavior::Fail;
          }
          else if (hashCode == Continue_HASH)
          {
            return FailureBehavior::Continue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureBehavior>(hashCode);
          }

          return FailureBehavior::NOT_SET;
        }

        Aws::String GetNameForFailureBehavior(FailureBehavior enumValue)
        {
          switch(enumValue)
          {
          case FailureBehavior::Fail:
            return "Fail";
          case FailureBehavior::Continue:
            return "Continue";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailureBehaviorMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
