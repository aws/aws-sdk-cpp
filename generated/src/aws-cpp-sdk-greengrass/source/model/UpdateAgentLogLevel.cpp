/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/UpdateAgentLogLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace UpdateAgentLogLevelMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t TRACE_HASH = ConstExprHashingUtils::HashString("TRACE");
        static constexpr uint32_t DEBUG__HASH = ConstExprHashingUtils::HashString("DEBUG");
        static constexpr uint32_t VERBOSE_HASH = ConstExprHashingUtils::HashString("VERBOSE");
        static constexpr uint32_t INFO_HASH = ConstExprHashingUtils::HashString("INFO");
        static constexpr uint32_t WARN_HASH = ConstExprHashingUtils::HashString("WARN");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t FATAL_HASH = ConstExprHashingUtils::HashString("FATAL");


        UpdateAgentLogLevel GetUpdateAgentLogLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return UpdateAgentLogLevel::NONE;
          }
          else if (hashCode == TRACE_HASH)
          {
            return UpdateAgentLogLevel::TRACE;
          }
          else if (hashCode == DEBUG__HASH)
          {
            return UpdateAgentLogLevel::DEBUG_;
          }
          else if (hashCode == VERBOSE_HASH)
          {
            return UpdateAgentLogLevel::VERBOSE;
          }
          else if (hashCode == INFO_HASH)
          {
            return UpdateAgentLogLevel::INFO;
          }
          else if (hashCode == WARN_HASH)
          {
            return UpdateAgentLogLevel::WARN;
          }
          else if (hashCode == ERROR__HASH)
          {
            return UpdateAgentLogLevel::ERROR_;
          }
          else if (hashCode == FATAL_HASH)
          {
            return UpdateAgentLogLevel::FATAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateAgentLogLevel>(hashCode);
          }

          return UpdateAgentLogLevel::NOT_SET;
        }

        Aws::String GetNameForUpdateAgentLogLevel(UpdateAgentLogLevel enumValue)
        {
          switch(enumValue)
          {
          case UpdateAgentLogLevel::NOT_SET:
            return {};
          case UpdateAgentLogLevel::NONE:
            return "NONE";
          case UpdateAgentLogLevel::TRACE:
            return "TRACE";
          case UpdateAgentLogLevel::DEBUG_:
            return "DEBUG";
          case UpdateAgentLogLevel::VERBOSE:
            return "VERBOSE";
          case UpdateAgentLogLevel::INFO:
            return "INFO";
          case UpdateAgentLogLevel::WARN:
            return "WARN";
          case UpdateAgentLogLevel::ERROR_:
            return "ERROR";
          case UpdateAgentLogLevel::FATAL:
            return "FATAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateAgentLogLevelMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
