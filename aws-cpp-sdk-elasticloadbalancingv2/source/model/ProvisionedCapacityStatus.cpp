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

#include <aws/elasticloadbalancingv2/model/ProvisionedCapacityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticLoadBalancingv2
  {
    namespace Model
    {
      namespace ProvisionedCapacityStatusMapper
      {

        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int provisioned_HASH = HashingUtils::HashString("provisioned");
        static const int pre_warmed_HASH = HashingUtils::HashString("pre-warmed");


        ProvisionedCapacityStatus GetProvisionedCapacityStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return ProvisionedCapacityStatus::disabled;
          }
          else if (hashCode == pending_HASH)
          {
            return ProvisionedCapacityStatus::pending;
          }
          else if (hashCode == provisioned_HASH)
          {
            return ProvisionedCapacityStatus::provisioned;
          }
          else if (hashCode == pre_warmed_HASH)
          {
            return ProvisionedCapacityStatus::pre_warmed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisionedCapacityStatus>(hashCode);
          }

          return ProvisionedCapacityStatus::NOT_SET;
        }

        Aws::String GetNameForProvisionedCapacityStatus(ProvisionedCapacityStatus enumValue)
        {
          switch(enumValue)
          {
          case ProvisionedCapacityStatus::disabled:
            return "disabled";
          case ProvisionedCapacityStatus::pending:
            return "pending";
          case ProvisionedCapacityStatus::provisioned:
            return "provisioned";
          case ProvisionedCapacityStatus::pre_warmed:
            return "pre-warmed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ProvisionedCapacityStatusMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
