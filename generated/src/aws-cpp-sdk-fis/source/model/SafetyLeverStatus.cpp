/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/SafetyLeverStatus.h>
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
      namespace SafetyLeverStatusMapper
      {

        static const int disengaged_HASH = HashingUtils::HashString("disengaged");
        static const int engaged_HASH = HashingUtils::HashString("engaged");
        static const int engaging_HASH = HashingUtils::HashString("engaging");


        SafetyLeverStatus GetSafetyLeverStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disengaged_HASH)
          {
            return SafetyLeverStatus::disengaged;
          }
          else if (hashCode == engaged_HASH)
          {
            return SafetyLeverStatus::engaged;
          }
          else if (hashCode == engaging_HASH)
          {
            return SafetyLeverStatus::engaging;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SafetyLeverStatus>(hashCode);
          }

          return SafetyLeverStatus::NOT_SET;
        }

        Aws::String GetNameForSafetyLeverStatus(SafetyLeverStatus enumValue)
        {
          switch(enumValue)
          {
          case SafetyLeverStatus::NOT_SET:
            return {};
          case SafetyLeverStatus::disengaged:
            return "disengaged";
          case SafetyLeverStatus::engaged:
            return "engaged";
          case SafetyLeverStatus::engaging:
            return "engaging";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SafetyLeverStatusMapper
    } // namespace Model
  } // namespace FIS
} // namespace Aws
