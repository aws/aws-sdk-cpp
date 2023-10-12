/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ExecutionResultCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace ExecutionResultCodeMapper
      {

        static constexpr uint32_t PARSING_FAILED_HASH = ConstExprHashingUtils::HashString("PARSING_FAILED");
        static constexpr uint32_t VPC_ENDPOINT_SETUP_FAILED_HASH = ConstExprHashingUtils::HashString("VPC_ENDPOINT_SETUP_FAILED");


        ExecutionResultCode GetExecutionResultCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PARSING_FAILED_HASH)
          {
            return ExecutionResultCode::PARSING_FAILED;
          }
          else if (hashCode == VPC_ENDPOINT_SETUP_FAILED_HASH)
          {
            return ExecutionResultCode::VPC_ENDPOINT_SETUP_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionResultCode>(hashCode);
          }

          return ExecutionResultCode::NOT_SET;
        }

        Aws::String GetNameForExecutionResultCode(ExecutionResultCode enumValue)
        {
          switch(enumValue)
          {
          case ExecutionResultCode::NOT_SET:
            return {};
          case ExecutionResultCode::PARSING_FAILED:
            return "PARSING_FAILED";
          case ExecutionResultCode::VPC_ENDPOINT_SETUP_FAILED:
            return "VPC_ENDPOINT_SETUP_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionResultCodeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
