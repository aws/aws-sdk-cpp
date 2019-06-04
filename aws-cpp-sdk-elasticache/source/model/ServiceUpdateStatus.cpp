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

#include <aws/elasticache/model/ServiceUpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace ServiceUpdateStatusMapper
      {

        static const int available_HASH = HashingUtils::HashString("available");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int expired_HASH = HashingUtils::HashString("expired");


        ServiceUpdateStatus GetServiceUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return ServiceUpdateStatus::available;
          }
          else if (hashCode == cancelled_HASH)
          {
            return ServiceUpdateStatus::cancelled;
          }
          else if (hashCode == expired_HASH)
          {
            return ServiceUpdateStatus::expired;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceUpdateStatus>(hashCode);
          }

          return ServiceUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForServiceUpdateStatus(ServiceUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceUpdateStatus::available:
            return "available";
          case ServiceUpdateStatus::cancelled:
            return "cancelled";
          case ServiceUpdateStatus::expired:
            return "expired";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceUpdateStatusMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
