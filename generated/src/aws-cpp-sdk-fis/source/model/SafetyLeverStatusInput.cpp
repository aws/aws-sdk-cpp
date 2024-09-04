/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/SafetyLeverStatusInput.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FIS
  {
    namespace Model
    {
      namespace SafetyLeverStatusInputMapper
      {

        static const int disengaged_HASH = HashingUtils::HashString("disengaged");
        static const int engaged_HASH = HashingUtils::HashString("engaged");


        SafetyLeverStatusInput GetSafetyLeverStatusInputForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disengaged_HASH)
          {
            return SafetyLeverStatusInput::disengaged;
          }
          else if (hashCode == engaged_HASH)
          {
            return SafetyLeverStatusInput::engaged;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SafetyLeverStatusInput>(hashCode);
          }

          return SafetyLeverStatusInput::NOT_SET;
        }

        Aws::String GetNameForSafetyLeverStatusInput(SafetyLeverStatusInput enumValue)
        {
          switch(enumValue)
          {
          case SafetyLeverStatusInput::NOT_SET:
            return {};
          case SafetyLeverStatusInput::disengaged:
            return "disengaged";
          case SafetyLeverStatusInput::engaged:
            return "engaged";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SafetyLeverStatusInputMapper
    } // namespace Model
  } // namespace FIS
} // namespace Aws
