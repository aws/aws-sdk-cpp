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

#include <aws/mediaconvert/model/AacSpecification.h>
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
      namespace AacSpecificationMapper
      {

        static const int MPEG2_HASH = HashingUtils::HashString("MPEG2");
        static const int MPEG4_HASH = HashingUtils::HashString("MPEG4");


        AacSpecification GetAacSpecificationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MPEG2_HASH)
          {
            return AacSpecification::MPEG2;
          }
          else if (hashCode == MPEG4_HASH)
          {
            return AacSpecification::MPEG4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacSpecification>(hashCode);
          }

          return AacSpecification::NOT_SET;
        }

        Aws::String GetNameForAacSpecification(AacSpecification enumValue)
        {
          switch(enumValue)
          {
          case AacSpecification::MPEG2:
            return "MPEG2";
          case AacSpecification::MPEG4:
            return "MPEG4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AacSpecificationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
