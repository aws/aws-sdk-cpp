/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalResultLocationType.h>
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
      namespace RetrievalResultLocationTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");


        RetrievalResultLocationType GetRetrievalResultLocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return RetrievalResultLocationType::S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetrievalResultLocationType>(hashCode);
          }

          return RetrievalResultLocationType::NOT_SET;
        }

        Aws::String GetNameForRetrievalResultLocationType(RetrievalResultLocationType enumValue)
        {
          switch(enumValue)
          {
          case RetrievalResultLocationType::NOT_SET:
            return {};
          case RetrievalResultLocationType::S3:
            return "S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetrievalResultLocationTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
