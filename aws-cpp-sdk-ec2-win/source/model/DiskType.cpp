/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DiskType.h>
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
      namespace DiskTypeMapper
      {

        static const int hdd_HASH = HashingUtils::HashString("hdd");
        static const int ssd_HASH = HashingUtils::HashString("ssd");


        DiskType GetDiskTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == hdd_HASH)
          {
            return DiskType::hdd;
          }
          else if (hashCode == ssd_HASH)
          {
            return DiskType::ssd;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiskType>(hashCode);
          }

          return DiskType::NOT_SET;
        }

        Aws::String GetNameForDiskType(DiskType enumValue)
        {
          switch(enumValue)
          {
          case DiskType::hdd:
            return "hdd";
          case DiskType::ssd:
            return "ssd";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiskTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
