/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmfcManifestMetadataSignaling.h>
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
      namespace CmfcManifestMetadataSignalingMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        CmfcManifestMetadataSignaling GetCmfcManifestMetadataSignalingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return CmfcManifestMetadataSignaling::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CmfcManifestMetadataSignaling::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmfcManifestMetadataSignaling>(hashCode);
          }

          return CmfcManifestMetadataSignaling::NOT_SET;
        }

        Aws::String GetNameForCmfcManifestMetadataSignaling(CmfcManifestMetadataSignaling enumValue)
        {
          switch(enumValue)
          {
          case CmfcManifestMetadataSignaling::ENABLED:
            return "ENABLED";
          case CmfcManifestMetadataSignaling::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmfcManifestMetadataSignalingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
