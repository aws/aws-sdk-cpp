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

#include <aws/elasticmapreduce/model/StepCancellationOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace StepCancellationOptionMapper
      {

        static const int SEND_INTERRUPT_HASH = HashingUtils::HashString("SEND_INTERRUPT");
        static const int TERMINATE_PROCESS_HASH = HashingUtils::HashString("TERMINATE_PROCESS");


        StepCancellationOption GetStepCancellationOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEND_INTERRUPT_HASH)
          {
            return StepCancellationOption::SEND_INTERRUPT;
          }
          else if (hashCode == TERMINATE_PROCESS_HASH)
          {
            return StepCancellationOption::TERMINATE_PROCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepCancellationOption>(hashCode);
          }

          return StepCancellationOption::NOT_SET;
        }

        Aws::String GetNameForStepCancellationOption(StepCancellationOption enumValue)
        {
          switch(enumValue)
          {
          case StepCancellationOption::SEND_INTERRUPT:
            return "SEND_INTERRUPT";
          case StepCancellationOption::TERMINATE_PROCESS:
            return "TERMINATE_PROCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StepCancellationOptionMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
