/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailConverseImageFormat.h>
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
      namespace GuardrailConverseImageFormatMapper
      {

        static const int png_HASH = HashingUtils::HashString("png");
        static const int jpeg_HASH = HashingUtils::HashString("jpeg");


        GuardrailConverseImageFormat GetGuardrailConverseImageFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == png_HASH)
          {
            return GuardrailConverseImageFormat::png;
          }
          else if (hashCode == jpeg_HASH)
          {
            return GuardrailConverseImageFormat::jpeg;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailConverseImageFormat>(hashCode);
          }

          return GuardrailConverseImageFormat::NOT_SET;
        }

        Aws::String GetNameForGuardrailConverseImageFormat(GuardrailConverseImageFormat enumValue)
        {
          switch(enumValue)
          {
          case GuardrailConverseImageFormat::NOT_SET:
            return {};
          case GuardrailConverseImageFormat::png:
            return "png";
          case GuardrailConverseImageFormat::jpeg:
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

      } // namespace GuardrailConverseImageFormatMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
