/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ExecutionErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace ExecutionErrorTypeMapper
      {

        static const int PERMISSION_DENIED_HASH = HashingUtils::HashString("PERMISSION_DENIED");


        ExecutionErrorType GetExecutionErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERMISSION_DENIED_HASH)
          {
            return ExecutionErrorType::PERMISSION_DENIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionErrorType>(hashCode);
          }

          return ExecutionErrorType::NOT_SET;
        }

        Aws::String GetNameForExecutionErrorType(ExecutionErrorType enumValue)
        {
          switch(enumValue)
          {
          case ExecutionErrorType::PERMISSION_DENIED:
            return "PERMISSION_DENIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionErrorTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
