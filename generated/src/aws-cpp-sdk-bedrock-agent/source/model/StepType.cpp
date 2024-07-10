/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/StepType.h>
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
      namespace StepTypeMapper
      {

        static const int POST_CHUNKING_HASH = HashingUtils::HashString("POST_CHUNKING");


        StepType GetStepTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POST_CHUNKING_HASH)
          {
            return StepType::POST_CHUNKING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepType>(hashCode);
          }

          return StepType::NOT_SET;
        }

        Aws::String GetNameForStepType(StepType enumValue)
        {
          switch(enumValue)
          {
          case StepType::NOT_SET:
            return {};
          case StepType::POST_CHUNKING:
            return "POST_CHUNKING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StepTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
