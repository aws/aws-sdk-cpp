/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContentFiltersTierName.h>
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
      namespace GuardrailContentFiltersTierNameMapper
      {

        static const int CLASSIC_HASH = HashingUtils::HashString("CLASSIC");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        GuardrailContentFiltersTierName GetGuardrailContentFiltersTierNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLASSIC_HASH)
          {
            return GuardrailContentFiltersTierName::CLASSIC;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return GuardrailContentFiltersTierName::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailContentFiltersTierName>(hashCode);
          }

          return GuardrailContentFiltersTierName::NOT_SET;
        }

        Aws::String GetNameForGuardrailContentFiltersTierName(GuardrailContentFiltersTierName enumValue)
        {
          switch(enumValue)
          {
          case GuardrailContentFiltersTierName::NOT_SET:
            return {};
          case GuardrailContentFiltersTierName::CLASSIC:
            return "CLASSIC";
          case GuardrailContentFiltersTierName::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailContentFiltersTierNameMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
