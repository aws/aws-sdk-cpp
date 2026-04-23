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

#include <aws/codedeploy/model/TargetLabel.h>
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
      namespace TargetLabelMapper
      {

        static const int Blue_HASH = HashingUtils::HashString("Blue");
        static const int Green_HASH = HashingUtils::HashString("Green");


        TargetLabel GetTargetLabelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Blue_HASH)
          {
            return TargetLabel::Blue;
          }
          else if (hashCode == Green_HASH)
          {
            return TargetLabel::Green;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetLabel>(hashCode);
          }

          return TargetLabel::NOT_SET;
        }

        Aws::String GetNameForTargetLabel(TargetLabel enumValue)
        {
          switch(enumValue)
          {
          case TargetLabel::Blue:
            return "Blue";
          case TargetLabel::Green:
            return "Green";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetLabelMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
