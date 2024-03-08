/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/ExecutionStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDataExports
  {
    namespace Model
    {
      namespace ExecutionStatusCodeMapper
      {

        static const int INITIATION_IN_PROCESS_HASH = HashingUtils::HashString("INITIATION_IN_PROCESS");
        static const int QUERY_QUEUED_HASH = HashingUtils::HashString("QUERY_QUEUED");
        static const int QUERY_IN_PROCESS_HASH = HashingUtils::HashString("QUERY_IN_PROCESS");
        static const int QUERY_FAILURE_HASH = HashingUtils::HashString("QUERY_FAILURE");
        static const int DELIVERY_IN_PROCESS_HASH = HashingUtils::HashString("DELIVERY_IN_PROCESS");
        static const int DELIVERY_SUCCESS_HASH = HashingUtils::HashString("DELIVERY_SUCCESS");
        static const int DELIVERY_FAILURE_HASH = HashingUtils::HashString("DELIVERY_FAILURE");


        ExecutionStatusCode GetExecutionStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIATION_IN_PROCESS_HASH)
          {
            return ExecutionStatusCode::INITIATION_IN_PROCESS;
          }
          else if (hashCode == QUERY_QUEUED_HASH)
          {
            return ExecutionStatusCode::QUERY_QUEUED;
          }
          else if (hashCode == QUERY_IN_PROCESS_HASH)
          {
            return ExecutionStatusCode::QUERY_IN_PROCESS;
          }
          else if (hashCode == QUERY_FAILURE_HASH)
          {
            return ExecutionStatusCode::QUERY_FAILURE;
          }
          else if (hashCode == DELIVERY_IN_PROCESS_HASH)
          {
            return ExecutionStatusCode::DELIVERY_IN_PROCESS;
          }
          else if (hashCode == DELIVERY_SUCCESS_HASH)
          {
            return ExecutionStatusCode::DELIVERY_SUCCESS;
          }
          else if (hashCode == DELIVERY_FAILURE_HASH)
          {
            return ExecutionStatusCode::DELIVERY_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionStatusCode>(hashCode);
          }

          return ExecutionStatusCode::NOT_SET;
        }

        Aws::String GetNameForExecutionStatusCode(ExecutionStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ExecutionStatusCode::NOT_SET:
            return {};
          case ExecutionStatusCode::INITIATION_IN_PROCESS:
            return "INITIATION_IN_PROCESS";
          case ExecutionStatusCode::QUERY_QUEUED:
            return "QUERY_QUEUED";
          case ExecutionStatusCode::QUERY_IN_PROCESS:
            return "QUERY_IN_PROCESS";
          case ExecutionStatusCode::QUERY_FAILURE:
            return "QUERY_FAILURE";
          case ExecutionStatusCode::DELIVERY_IN_PROCESS:
            return "DELIVERY_IN_PROCESS";
          case ExecutionStatusCode::DELIVERY_SUCCESS:
            return "DELIVERY_SUCCESS";
          case ExecutionStatusCode::DELIVERY_FAILURE:
            return "DELIVERY_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionStatusCodeMapper
    } // namespace Model
  } // namespace BCMDataExports
} // namespace Aws
