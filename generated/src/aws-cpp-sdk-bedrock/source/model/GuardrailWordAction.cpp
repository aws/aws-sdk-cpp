/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailWordAction.h>
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
      namespace GuardrailWordActionMapper
      {

        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        GuardrailWordAction GetGuardrailWordActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCK_HASH)
          {
            return GuardrailWordAction::BLOCK;
          }
          else if (hashCode == NONE_HASH)
          {
            return GuardrailWordAction::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailWordAction>(hashCode);
          }

          return GuardrailWordAction::NOT_SET;
        }

        Aws::String GetNameForGuardrailWordAction(GuardrailWordAction enumValue)
        {
          switch(enumValue)
          {
          case GuardrailWordAction::NOT_SET:
            return {};
          case GuardrailWordAction::BLOCK:
            return "BLOCK";
          case GuardrailWordAction::NONE:
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

      } // namespace GuardrailWordActionMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
