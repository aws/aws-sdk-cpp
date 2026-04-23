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

#include <aws/autoscaling-plans/model/ScalingStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScalingPlans
  {
    namespace Model
    {
      namespace ScalingStatusCodeMapper
      {

        static const int Inactive_HASH = HashingUtils::HashString("Inactive");
        static const int PartiallyActive_HASH = HashingUtils::HashString("PartiallyActive");
        static const int Active_HASH = HashingUtils::HashString("Active");


        ScalingStatusCode GetScalingStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Inactive_HASH)
          {
            return ScalingStatusCode::Inactive;
          }
          else if (hashCode == PartiallyActive_HASH)
          {
            return ScalingStatusCode::PartiallyActive;
          }
          else if (hashCode == Active_HASH)
          {
            return ScalingStatusCode::Active;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingStatusCode>(hashCode);
          }

          return ScalingStatusCode::NOT_SET;
        }

        Aws::String GetNameForScalingStatusCode(ScalingStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ScalingStatusCode::Inactive:
            return "Inactive";
          case ScalingStatusCode::PartiallyActive:
            return "PartiallyActive";
          case ScalingStatusCode::Active:
            return "Active";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalingStatusCodeMapper
    } // namespace Model
  } // namespace AutoScalingPlans
} // namespace Aws
