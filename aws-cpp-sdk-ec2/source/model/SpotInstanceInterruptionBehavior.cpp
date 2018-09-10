﻿/*
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

#include <aws/ec2/model/SpotInstanceInterruptionBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace SpotInstanceInterruptionBehaviorMapper
      {

        static const int hibernate_HASH = HashingUtils::HashString("hibernate");
        static const int stop_HASH = HashingUtils::HashString("stop");
        static const int terminate_HASH = HashingUtils::HashString("terminate");


        SpotInstanceInterruptionBehavior GetSpotInstanceInterruptionBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == hibernate_HASH)
          {
            return SpotInstanceInterruptionBehavior::hibernate;
          }
          else if (hashCode == stop_HASH)
          {
            return SpotInstanceInterruptionBehavior::stop;
          }
          else if (hashCode == terminate_HASH)
          {
            return SpotInstanceInterruptionBehavior::terminate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpotInstanceInterruptionBehavior>(hashCode);
          }

          return SpotInstanceInterruptionBehavior::NOT_SET;
        }

        Aws::String GetNameForSpotInstanceInterruptionBehavior(SpotInstanceInterruptionBehavior enumValue)
        {
          switch(enumValue)
          {
          case SpotInstanceInterruptionBehavior::hibernate:
            return "hibernate";
          case SpotInstanceInterruptionBehavior::stop:
            return "stop";
          case SpotInstanceInterruptionBehavior::terminate:
            return "terminate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SpotInstanceInterruptionBehaviorMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
