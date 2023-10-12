/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ExecuteCommandLogging.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace ExecuteCommandLoggingMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t OVERRIDE_HASH = ConstExprHashingUtils::HashString("OVERRIDE");


        ExecuteCommandLogging GetExecuteCommandLoggingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ExecuteCommandLogging::NONE;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return ExecuteCommandLogging::DEFAULT;
          }
          else if (hashCode == OVERRIDE_HASH)
          {
            return ExecuteCommandLogging::OVERRIDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecuteCommandLogging>(hashCode);
          }

          return ExecuteCommandLogging::NOT_SET;
        }

        Aws::String GetNameForExecuteCommandLogging(ExecuteCommandLogging enumValue)
        {
          switch(enumValue)
          {
          case ExecuteCommandLogging::NOT_SET:
            return {};
          case ExecuteCommandLogging::NONE:
            return "NONE";
          case ExecuteCommandLogging::DEFAULT:
            return "DEFAULT";
          case ExecuteCommandLogging::OVERRIDE:
            return "OVERRIDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecuteCommandLoggingMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
