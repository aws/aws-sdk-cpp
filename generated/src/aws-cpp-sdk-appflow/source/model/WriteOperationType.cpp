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

        static constexpr uint32_t INSERT_HASH = ConstExprHashingUtils::HashString("INSERT");
        static constexpr uint32_t UPSERT_HASH = ConstExprHashingUtils::HashString("UPSERT");
        static constexpr uint32_t UPDATE_HASH = ConstExprHashingUtils::HashString("UPDATE");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");


        WriteOperationType GetWriteOperationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == DELETE__HASH)
          {
            return WriteOperationType::DELETE_;
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
          case WriteOperationType::NOT_SET:
            return {};
          case WriteOperationType::INSERT:
            return "INSERT";
          case WriteOperationType::UPSERT:
            return "UPSERT";
          case WriteOperationType::UPDATE:
            return "UPDATE";
          case WriteOperationType::DELETE_:
            return "DELETE";
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
