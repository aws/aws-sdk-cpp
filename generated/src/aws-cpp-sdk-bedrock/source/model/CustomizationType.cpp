/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CustomizationType.h>
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
      namespace CustomizationTypeMapper
      {

        static const int FINE_TUNING_HASH = HashingUtils::HashString("FINE_TUNING");
        static const int CONTINUED_PRE_TRAINING_HASH = HashingUtils::HashString("CONTINUED_PRE_TRAINING");


        CustomizationType GetCustomizationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINE_TUNING_HASH)
          {
            return CustomizationType::FINE_TUNING;
          }
          else if (hashCode == CONTINUED_PRE_TRAINING_HASH)
          {
            return CustomizationType::CONTINUED_PRE_TRAINING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomizationType>(hashCode);
          }

          return CustomizationType::NOT_SET;
        }

        Aws::String GetNameForCustomizationType(CustomizationType enumValue)
        {
          switch(enumValue)
          {
          case CustomizationType::NOT_SET:
            return {};
          case CustomizationType::FINE_TUNING:
            return "FINE_TUNING";
          case CustomizationType::CONTINUED_PRE_TRAINING:
            return "CONTINUED_PRE_TRAINING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomizationTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
