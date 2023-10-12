/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/InstanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace InstanceStatusMapper
      {

        static constexpr uint32_t IN_USE_HASH = ConstExprHashingUtils::HashString("IN_USE");
        static constexpr uint32_t PREPARING_HASH = ConstExprHashingUtils::HashString("PREPARING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t NOT_AVAILABLE_HASH = ConstExprHashingUtils::HashString("NOT_AVAILABLE");


        InstanceStatus GetInstanceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_USE_HASH)
          {
            return InstanceStatus::IN_USE;
          }
          else if (hashCode == PREPARING_HASH)
          {
            return InstanceStatus::PREPARING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return InstanceStatus::AVAILABLE;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return InstanceStatus::NOT_AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceStatus>(hashCode);
          }

          return InstanceStatus::NOT_SET;
        }

        Aws::String GetNameForInstanceStatus(InstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case InstanceStatus::NOT_SET:
            return {};
          case InstanceStatus::IN_USE:
            return "IN_USE";
          case InstanceStatus::PREPARING:
            return "PREPARING";
          case InstanceStatus::AVAILABLE:
            return "AVAILABLE";
          case InstanceStatus::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceStatusMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
