﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RIProductDescription.h>
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
      namespace RIProductDescriptionMapper
      {

        static const int Linux_UNIX_HASH = HashingUtils::HashString("Linux/UNIX");
        static const int Linux_UNIX_Amazon_VPC_HASH = HashingUtils::HashString("Linux/UNIX (Amazon VPC)");
        static const int Windows_HASH = HashingUtils::HashString("Windows");
        static const int Windows_Amazon_VPC_HASH = HashingUtils::HashString("Windows (Amazon VPC)");


        RIProductDescription GetRIProductDescriptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Linux_UNIX_HASH)
          {
            return RIProductDescription::Linux_UNIX;
          }
          else if (hashCode == Linux_UNIX_Amazon_VPC_HASH)
          {
            return RIProductDescription::Linux_UNIX_Amazon_VPC;
          }
          else if (hashCode == Windows_HASH)
          {
            return RIProductDescription::Windows;
          }
          else if (hashCode == Windows_Amazon_VPC_HASH)
          {
            return RIProductDescription::Windows_Amazon_VPC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RIProductDescription>(hashCode);
          }

          return RIProductDescription::NOT_SET;
        }

        Aws::String GetNameForRIProductDescription(RIProductDescription enumValue)
        {
          switch(enumValue)
          {
          case RIProductDescription::Linux_UNIX:
            return "Linux/UNIX";
          case RIProductDescription::Linux_UNIX_Amazon_VPC:
            return "Linux/UNIX (Amazon VPC)";
          case RIProductDescription::Windows:
            return "Windows";
          case RIProductDescription::Windows_Amazon_VPC:
            return "Windows (Amazon VPC)";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RIProductDescriptionMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
