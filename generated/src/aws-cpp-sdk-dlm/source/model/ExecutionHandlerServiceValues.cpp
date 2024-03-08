/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/ExecutionHandlerServiceValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace ExecutionHandlerServiceValuesMapper
      {

        static const int AWS_SYSTEMS_MANAGER_HASH = HashingUtils::HashString("AWS_SYSTEMS_MANAGER");


        ExecutionHandlerServiceValues GetExecutionHandlerServiceValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_SYSTEMS_MANAGER_HASH)
          {
            return ExecutionHandlerServiceValues::AWS_SYSTEMS_MANAGER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionHandlerServiceValues>(hashCode);
          }

          return ExecutionHandlerServiceValues::NOT_SET;
        }

        Aws::String GetNameForExecutionHandlerServiceValues(ExecutionHandlerServiceValues enumValue)
        {
          switch(enumValue)
          {
          case ExecutionHandlerServiceValues::NOT_SET:
            return {};
          case ExecutionHandlerServiceValues::AWS_SYSTEMS_MANAGER:
            return "AWS_SYSTEMS_MANAGER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionHandlerServiceValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
