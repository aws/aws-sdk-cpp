/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/OperationResultFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace OperationResultFilterNameMapper
      {

        static const int OPERATION_RESULT_STATUS_HASH = HashingUtils::HashString("OPERATION_RESULT_STATUS");


        OperationResultFilterName GetOperationResultFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPERATION_RESULT_STATUS_HASH)
          {
            return OperationResultFilterName::OPERATION_RESULT_STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationResultFilterName>(hashCode);
          }

          return OperationResultFilterName::NOT_SET;
        }

        Aws::String GetNameForOperationResultFilterName(OperationResultFilterName enumValue)
        {
          switch(enumValue)
          {
          case OperationResultFilterName::OPERATION_RESULT_STATUS:
            return "OPERATION_RESULT_STATUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationResultFilterNameMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
