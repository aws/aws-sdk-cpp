/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/DurationUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace DurationUnitMapper
      {

        static const int s_HASH = HashingUtils::HashString("s");
        static const int ms_HASH = HashingUtils::HashString("ms");


        DurationUnit GetDurationUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == s_HASH)
          {
            return DurationUnit::s;
          }
          else if (hashCode == ms_HASH)
          {
            return DurationUnit::ms;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DurationUnit>(hashCode);
          }

          return DurationUnit::NOT_SET;
        }

        Aws::String GetNameForDurationUnit(DurationUnit enumValue)
        {
          switch(enumValue)
          {
          case DurationUnit::s:
            return "s";
          case DurationUnit::ms:
            return "ms";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DurationUnitMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
