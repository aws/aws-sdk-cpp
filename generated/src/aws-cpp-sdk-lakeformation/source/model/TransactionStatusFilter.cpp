/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/TransactionStatusFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LakeFormation
  {
    namespace Model
    {
      namespace TransactionStatusFilterMapper
      {

        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t COMMITTED_HASH = ConstExprHashingUtils::HashString("COMMITTED");
        static constexpr uint32_t ABORTED_HASH = ConstExprHashingUtils::HashString("ABORTED");


        TransactionStatusFilter GetTransactionStatusFilterForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return TransactionStatusFilter::ALL;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return TransactionStatusFilter::COMPLETED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return TransactionStatusFilter::ACTIVE;
          }
          else if (hashCode == COMMITTED_HASH)
          {
            return TransactionStatusFilter::COMMITTED;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return TransactionStatusFilter::ABORTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransactionStatusFilter>(hashCode);
          }

          return TransactionStatusFilter::NOT_SET;
        }

        Aws::String GetNameForTransactionStatusFilter(TransactionStatusFilter enumValue)
        {
          switch(enumValue)
          {
          case TransactionStatusFilter::NOT_SET:
            return {};
          case TransactionStatusFilter::ALL:
            return "ALL";
          case TransactionStatusFilter::COMPLETED:
            return "COMPLETED";
          case TransactionStatusFilter::ACTIVE:
            return "ACTIVE";
          case TransactionStatusFilter::COMMITTED:
            return "COMMITTED";
          case TransactionStatusFilter::ABORTED:
            return "ABORTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransactionStatusFilterMapper
    } // namespace Model
  } // namespace LakeFormation
} // namespace Aws
