/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContentFilterAction.h>
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
      namespace GuardrailContentFilterActionMapper
      {

        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        GuardrailContentFilterAction GetGuardrailContentFilterActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCK_HASH)
          {
            return GuardrailContentFilterAction::BLOCK;
          }
          else if (hashCode == NONE_HASH)
          {
            return GuardrailContentFilterAction::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailContentFilterAction>(hashCode);
          }

          return GuardrailContentFilterAction::NOT_SET;
        }

        Aws::String GetNameForGuardrailContentFilterAction(GuardrailContentFilterAction enumValue)
        {
          switch(enumValue)
          {
          case GuardrailContentFilterAction::NOT_SET:
            return {};
          case GuardrailContentFilterAction::BLOCK:
            return "BLOCK";
          case GuardrailContentFilterAction::NONE:
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

      } // namespace GuardrailContentFilterActionMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
