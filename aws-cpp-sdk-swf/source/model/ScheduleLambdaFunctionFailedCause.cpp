/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/ScheduleLambdaFunctionFailedCause.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace ScheduleLambdaFunctionFailedCauseMapper
      {

        static const int ID_ALREADY_IN_USE_HASH = HashingUtils::HashString("ID_ALREADY_IN_USE");
        static const int OPEN_LAMBDA_FUNCTIONS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OPEN_LAMBDA_FUNCTIONS_LIMIT_EXCEEDED");
        static const int LAMBDA_FUNCTION_CREATION_RATE_EXCEEDED_HASH = HashingUtils::HashString("LAMBDA_FUNCTION_CREATION_RATE_EXCEEDED");
        static const int LAMBDA_SERVICE_NOT_AVAILABLE_IN_REGION_HASH = HashingUtils::HashString("LAMBDA_SERVICE_NOT_AVAILABLE_IN_REGION");


        ScheduleLambdaFunctionFailedCause GetScheduleLambdaFunctionFailedCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ID_ALREADY_IN_USE_HASH)
          {
            return ScheduleLambdaFunctionFailedCause::ID_ALREADY_IN_USE;
          }
          else if (hashCode == OPEN_LAMBDA_FUNCTIONS_LIMIT_EXCEEDED_HASH)
          {
            return ScheduleLambdaFunctionFailedCause::OPEN_LAMBDA_FUNCTIONS_LIMIT_EXCEEDED;
          }
          else if (hashCode == LAMBDA_FUNCTION_CREATION_RATE_EXCEEDED_HASH)
          {
            return ScheduleLambdaFunctionFailedCause::LAMBDA_FUNCTION_CREATION_RATE_EXCEEDED;
          }
          else if (hashCode == LAMBDA_SERVICE_NOT_AVAILABLE_IN_REGION_HASH)
          {
            return ScheduleLambdaFunctionFailedCause::LAMBDA_SERVICE_NOT_AVAILABLE_IN_REGION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduleLambdaFunctionFailedCause>(hashCode);
          }

          return ScheduleLambdaFunctionFailedCause::NOT_SET;
        }

        Aws::String GetNameForScheduleLambdaFunctionFailedCause(ScheduleLambdaFunctionFailedCause enumValue)
        {
          switch(enumValue)
          {
          case ScheduleLambdaFunctionFailedCause::ID_ALREADY_IN_USE:
            return "ID_ALREADY_IN_USE";
          case ScheduleLambdaFunctionFailedCause::OPEN_LAMBDA_FUNCTIONS_LIMIT_EXCEEDED:
            return "OPEN_LAMBDA_FUNCTIONS_LIMIT_EXCEEDED";
          case ScheduleLambdaFunctionFailedCause::LAMBDA_FUNCTION_CREATION_RATE_EXCEEDED:
            return "LAMBDA_FUNCTION_CREATION_RATE_EXCEEDED";
          case ScheduleLambdaFunctionFailedCause::LAMBDA_SERVICE_NOT_AVAILABLE_IN_REGION:
            return "LAMBDA_SERVICE_NOT_AVAILABLE_IN_REGION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ScheduleLambdaFunctionFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
