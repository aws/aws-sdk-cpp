/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowValidationSeverity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace FlowValidationSeverityMapper
      {

        static const int Warning_HASH = HashingUtils::HashString("Warning");
        static const int Error_HASH = HashingUtils::HashString("Error");


        FlowValidationSeverity GetFlowValidationSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Warning_HASH)
          {
            return FlowValidationSeverity::Warning;
          }
          else if (hashCode == Error_HASH)
          {
            return FlowValidationSeverity::Error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowValidationSeverity>(hashCode);
          }

          return FlowValidationSeverity::NOT_SET;
        }

        Aws::String GetNameForFlowValidationSeverity(FlowValidationSeverity enumValue)
        {
          switch(enumValue)
          {
          case FlowValidationSeverity::NOT_SET:
            return {};
          case FlowValidationSeverity::Warning:
            return "Warning";
          case FlowValidationSeverity::Error:
            return "Error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowValidationSeverityMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
