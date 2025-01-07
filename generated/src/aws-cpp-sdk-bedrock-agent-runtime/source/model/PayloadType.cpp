/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PayloadType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentRuntime
  {
    namespace Model
    {
      namespace PayloadTypeMapper
      {

        static const int TEXT_HASH = HashingUtils::HashString("TEXT");
        static const int RETURN_CONTROL_HASH = HashingUtils::HashString("RETURN_CONTROL");


        PayloadType GetPayloadTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_HASH)
          {
            return PayloadType::TEXT;
          }
          else if (hashCode == RETURN_CONTROL_HASH)
          {
            return PayloadType::RETURN_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PayloadType>(hashCode);
          }

          return PayloadType::NOT_SET;
        }

        Aws::String GetNameForPayloadType(PayloadType enumValue)
        {
          switch(enumValue)
          {
          case PayloadType::NOT_SET:
            return {};
          case PayloadType::TEXT:
            return "TEXT";
          case PayloadType::RETURN_CONTROL:
            return "RETURN_CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PayloadTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
