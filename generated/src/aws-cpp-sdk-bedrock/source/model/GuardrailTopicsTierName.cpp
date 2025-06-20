/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailTopicsTierName.h>
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
      namespace GuardrailTopicsTierNameMapper
      {

        static const int CLASSIC_HASH = HashingUtils::HashString("CLASSIC");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        GuardrailTopicsTierName GetGuardrailTopicsTierNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLASSIC_HASH)
          {
            return GuardrailTopicsTierName::CLASSIC;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return GuardrailTopicsTierName::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailTopicsTierName>(hashCode);
          }

          return GuardrailTopicsTierName::NOT_SET;
        }

        Aws::String GetNameForGuardrailTopicsTierName(GuardrailTopicsTierName enumValue)
        {
          switch(enumValue)
          {
          case GuardrailTopicsTierName::NOT_SET:
            return {};
          case GuardrailTopicsTierName::CLASSIC:
            return "CLASSIC";
          case GuardrailTopicsTierName::STANDARD:
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

      } // namespace GuardrailTopicsTierNameMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
