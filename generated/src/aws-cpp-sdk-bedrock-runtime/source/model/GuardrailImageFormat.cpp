/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailImageFormat.h>
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
      namespace GuardrailImageFormatMapper
      {

        static const int png_HASH = HashingUtils::HashString("png");
        static const int jpeg_HASH = HashingUtils::HashString("jpeg");


        GuardrailImageFormat GetGuardrailImageFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == png_HASH)
          {
            return GuardrailImageFormat::png;
          }
          else if (hashCode == jpeg_HASH)
          {
            return GuardrailImageFormat::jpeg;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailImageFormat>(hashCode);
          }

          return GuardrailImageFormat::NOT_SET;
        }

        Aws::String GetNameForGuardrailImageFormat(GuardrailImageFormat enumValue)
        {
          switch(enumValue)
          {
          case GuardrailImageFormat::NOT_SET:
            return {};
          case GuardrailImageFormat::png:
            return "png";
          case GuardrailImageFormat::jpeg:
            return "jpeg";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailImageFormatMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
