/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailTopicAction.h>
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
      namespace GuardrailTopicActionMapper
      {

        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        GuardrailTopicAction GetGuardrailTopicActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCK_HASH)
          {
            return GuardrailTopicAction::BLOCK;
          }
          else if (hashCode == NONE_HASH)
          {
            return GuardrailTopicAction::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailTopicAction>(hashCode);
          }

          return GuardrailTopicAction::NOT_SET;
        }

        Aws::String GetNameForGuardrailTopicAction(GuardrailTopicAction enumValue)
        {
          switch(enumValue)
          {
          case GuardrailTopicAction::NOT_SET:
            return {};
          case GuardrailTopicAction::BLOCK:
            return "BLOCK";
          case GuardrailTopicAction::NONE:
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

      } // namespace GuardrailTopicActionMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
