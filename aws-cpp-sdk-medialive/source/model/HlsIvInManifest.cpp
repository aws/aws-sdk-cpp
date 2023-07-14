/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsIvInManifest.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace HlsIvInManifestMapper
      {

        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");
        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");


        HlsIvInManifest GetHlsIvInManifestForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXCLUDE_HASH)
          {
            return HlsIvInManifest::EXCLUDE;
          }
          else if (hashCode == INCLUDE_HASH)
          {
            return HlsIvInManifest::INCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsIvInManifest>(hashCode);
          }

          return HlsIvInManifest::NOT_SET;
        }

        Aws::String GetNameForHlsIvInManifest(HlsIvInManifest enumValue)
        {
          switch(enumValue)
          {
          case HlsIvInManifest::EXCLUDE:
            return "EXCLUDE";
          case HlsIvInManifest::INCLUDE:
            return "INCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsIvInManifestMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
