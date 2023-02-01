/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ExecutorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace ExecutorTypeMapper
      {

        static const int COORDINATOR_HASH = HashingUtils::HashString("COORDINATOR");
        static const int GATEWAY_HASH = HashingUtils::HashString("GATEWAY");
        static const int WORKER_HASH = HashingUtils::HashString("WORKER");


        ExecutorType GetExecutorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COORDINATOR_HASH)
          {
            return ExecutorType::COORDINATOR;
          }
          else if (hashCode == GATEWAY_HASH)
          {
            return ExecutorType::GATEWAY;
          }
          else if (hashCode == WORKER_HASH)
          {
            return ExecutorType::WORKER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutorType>(hashCode);
          }

          return ExecutorType::NOT_SET;
        }

        Aws::String GetNameForExecutorType(ExecutorType enumValue)
        {
          switch(enumValue)
          {
          case ExecutorType::COORDINATOR:
            return "COORDINATOR";
          case ExecutorType::GATEWAY:
            return "GATEWAY";
          case ExecutorType::WORKER:
            return "WORKER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutorTypeMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
