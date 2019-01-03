/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int PARSING_FAILED_HASH = HashingUtils::HashString("PARSING_FAILED");
        static const int VPC_ENDPOINT_SETUP_FAILED_HASH = HashingUtils::HashString("VPC_ENDPOINT_SETUP_FAILED");


        ExecutionResultCode GetExecutionResultCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
