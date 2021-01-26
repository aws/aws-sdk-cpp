/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisioningArtifactGuidance.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace ProvisioningArtifactGuidanceMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");


        ProvisioningArtifactGuidance GetProvisioningArtifactGuidanceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return ProvisioningArtifactGuidance::DEFAULT;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return ProvisioningArtifactGuidance::DEPRECATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisioningArtifactGuidance>(hashCode);
          }

          return ProvisioningArtifactGuidance::NOT_SET;
        }

        Aws::String GetNameForProvisioningArtifactGuidance(ProvisioningArtifactGuidance enumValue)
        {
          switch(enumValue)
          {
          case ProvisioningArtifactGuidance::DEFAULT:
            return "DEFAULT";
          case ProvisioningArtifactGuidance::DEPRECATED:
            return "DEPRECATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisioningArtifactGuidanceMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
