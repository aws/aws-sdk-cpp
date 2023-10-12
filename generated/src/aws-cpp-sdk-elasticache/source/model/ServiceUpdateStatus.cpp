/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t cancelled_HASH = ConstExprHashingUtils::HashString("cancelled");
        static constexpr uint32_t expired_HASH = ConstExprHashingUtils::HashString("expired");


        ServiceUpdateStatus GetServiceUpdateStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ServiceUpdateStatus::NOT_SET:
            return {};
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
