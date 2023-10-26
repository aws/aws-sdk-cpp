/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/PartnerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace PartnerTypeMapper
      {

        static const int Sidewalk_HASH = HashingUtils::HashString("Sidewalk");


        PartnerType GetPartnerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Sidewalk_HASH)
          {
            return PartnerType::Sidewalk;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartnerType>(hashCode);
          }

          return PartnerType::NOT_SET;
        }

        Aws::String GetNameForPartnerType(PartnerType enumValue)
        {
          switch(enumValue)
          {
          case PartnerType::NOT_SET:
            return {};
          case PartnerType::Sidewalk:
            return "Sidewalk";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartnerTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
