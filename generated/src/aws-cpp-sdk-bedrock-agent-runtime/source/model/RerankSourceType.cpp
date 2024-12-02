/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RerankSourceType.h>
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
      namespace RerankSourceTypeMapper
      {

        static const int INLINE_HASH = HashingUtils::HashString("INLINE");


        RerankSourceType GetRerankSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INLINE_HASH)
          {
            return RerankSourceType::INLINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RerankSourceType>(hashCode);
          }

          return RerankSourceType::NOT_SET;
        }

        Aws::String GetNameForRerankSourceType(RerankSourceType enumValue)
        {
          switch(enumValue)
          {
          case RerankSourceType::NOT_SET:
            return {};
          case RerankSourceType::INLINE:
            return "INLINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RerankSourceTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
