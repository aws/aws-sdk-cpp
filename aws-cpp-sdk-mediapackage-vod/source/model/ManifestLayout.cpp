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

#include <aws/mediapackage-vod/model/ManifestLayout.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackageVod
  {
    namespace Model
    {
      namespace ManifestLayoutMapper
      {

        static const int FULL_HASH = HashingUtils::HashString("FULL");
        static const int COMPACT_HASH = HashingUtils::HashString("COMPACT");


        ManifestLayout GetManifestLayoutForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_HASH)
          {
            return ManifestLayout::FULL;
          }
          else if (hashCode == COMPACT_HASH)
          {
            return ManifestLayout::COMPACT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManifestLayout>(hashCode);
          }

          return ManifestLayout::NOT_SET;
        }

        Aws::String GetNameForManifestLayout(ManifestLayout enumValue)
        {
          switch(enumValue)
          {
          case ManifestLayout::FULL:
            return "FULL";
          case ManifestLayout::COMPACT:
            return "COMPACT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManifestLayoutMapper
    } // namespace Model
  } // namespace MediaPackageVod
} // namespace Aws
