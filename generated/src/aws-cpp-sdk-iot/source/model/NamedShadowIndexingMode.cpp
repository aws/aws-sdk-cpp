/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/NamedShadowIndexingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace NamedShadowIndexingModeMapper
      {

        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");
        static constexpr uint32_t ON_HASH = ConstExprHashingUtils::HashString("ON");


        NamedShadowIndexingMode GetNamedShadowIndexingModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return NamedShadowIndexingMode::OFF;
          }
          else if (hashCode == ON_HASH)
          {
            return NamedShadowIndexingMode::ON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamedShadowIndexingMode>(hashCode);
          }

          return NamedShadowIndexingMode::NOT_SET;
        }

        Aws::String GetNameForNamedShadowIndexingMode(NamedShadowIndexingMode enumValue)
        {
          switch(enumValue)
          {
          case NamedShadowIndexingMode::NOT_SET:
            return {};
          case NamedShadowIndexingMode::OFF:
            return "OFF";
          case NamedShadowIndexingMode::ON:
            return "ON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NamedShadowIndexingModeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
