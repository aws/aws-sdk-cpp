/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/WriteOperationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace WriteOperationTypeMapper
      {

        static const int INSERT_HASH = HashingUtils::HashString("INSERT");
        static const int UPSERT_HASH = HashingUtils::HashString("UPSERT");
        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");


        WriteOperationType GetWriteOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSERT_HASH)
          {
            return WriteOperationType::INSERT;
          }
          else if (hashCode == UPSERT_HASH)
          {
            return WriteOperationType::UPSERT;
          }
          else if (hashCode == UPDATE_HASH)
          {
            return WriteOperationType::UPDATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WriteOperationType>(hashCode);
          }

          return WriteOperationType::NOT_SET;
        }

        Aws::String GetNameForWriteOperationType(WriteOperationType enumValue)
        {
          switch(enumValue)
          {
          case WriteOperationType::INSERT:
            return "INSERT";
          case WriteOperationType::UPSERT:
            return "UPSERT";
          case WriteOperationType::UPDATE:
            return "UPDATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WriteOperationTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
