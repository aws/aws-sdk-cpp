/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ExecutionEngineType.h>
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
      namespace ExecutionEngineTypeMapper
      {

        static const int EMR_HASH = HashingUtils::HashString("EMR");


        ExecutionEngineType GetExecutionEngineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMR_HASH)
          {
            return ExecutionEngineType::EMR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionEngineType>(hashCode);
          }

          return ExecutionEngineType::NOT_SET;
        }

        Aws::String GetNameForExecutionEngineType(ExecutionEngineType enumValue)
        {
          switch(enumValue)
          {
          case ExecutionEngineType::EMR:
            return "EMR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionEngineTypeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
