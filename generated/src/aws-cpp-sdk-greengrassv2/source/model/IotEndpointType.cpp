/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/IotEndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace IotEndpointTypeMapper
      {

        static const int fips_HASH = HashingUtils::HashString("fips");
        static const int standard_HASH = HashingUtils::HashString("standard");


        IotEndpointType GetIotEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == fips_HASH)
          {
            return IotEndpointType::fips;
          }
          else if (hashCode == standard_HASH)
          {
            return IotEndpointType::standard;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IotEndpointType>(hashCode);
          }

          return IotEndpointType::NOT_SET;
        }

        Aws::String GetNameForIotEndpointType(IotEndpointType enumValue)
        {
          switch(enumValue)
          {
          case IotEndpointType::NOT_SET:
            return {};
          case IotEndpointType::fips:
            return "fips";
          case IotEndpointType::standard:
            return "standard";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IotEndpointTypeMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
