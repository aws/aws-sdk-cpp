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
#include <aws/route53/model/InsufficientDataHealthStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace InsufficientDataHealthStatusMapper
      {

        static const int Healthy_HASH = HashingUtils::HashString("Healthy");
        static const int Unhealthy_HASH = HashingUtils::HashString("Unhealthy");
        static const int LastKnownStatus_HASH = HashingUtils::HashString("LastKnownStatus");


        InsufficientDataHealthStatus GetInsufficientDataHealthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Healthy_HASH)
          {
            return InsufficientDataHealthStatus::Healthy;
          }
          else if (hashCode == Unhealthy_HASH)
          {
            return InsufficientDataHealthStatus::Unhealthy;
          }
          else if (hashCode == LastKnownStatus_HASH)
          {
            return InsufficientDataHealthStatus::LastKnownStatus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsufficientDataHealthStatus>(hashCode);
          }

          return InsufficientDataHealthStatus::NOT_SET;
        }

        Aws::String GetNameForInsufficientDataHealthStatus(InsufficientDataHealthStatus enumValue)
        {
          switch(enumValue)
          {
          case InsufficientDataHealthStatus::Healthy:
            return "Healthy";
          case InsufficientDataHealthStatus::Unhealthy:
            return "Unhealthy";
          case InsufficientDataHealthStatus::LastKnownStatus:
            return "LastKnownStatus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InsufficientDataHealthStatusMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
