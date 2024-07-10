/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailContentSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockRuntime
  {
    namespace Model
    {
      namespace GuardrailContentSourceMapper
      {

        static const int INPUT_HASH = HashingUtils::HashString("INPUT");
        static const int OUTPUT_HASH = HashingUtils::HashString("OUTPUT");


        GuardrailContentSource GetGuardrailContentSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INPUT_HASH)
          {
            return GuardrailContentSource::INPUT;
          }
          else if (hashCode == OUTPUT_HASH)
          {
            return GuardrailContentSource::OUTPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailContentSource>(hashCode);
          }

          return GuardrailContentSource::NOT_SET;
        }

        Aws::String GetNameForGuardrailContentSource(GuardrailContentSource enumValue)
        {
          switch(enumValue)
          {
          case GuardrailContentSource::NOT_SET:
            return {};
          case GuardrailContentSource::INPUT:
            return "INPUT";
          case GuardrailContentSource::OUTPUT:
            return "OUTPUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailContentSourceMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
