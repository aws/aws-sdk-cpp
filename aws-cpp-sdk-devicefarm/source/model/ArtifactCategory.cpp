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
#include <aws/devicefarm/model/ArtifactCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace ArtifactCategoryMapper
      {

        static const int SCREENSHOT_HASH = HashingUtils::HashString("SCREENSHOT");
        static const int FILE_HASH = HashingUtils::HashString("FILE");
        static const int LOG_HASH = HashingUtils::HashString("LOG");


        ArtifactCategory GetArtifactCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCREENSHOT_HASH)
          {
            return ArtifactCategory::SCREENSHOT;
          }
          else if (hashCode == FILE_HASH)
          {
            return ArtifactCategory::FILE;
          }
          else if (hashCode == LOG_HASH)
          {
            return ArtifactCategory::LOG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArtifactCategory>(hashCode);
          }

          return ArtifactCategory::NOT_SET;
        }

        Aws::String GetNameForArtifactCategory(ArtifactCategory enumValue)
        {
          switch(enumValue)
          {
          case ArtifactCategory::SCREENSHOT:
            return "SCREENSHOT";
          case ArtifactCategory::FILE:
            return "FILE";
          case ArtifactCategory::LOG:
            return "LOG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ArtifactCategoryMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
