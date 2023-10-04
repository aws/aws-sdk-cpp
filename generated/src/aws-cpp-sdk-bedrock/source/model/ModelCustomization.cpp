/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelCustomization.h>
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
      namespace ModelCustomizationMapper
      {

        static const int FINE_TUNING_HASH = HashingUtils::HashString("FINE_TUNING");


        ModelCustomization GetModelCustomizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINE_TUNING_HASH)
          {
            return ModelCustomization::FINE_TUNING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelCustomization>(hashCode);
          }

          return ModelCustomization::NOT_SET;
        }

        Aws::String GetNameForModelCustomization(ModelCustomization enumValue)
        {
          switch(enumValue)
          {
          case ModelCustomization::FINE_TUNING:
            return "FINE_TUNING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelCustomizationMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
