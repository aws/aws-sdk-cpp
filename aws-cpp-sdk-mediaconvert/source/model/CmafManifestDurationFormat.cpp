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

#include <aws/mediaconvert/model/CmafManifestDurationFormat.h>
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
      namespace CmafManifestDurationFormatMapper
      {

        static const int FLOATING_POINT_HASH = HashingUtils::HashString("FLOATING_POINT");
        static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");


        CmafManifestDurationFormat GetCmafManifestDurationFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLOATING_POINT_HASH)
          {
            return CmafManifestDurationFormat::FLOATING_POINT;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return CmafManifestDurationFormat::INTEGER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafManifestDurationFormat>(hashCode);
          }

          return CmafManifestDurationFormat::NOT_SET;
        }

        Aws::String GetNameForCmafManifestDurationFormat(CmafManifestDurationFormat enumValue)
        {
          switch(enumValue)
          {
          case CmafManifestDurationFormat::FLOATING_POINT:
            return "FLOATING_POINT";
          case CmafManifestDurationFormat::INTEGER:
            return "INTEGER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafManifestDurationFormatMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
