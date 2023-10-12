/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DeliveryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace DeliveryStatusMapper
      {

        static constexpr uint32_t Success_HASH = ConstExprHashingUtils::HashString("Success");
        static constexpr uint32_t Failure_HASH = ConstExprHashingUtils::HashString("Failure");
        static constexpr uint32_t Not_Applicable_HASH = ConstExprHashingUtils::HashString("Not_Applicable");


        DeliveryStatus GetDeliveryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Success_HASH)
          {
            return DeliveryStatus::Success;
          }
          else if (hashCode == Failure_HASH)
          {
            return DeliveryStatus::Failure;
          }
          else if (hashCode == Not_Applicable_HASH)
          {
            return DeliveryStatus::Not_Applicable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryStatus>(hashCode);
          }

          return DeliveryStatus::NOT_SET;
        }

        Aws::String GetNameForDeliveryStatus(DeliveryStatus enumValue)
        {
          switch(enumValue)
          {
          case DeliveryStatus::NOT_SET:
            return {};
          case DeliveryStatus::Success:
            return "Success";
          case DeliveryStatus::Failure:
            return "Failure";
          case DeliveryStatus::Not_Applicable:
            return "Not_Applicable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliveryStatusMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
