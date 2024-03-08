/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/CustomerActionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace CustomerActionStatusMapper
      {

        static const int CRITICAL_ACTION_REQUIRED_HASH = HashingUtils::HashString("CRITICAL_ACTION_REQUIRED");
        static const int ACTION_RECOMMENDED_HASH = HashingUtils::HashString("ACTION_RECOMMENDED");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        CustomerActionStatus GetCustomerActionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_ACTION_REQUIRED_HASH)
          {
            return CustomerActionStatus::CRITICAL_ACTION_REQUIRED;
          }
          else if (hashCode == ACTION_RECOMMENDED_HASH)
          {
            return CustomerActionStatus::ACTION_RECOMMENDED;
          }
          else if (hashCode == NONE_HASH)
          {
            return CustomerActionStatus::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomerActionStatus>(hashCode);
          }

          return CustomerActionStatus::NOT_SET;
        }

        Aws::String GetNameForCustomerActionStatus(CustomerActionStatus enumValue)
        {
          switch(enumValue)
          {
          case CustomerActionStatus::NOT_SET:
            return {};
          case CustomerActionStatus::CRITICAL_ACTION_REQUIRED:
            return "CRITICAL_ACTION_REQUIRED";
          case CustomerActionStatus::ACTION_RECOMMENDED:
            return "ACTION_RECOMMENDED";
          case CustomerActionStatus::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomerActionStatusMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
