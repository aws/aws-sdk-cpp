﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VolumeAttributeName.h>
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
      namespace VolumeAttributeNameMapper
      {

        static const int autoEnableIO_HASH = HashingUtils::HashString("autoEnableIO");
        static const int productCodes_HASH = HashingUtils::HashString("productCodes");


        VolumeAttributeName GetVolumeAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == autoEnableIO_HASH)
          {
            return VolumeAttributeName::autoEnableIO;
          }
          else if (hashCode == productCodes_HASH)
          {
            return VolumeAttributeName::productCodes;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeAttributeName>(hashCode);
          }

          return VolumeAttributeName::NOT_SET;
        }

        Aws::String GetNameForVolumeAttributeName(VolumeAttributeName enumValue)
        {
          switch(enumValue)
          {
          case VolumeAttributeName::NOT_SET:
            return {};
          case VolumeAttributeName::autoEnableIO:
            return "autoEnableIO";
          case VolumeAttributeName::productCodes:
            return "productCodes";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
