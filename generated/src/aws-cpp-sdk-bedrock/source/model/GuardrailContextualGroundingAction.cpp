/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContextualGroundingAction.h>
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
      namespace GuardrailContextualGroundingActionMapper
      {

        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        GuardrailContextualGroundingAction GetGuardrailContextualGroundingActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCK_HASH)
          {
            return GuardrailContextualGroundingAction::BLOCK;
          }
          else if (hashCode == NONE_HASH)
          {
            return GuardrailContextualGroundingAction::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailContextualGroundingAction>(hashCode);
          }

          return GuardrailContextualGroundingAction::NOT_SET;
        }

        Aws::String GetNameForGuardrailContextualGroundingAction(GuardrailContextualGroundingAction enumValue)
        {
          switch(enumValue)
          {
          case GuardrailContextualGroundingAction::NOT_SET:
            return {};
          case GuardrailContextualGroundingAction::BLOCK:
            return "BLOCK";
          case GuardrailContextualGroundingAction::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailContextualGroundingActionMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
