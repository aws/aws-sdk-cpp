/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/TransactionStatus.h>
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
      namespace TransactionStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int COMMITTED_HASH = HashingUtils::HashString("COMMITTED");
        static const int ABORTED_HASH = HashingUtils::HashString("ABORTED");
        static const int COMMIT_IN_PROGRESS_HASH = HashingUtils::HashString("COMMIT_IN_PROGRESS");


        TransactionStatus GetTransactionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return TransactionStatus::ACTIVE;
          }
          else if (hashCode == COMMITTED_HASH)
          {
            return TransactionStatus::COMMITTED;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return TransactionStatus::ABORTED;
          }
          else if (hashCode == COMMIT_IN_PROGRESS_HASH)
          {
            return TransactionStatus::COMMIT_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransactionStatus>(hashCode);
          }

          return TransactionStatus::NOT_SET;
        }

        Aws::String GetNameForTransactionStatus(TransactionStatus enumValue)
        {
          switch(enumValue)
          {
          case TransactionStatus::NOT_SET:
            return {};
          case TransactionStatus::ACTIVE:
            return "ACTIVE";
          case TransactionStatus::COMMITTED:
            return "COMMITTED";
          case TransactionStatus::ABORTED:
            return "ABORTED";
          case TransactionStatus::COMMIT_IN_PROGRESS:
            return "COMMIT_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransactionStatusMapper
    } // namespace Model
  } // namespace LakeFormation
} // namespace Aws
