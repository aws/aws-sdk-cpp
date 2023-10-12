/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/FailedItemReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace FailedItemReasonMapper
      {

        static constexpr uint32_t NOT_VALID_ARN_HASH = ConstExprHashingUtils::HashString("NOT_VALID_ARN");
        static constexpr uint32_t NOT_VALID_PARTITION_HASH = ConstExprHashingUtils::HashString("NOT_VALID_PARTITION");
        static constexpr uint32_t NOT_VALID_REGION_HASH = ConstExprHashingUtils::HashString("NOT_VALID_REGION");
        static constexpr uint32_t NOT_VALID_SERVICE_HASH = ConstExprHashingUtils::HashString("NOT_VALID_SERVICE");
        static constexpr uint32_t NOT_VALID_RESOURCE_TYPE_HASH = ConstExprHashingUtils::HashString("NOT_VALID_RESOURCE_TYPE");
        static constexpr uint32_t NOT_VALID_ACCOUNT_ID_HASH = ConstExprHashingUtils::HashString("NOT_VALID_ACCOUNT_ID");


        FailedItemReason GetFailedItemReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_VALID_ARN_HASH)
          {
            return FailedItemReason::NOT_VALID_ARN;
          }
          else if (hashCode == NOT_VALID_PARTITION_HASH)
          {
            return FailedItemReason::NOT_VALID_PARTITION;
          }
          else if (hashCode == NOT_VALID_REGION_HASH)
          {
            return FailedItemReason::NOT_VALID_REGION;
          }
          else if (hashCode == NOT_VALID_SERVICE_HASH)
          {
            return FailedItemReason::NOT_VALID_SERVICE;
          }
          else if (hashCode == NOT_VALID_RESOURCE_TYPE_HASH)
          {
            return FailedItemReason::NOT_VALID_RESOURCE_TYPE;
          }
          else if (hashCode == NOT_VALID_ACCOUNT_ID_HASH)
          {
            return FailedItemReason::NOT_VALID_ACCOUNT_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailedItemReason>(hashCode);
          }

          return FailedItemReason::NOT_SET;
        }

        Aws::String GetNameForFailedItemReason(FailedItemReason enumValue)
        {
          switch(enumValue)
          {
          case FailedItemReason::NOT_SET:
            return {};
          case FailedItemReason::NOT_VALID_ARN:
            return "NOT_VALID_ARN";
          case FailedItemReason::NOT_VALID_PARTITION:
            return "NOT_VALID_PARTITION";
          case FailedItemReason::NOT_VALID_REGION:
            return "NOT_VALID_REGION";
          case FailedItemReason::NOT_VALID_SERVICE:
            return "NOT_VALID_SERVICE";
          case FailedItemReason::NOT_VALID_RESOURCE_TYPE:
            return "NOT_VALID_RESOURCE_TYPE";
          case FailedItemReason::NOT_VALID_ACCOUNT_ID:
            return "NOT_VALID_ACCOUNT_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailedItemReasonMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
