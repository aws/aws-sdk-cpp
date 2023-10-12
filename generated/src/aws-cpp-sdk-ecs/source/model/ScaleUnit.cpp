/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ScaleUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace ScaleUnitMapper
      {

        static constexpr uint32_t PERCENT_HASH = ConstExprHashingUtils::HashString("PERCENT");


        ScaleUnit GetScaleUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERCENT_HASH)
          {
            return ScaleUnit::PERCENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScaleUnit>(hashCode);
          }

          return ScaleUnit::NOT_SET;
        }

        Aws::String GetNameForScaleUnit(ScaleUnit enumValue)
        {
          switch(enumValue)
          {
          case ScaleUnit::NOT_SET:
            return {};
          case ScaleUnit::PERCENT:
            return "PERCENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScaleUnitMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
