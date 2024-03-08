/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/InterpretationSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeV2
  {
    namespace Model
    {
      namespace InterpretationSourceMapper
      {

        static const int Bedrock_HASH = HashingUtils::HashString("Bedrock");
        static const int Lex_HASH = HashingUtils::HashString("Lex");


        InterpretationSource GetInterpretationSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Bedrock_HASH)
          {
            return InterpretationSource::Bedrock;
          }
          else if (hashCode == Lex_HASH)
          {
            return InterpretationSource::Lex;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InterpretationSource>(hashCode);
          }

          return InterpretationSource::NOT_SET;
        }

        Aws::String GetNameForInterpretationSource(InterpretationSource enumValue)
        {
          switch(enumValue)
          {
          case InterpretationSource::NOT_SET:
            return {};
          case InterpretationSource::Bedrock:
            return "Bedrock";
          case InterpretationSource::Lex:
            return "Lex";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InterpretationSourceMapper
    } // namespace Model
  } // namespace LexRuntimeV2
} // namespace Aws
