/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PlatformValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace PlatformValuesMapper
      {

        static constexpr uint32_t Windows_HASH = ConstExprHashingUtils::HashString("Windows");


        PlatformValues GetPlatformValuesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Windows_HASH)
          {
            return PlatformValues::Windows;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlatformValues>(hashCode);
          }

          return PlatformValues::NOT_SET;
        }

        Aws::String GetNameForPlatformValues(PlatformValues enumValue)
        {
          switch(enumValue)
          {
          case PlatformValues::NOT_SET:
            return {};
          case PlatformValues::Windows:
            return "Windows";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlatformValuesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
