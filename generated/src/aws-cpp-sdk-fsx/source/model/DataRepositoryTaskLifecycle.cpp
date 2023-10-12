/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DataRepositoryTaskLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace DataRepositoryTaskLifecycleMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t EXECUTING_HASH = ConstExprHashingUtils::HashString("EXECUTING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t CANCELING_HASH = ConstExprHashingUtils::HashString("CANCELING");


        DataRepositoryTaskLifecycle GetDataRepositoryTaskLifecycleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return DataRepositoryTaskLifecycle::PENDING;
          }
          else if (hashCode == EXECUTING_HASH)
          {
            return DataRepositoryTaskLifecycle::EXECUTING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DataRepositoryTaskLifecycle::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return DataRepositoryTaskLifecycle::SUCCEEDED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return DataRepositoryTaskLifecycle::CANCELED;
          }
          else if (hashCode == CANCELING_HASH)
          {
            return DataRepositoryTaskLifecycle::CANCELING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataRepositoryTaskLifecycle>(hashCode);
          }

          return DataRepositoryTaskLifecycle::NOT_SET;
        }

        Aws::String GetNameForDataRepositoryTaskLifecycle(DataRepositoryTaskLifecycle enumValue)
        {
          switch(enumValue)
          {
          case DataRepositoryTaskLifecycle::NOT_SET:
            return {};
          case DataRepositoryTaskLifecycle::PENDING:
            return "PENDING";
          case DataRepositoryTaskLifecycle::EXECUTING:
            return "EXECUTING";
          case DataRepositoryTaskLifecycle::FAILED:
            return "FAILED";
          case DataRepositoryTaskLifecycle::SUCCEEDED:
            return "SUCCEEDED";
          case DataRepositoryTaskLifecycle::CANCELED:
            return "CANCELED";
          case DataRepositoryTaskLifecycle::CANCELING:
            return "CANCELING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataRepositoryTaskLifecycleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
