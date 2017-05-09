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

#include <aws/elasticmapreduce/model/AutoScalingPolicyStateChangeReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace AutoScalingPolicyStateChangeReasonCodeMapper
      {

        static const int USER_REQUEST_HASH = HashingUtils::HashString("USER_REQUEST");
        static const int PROVISION_FAILURE_HASH = HashingUtils::HashString("PROVISION_FAILURE");
        static const int CLEANUP_FAILURE_HASH = HashingUtils::HashString("CLEANUP_FAILURE");


        AutoScalingPolicyStateChangeReasonCode GetAutoScalingPolicyStateChangeReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_REQUEST_HASH)
          {
            return AutoScalingPolicyStateChangeReasonCode::USER_REQUEST;
          }
          else if (hashCode == PROVISION_FAILURE_HASH)
          {
            return AutoScalingPolicyStateChangeReasonCode::PROVISION_FAILURE;
          }
          else if (hashCode == CLEANUP_FAILURE_HASH)
          {
            return AutoScalingPolicyStateChangeReasonCode::CLEANUP_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoScalingPolicyStateChangeReasonCode>(hashCode);
          }

          return AutoScalingPolicyStateChangeReasonCode::NOT_SET;
        }

        Aws::String GetNameForAutoScalingPolicyStateChangeReasonCode(AutoScalingPolicyStateChangeReasonCode enumValue)
        {
          switch(enumValue)
          {
          case AutoScalingPolicyStateChangeReasonCode::USER_REQUEST:
            return "USER_REQUEST";
          case AutoScalingPolicyStateChangeReasonCode::PROVISION_FAILURE:
            return "PROVISION_FAILURE";
          case AutoScalingPolicyStateChangeReasonCode::CLEANUP_FAILURE:
            return "CLEANUP_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AutoScalingPolicyStateChangeReasonCodeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
