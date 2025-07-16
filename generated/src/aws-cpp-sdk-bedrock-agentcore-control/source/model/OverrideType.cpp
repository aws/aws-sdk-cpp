/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OverrideType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCoreControl
  {
    namespace Model
    {
      namespace OverrideTypeMapper
      {

        static const int SEMANTIC_OVERRIDE_HASH = HashingUtils::HashString("SEMANTIC_OVERRIDE");
        static const int SUMMARY_OVERRIDE_HASH = HashingUtils::HashString("SUMMARY_OVERRIDE");
        static const int USER_PREFERENCE_OVERRIDE_HASH = HashingUtils::HashString("USER_PREFERENCE_OVERRIDE");


        OverrideType GetOverrideTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEMANTIC_OVERRIDE_HASH)
          {
            return OverrideType::SEMANTIC_OVERRIDE;
          }
          else if (hashCode == SUMMARY_OVERRIDE_HASH)
          {
            return OverrideType::SUMMARY_OVERRIDE;
          }
          else if (hashCode == USER_PREFERENCE_OVERRIDE_HASH)
          {
            return OverrideType::USER_PREFERENCE_OVERRIDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OverrideType>(hashCode);
          }

          return OverrideType::NOT_SET;
        }

        Aws::String GetNameForOverrideType(OverrideType enumValue)
        {
          switch(enumValue)
          {
          case OverrideType::NOT_SET:
            return {};
          case OverrideType::SEMANTIC_OVERRIDE:
            return "SEMANTIC_OVERRIDE";
          case OverrideType::SUMMARY_OVERRIDE:
            return "SUMMARY_OVERRIDE";
          case OverrideType::USER_PREFERENCE_OVERRIDE:
            return "USER_PREFERENCE_OVERRIDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OverrideTypeMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
