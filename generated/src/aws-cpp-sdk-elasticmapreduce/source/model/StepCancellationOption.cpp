/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t SEND_INTERRUPT_HASH = ConstExprHashingUtils::HashString("SEND_INTERRUPT");
        static constexpr uint32_t TERMINATE_PROCESS_HASH = ConstExprHashingUtils::HashString("TERMINATE_PROCESS");


        StepCancellationOption GetStepCancellationOptionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case StepCancellationOption::NOT_SET:
            return {};
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
