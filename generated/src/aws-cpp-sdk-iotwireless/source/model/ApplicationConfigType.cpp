/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ApplicationConfigType.h>
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
      namespace ApplicationConfigTypeMapper
      {

        static constexpr uint32_t SemtechGeolocation_HASH = ConstExprHashingUtils::HashString("SemtechGeolocation");


        ApplicationConfigType GetApplicationConfigTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SemtechGeolocation_HASH)
          {
            return ApplicationConfigType::SemtechGeolocation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationConfigType>(hashCode);
          }

          return ApplicationConfigType::NOT_SET;
        }

        Aws::String GetNameForApplicationConfigType(ApplicationConfigType enumValue)
        {
          switch(enumValue)
          {
          case ApplicationConfigType::NOT_SET:
            return {};
          case ApplicationConfigType::SemtechGeolocation:
            return "SemtechGeolocation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationConfigTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
