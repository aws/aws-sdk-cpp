/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafWriteDASHManifest.h>
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
      namespace CmafWriteDASHManifestMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        CmafWriteDASHManifest GetCmafWriteDASHManifestForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return CmafWriteDASHManifest::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return CmafWriteDASHManifest::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafWriteDASHManifest>(hashCode);
          }

          return CmafWriteDASHManifest::NOT_SET;
        }

        Aws::String GetNameForCmafWriteDASHManifest(CmafWriteDASHManifest enumValue)
        {
          switch(enumValue)
          {
          case CmafWriteDASHManifest::DISABLED:
            return "DISABLED";
          case CmafWriteDASHManifest::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafWriteDASHManifestMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
