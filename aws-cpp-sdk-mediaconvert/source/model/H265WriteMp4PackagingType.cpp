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

#include <aws/mediaconvert/model/H265WriteMp4PackagingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace H265WriteMp4PackagingTypeMapper
      {

        static const int HVC1_HASH = HashingUtils::HashString("HVC1");
        static const int HEV1_HASH = HashingUtils::HashString("HEV1");


        H265WriteMp4PackagingType GetH265WriteMp4PackagingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HVC1_HASH)
          {
            return H265WriteMp4PackagingType::HVC1;
          }
          else if (hashCode == HEV1_HASH)
          {
            return H265WriteMp4PackagingType::HEV1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265WriteMp4PackagingType>(hashCode);
          }

          return H265WriteMp4PackagingType::NOT_SET;
        }

        Aws::String GetNameForH265WriteMp4PackagingType(H265WriteMp4PackagingType enumValue)
        {
          switch(enumValue)
          {
          case H265WriteMp4PackagingType::HVC1:
            return "HVC1";
          case H265WriteMp4PackagingType::HEV1:
            return "HEV1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265WriteMp4PackagingTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
