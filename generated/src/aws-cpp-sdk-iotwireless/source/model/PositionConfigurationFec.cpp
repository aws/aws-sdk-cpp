/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/PositionConfigurationFec.h>
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
      namespace PositionConfigurationFecMapper
      {

        static const int ROSE_HASH = HashingUtils::HashString("ROSE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        PositionConfigurationFec GetPositionConfigurationFecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROSE_HASH)
          {
            return PositionConfigurationFec::ROSE;
          }
          else if (hashCode == NONE_HASH)
          {
            return PositionConfigurationFec::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PositionConfigurationFec>(hashCode);
          }

          return PositionConfigurationFec::NOT_SET;
        }

        Aws::String GetNameForPositionConfigurationFec(PositionConfigurationFec enumValue)
        {
          switch(enumValue)
          {
          case PositionConfigurationFec::NOT_SET:
            return {};
          case PositionConfigurationFec::ROSE:
            return "ROSE";
          case PositionConfigurationFec::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PositionConfigurationFecMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
