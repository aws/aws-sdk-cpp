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

        static const int PERCENT_HASH = HashingUtils::HashString("PERCENT");


        ScaleUnit GetScaleUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
