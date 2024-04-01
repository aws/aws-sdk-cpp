/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UsageGroupByField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace UsageGroupByFieldMapper
      {

        static const int QUEUE_ID_HASH = HashingUtils::HashString("QUEUE_ID");
        static const int FLEET_ID_HASH = HashingUtils::HashString("FLEET_ID");
        static const int JOB_ID_HASH = HashingUtils::HashString("JOB_ID");
        static const int USER_ID_HASH = HashingUtils::HashString("USER_ID");
        static const int USAGE_TYPE_HASH = HashingUtils::HashString("USAGE_TYPE");
        static const int INSTANCE_TYPE_HASH = HashingUtils::HashString("INSTANCE_TYPE");
        static const int LICENSE_PRODUCT_HASH = HashingUtils::HashString("LICENSE_PRODUCT");


        UsageGroupByField GetUsageGroupByFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUE_ID_HASH)
          {
            return UsageGroupByField::QUEUE_ID;
          }
          else if (hashCode == FLEET_ID_HASH)
          {
            return UsageGroupByField::FLEET_ID;
          }
          else if (hashCode == JOB_ID_HASH)
          {
            return UsageGroupByField::JOB_ID;
          }
          else if (hashCode == USER_ID_HASH)
          {
            return UsageGroupByField::USER_ID;
          }
          else if (hashCode == USAGE_TYPE_HASH)
          {
            return UsageGroupByField::USAGE_TYPE;
          }
          else if (hashCode == INSTANCE_TYPE_HASH)
          {
            return UsageGroupByField::INSTANCE_TYPE;
          }
          else if (hashCode == LICENSE_PRODUCT_HASH)
          {
            return UsageGroupByField::LICENSE_PRODUCT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageGroupByField>(hashCode);
          }

          return UsageGroupByField::NOT_SET;
        }

        Aws::String GetNameForUsageGroupByField(UsageGroupByField enumValue)
        {
          switch(enumValue)
          {
          case UsageGroupByField::NOT_SET:
            return {};
          case UsageGroupByField::QUEUE_ID:
            return "QUEUE_ID";
          case UsageGroupByField::FLEET_ID:
            return "FLEET_ID";
          case UsageGroupByField::JOB_ID:
            return "JOB_ID";
          case UsageGroupByField::USER_ID:
            return "USER_ID";
          case UsageGroupByField::USAGE_TYPE:
            return "USAGE_TYPE";
          case UsageGroupByField::INSTANCE_TYPE:
            return "INSTANCE_TYPE";
          case UsageGroupByField::LICENSE_PRODUCT:
            return "LICENSE_PRODUCT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageGroupByFieldMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
