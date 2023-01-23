/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

            return {};
          }
        }

      } // namespace ArtifactCategoryMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
