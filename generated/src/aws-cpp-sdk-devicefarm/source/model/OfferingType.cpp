/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/OfferingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace OfferingTypeMapper
      {

        static const int RECURRING_HASH = HashingUtils::HashString("RECURRING");


        OfferingType GetOfferingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECURRING_HASH)
          {
            return OfferingType::RECURRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OfferingType>(hashCode);
          }

          return OfferingType::NOT_SET;
        }

        Aws::String GetNameForOfferingType(OfferingType enumValue)
        {
          switch(enumValue)
          {
          case OfferingType::RECURRING:
            return "RECURRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OfferingTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
