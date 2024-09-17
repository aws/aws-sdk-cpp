/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowConnectionType.h>
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
      namespace FlowConnectionTypeMapper
      {

        static const int Data_HASH = HashingUtils::HashString("Data");
        static const int Conditional_HASH = HashingUtils::HashString("Conditional");


        FlowConnectionType GetFlowConnectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Data_HASH)
          {
            return FlowConnectionType::Data;
          }
          else if (hashCode == Conditional_HASH)
          {
            return FlowConnectionType::Conditional;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowConnectionType>(hashCode);
          }

          return FlowConnectionType::NOT_SET;
        }

        Aws::String GetNameForFlowConnectionType(FlowConnectionType enumValue)
        {
          switch(enumValue)
          {
          case FlowConnectionType::NOT_SET:
            return {};
          case FlowConnectionType::Data:
            return "Data";
          case FlowConnectionType::Conditional:
            return "Conditional";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowConnectionTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
