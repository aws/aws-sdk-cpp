/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ThingPrincipalType.h>
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
      namespace ThingPrincipalTypeMapper
      {

        static const int EXCLUSIVE_THING_HASH = HashingUtils::HashString("EXCLUSIVE_THING");
        static const int NON_EXCLUSIVE_THING_HASH = HashingUtils::HashString("NON_EXCLUSIVE_THING");


        ThingPrincipalType GetThingPrincipalTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXCLUSIVE_THING_HASH)
          {
            return ThingPrincipalType::EXCLUSIVE_THING;
          }
          else if (hashCode == NON_EXCLUSIVE_THING_HASH)
          {
            return ThingPrincipalType::NON_EXCLUSIVE_THING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThingPrincipalType>(hashCode);
          }

          return ThingPrincipalType::NOT_SET;
        }

        Aws::String GetNameForThingPrincipalType(ThingPrincipalType enumValue)
        {
          switch(enumValue)
          {
          case ThingPrincipalType::NOT_SET:
            return {};
          case ThingPrincipalType::EXCLUSIVE_THING:
            return "EXCLUSIVE_THING";
          case ThingPrincipalType::NON_EXCLUSIVE_THING:
            return "NON_EXCLUSIVE_THING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThingPrincipalTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
