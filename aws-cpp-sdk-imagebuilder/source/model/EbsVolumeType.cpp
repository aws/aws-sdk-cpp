/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/imagebuilder/model/EbsVolumeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace EbsVolumeTypeMapper
      {

        static const int standard_HASH = HashingUtils::HashString("standard");
        static const int io1_HASH = HashingUtils::HashString("io1");
        static const int gp2_HASH = HashingUtils::HashString("gp2");
        static const int sc1_HASH = HashingUtils::HashString("sc1");
        static const int st1_HASH = HashingUtils::HashString("st1");


        EbsVolumeType GetEbsVolumeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_HASH)
          {
            return EbsVolumeType::standard;
          }
          else if (hashCode == io1_HASH)
          {
            return EbsVolumeType::io1;
          }
          else if (hashCode == gp2_HASH)
          {
            return EbsVolumeType::gp2;
          }
          else if (hashCode == sc1_HASH)
          {
            return EbsVolumeType::sc1;
          }
          else if (hashCode == st1_HASH)
          {
            return EbsVolumeType::st1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EbsVolumeType>(hashCode);
          }

          return EbsVolumeType::NOT_SET;
        }

        Aws::String GetNameForEbsVolumeType(EbsVolumeType enumValue)
        {
          switch(enumValue)
          {
          case EbsVolumeType::standard:
            return "standard";
          case EbsVolumeType::io1:
            return "io1";
          case EbsVolumeType::gp2:
            return "gp2";
          case EbsVolumeType::sc1:
            return "sc1";
          case EbsVolumeType::st1:
            return "st1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EbsVolumeTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
