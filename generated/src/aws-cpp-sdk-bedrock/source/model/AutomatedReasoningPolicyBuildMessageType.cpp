/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildMessageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace AutomatedReasoningPolicyBuildMessageTypeMapper
      {

        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int WARNING_HASH = HashingUtils::HashString("WARNING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        AutomatedReasoningPolicyBuildMessageType GetAutomatedReasoningPolicyBuildMessageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFO_HASH)
          {
            return AutomatedReasoningPolicyBuildMessageType::INFO;
          }
          else if (hashCode == WARNING_HASH)
          {
            return AutomatedReasoningPolicyBuildMessageType::WARNING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return AutomatedReasoningPolicyBuildMessageType::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedReasoningPolicyBuildMessageType>(hashCode);
          }

          return AutomatedReasoningPolicyBuildMessageType::NOT_SET;
        }

        Aws::String GetNameForAutomatedReasoningPolicyBuildMessageType(AutomatedReasoningPolicyBuildMessageType enumValue)
        {
          switch(enumValue)
          {
          case AutomatedReasoningPolicyBuildMessageType::NOT_SET:
            return {};
          case AutomatedReasoningPolicyBuildMessageType::INFO:
            return "INFO";
          case AutomatedReasoningPolicyBuildMessageType::WARNING:
            return "WARNING";
          case AutomatedReasoningPolicyBuildMessageType::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomatedReasoningPolicyBuildMessageTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
