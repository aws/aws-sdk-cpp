/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/TransactionType.h>
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
      namespace TransactionTypeMapper
      {

        static const int READ_AND_WRITE_HASH = HashingUtils::HashString("READ_AND_WRITE");
        static const int READ_ONLY_HASH = HashingUtils::HashString("READ_ONLY");


        TransactionType GetTransactionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READ_AND_WRITE_HASH)
          {
            return TransactionType::READ_AND_WRITE;
          }
          else if (hashCode == READ_ONLY_HASH)
          {
            return TransactionType::READ_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransactionType>(hashCode);
          }

          return TransactionType::NOT_SET;
        }

        Aws::String GetNameForTransactionType(TransactionType enumValue)
        {
          switch(enumValue)
          {
          case TransactionType::NOT_SET:
            return {};
          case TransactionType::READ_AND_WRITE:
            return "READ_AND_WRITE";
          case TransactionType::READ_ONLY:
            return "READ_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransactionTypeMapper
    } // namespace Model
  } // namespace LakeFormation
} // namespace Aws
