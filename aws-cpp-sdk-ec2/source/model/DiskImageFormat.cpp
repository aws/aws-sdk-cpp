/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/DiskImageFormat.h>
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
      namespace DiskImageFormatMapper
      {

        static const int VMDK_HASH = HashingUtils::HashString("VMDK");
        static const int RAW_HASH = HashingUtils::HashString("RAW");
        static const int VHD_HASH = HashingUtils::HashString("VHD");


        DiskImageFormat GetDiskImageFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VMDK_HASH)
          {
            return DiskImageFormat::VMDK;
          }
          else if (hashCode == RAW_HASH)
          {
            return DiskImageFormat::RAW;
          }
          else if (hashCode == VHD_HASH)
          {
            return DiskImageFormat::VHD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiskImageFormat>(hashCode);
          }

          return DiskImageFormat::NOT_SET;
        }

        Aws::String GetNameForDiskImageFormat(DiskImageFormat enumValue)
        {
          switch(enumValue)
          {
          case DiskImageFormat::VMDK:
            return "VMDK";
          case DiskImageFormat::RAW:
            return "RAW";
          case DiskImageFormat::VHD:
            return "VHD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DiskImageFormatMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
