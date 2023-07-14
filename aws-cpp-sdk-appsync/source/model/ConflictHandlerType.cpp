/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ConflictHandlerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace ConflictHandlerTypeMapper
      {

        static const int OPTIMISTIC_CONCURRENCY_HASH = HashingUtils::HashString("OPTIMISTIC_CONCURRENCY");
        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");
        static const int AUTOMERGE_HASH = HashingUtils::HashString("AUTOMERGE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ConflictHandlerType GetConflictHandlerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPTIMISTIC_CONCURRENCY_HASH)
          {
            return ConflictHandlerType::OPTIMISTIC_CONCURRENCY;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return ConflictHandlerType::LAMBDA;
          }
          else if (hashCode == AUTOMERGE_HASH)
          {
            return ConflictHandlerType::AUTOMERGE;
          }
          else if (hashCode == NONE_HASH)
          {
            return ConflictHandlerType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConflictHandlerType>(hashCode);
          }

          return ConflictHandlerType::NOT_SET;
        }

        Aws::String GetNameForConflictHandlerType(ConflictHandlerType enumValue)
        {
          switch(enumValue)
          {
          case ConflictHandlerType::OPTIMISTIC_CONCURRENCY:
            return "OPTIMISTIC_CONCURRENCY";
          case ConflictHandlerType::LAMBDA:
            return "LAMBDA";
          case ConflictHandlerType::AUTOMERGE:
            return "AUTOMERGE";
          case ConflictHandlerType::NONE:
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

      } // namespace ConflictHandlerTypeMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
