/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/CustomerActionName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEventsData
  {
    namespace Model
    {
      namespace CustomerActionNameMapper
      {

        static constexpr uint32_t SNOOZE_HASH = ConstExprHashingUtils::HashString("SNOOZE");
        static constexpr uint32_t ENABLE_HASH = ConstExprHashingUtils::HashString("ENABLE");
        static constexpr uint32_t DISABLE_HASH = ConstExprHashingUtils::HashString("DISABLE");
        static constexpr uint32_t ACKNOWLEDGE_HASH = ConstExprHashingUtils::HashString("ACKNOWLEDGE");
        static constexpr uint32_t RESET_HASH = ConstExprHashingUtils::HashString("RESET");


        CustomerActionName GetCustomerActionNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SNOOZE_HASH)
          {
            return CustomerActionName::SNOOZE;
          }
          else if (hashCode == ENABLE_HASH)
          {
            return CustomerActionName::ENABLE;
          }
          else if (hashCode == DISABLE_HASH)
          {
            return CustomerActionName::DISABLE;
          }
          else if (hashCode == ACKNOWLEDGE_HASH)
          {
            return CustomerActionName::ACKNOWLEDGE;
          }
          else if (hashCode == RESET_HASH)
          {
            return CustomerActionName::RESET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomerActionName>(hashCode);
          }

          return CustomerActionName::NOT_SET;
        }

        Aws::String GetNameForCustomerActionName(CustomerActionName enumValue)
        {
          switch(enumValue)
          {
          case CustomerActionName::NOT_SET:
            return {};
          case CustomerActionName::SNOOZE:
            return "SNOOZE";
          case CustomerActionName::ENABLE:
            return "ENABLE";
          case CustomerActionName::DISABLE:
            return "DISABLE";
          case CustomerActionName::ACKNOWLEDGE:
            return "ACKNOWLEDGE";
          case CustomerActionName::RESET:
            return "RESET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomerActionNameMapper
    } // namespace Model
  } // namespace IoTEventsData
} // namespace Aws
