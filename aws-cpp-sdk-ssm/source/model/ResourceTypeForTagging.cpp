/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResourceTypeForTagging.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace ResourceTypeForTaggingMapper
      {

        static const int Document_HASH = HashingUtils::HashString("Document");
        static const int ManagedInstance_HASH = HashingUtils::HashString("ManagedInstance");
        static const int MaintenanceWindow_HASH = HashingUtils::HashString("MaintenanceWindow");
        static const int Parameter_HASH = HashingUtils::HashString("Parameter");
        static const int PatchBaseline_HASH = HashingUtils::HashString("PatchBaseline");
        static const int OpsItem_HASH = HashingUtils::HashString("OpsItem");
        static const int OpsMetadata_HASH = HashingUtils::HashString("OpsMetadata");


        ResourceTypeForTagging GetResourceTypeForTaggingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Document_HASH)
          {
            return ResourceTypeForTagging::Document;
          }
          else if (hashCode == ManagedInstance_HASH)
          {
            return ResourceTypeForTagging::ManagedInstance;
          }
          else if (hashCode == MaintenanceWindow_HASH)
          {
            return ResourceTypeForTagging::MaintenanceWindow;
          }
          else if (hashCode == Parameter_HASH)
          {
            return ResourceTypeForTagging::Parameter;
          }
          else if (hashCode == PatchBaseline_HASH)
          {
            return ResourceTypeForTagging::PatchBaseline;
          }
          else if (hashCode == OpsItem_HASH)
          {
            return ResourceTypeForTagging::OpsItem;
          }
          else if (hashCode == OpsMetadata_HASH)
          {
            return ResourceTypeForTagging::OpsMetadata;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceTypeForTagging>(hashCode);
          }

          return ResourceTypeForTagging::NOT_SET;
        }

        Aws::String GetNameForResourceTypeForTagging(ResourceTypeForTagging enumValue)
        {
          switch(enumValue)
          {
          case ResourceTypeForTagging::Document:
            return "Document";
          case ResourceTypeForTagging::ManagedInstance:
            return "ManagedInstance";
          case ResourceTypeForTagging::MaintenanceWindow:
            return "MaintenanceWindow";
          case ResourceTypeForTagging::Parameter:
            return "Parameter";
          case ResourceTypeForTagging::PatchBaseline:
            return "PatchBaseline";
          case ResourceTypeForTagging::OpsItem:
            return "OpsItem";
          case ResourceTypeForTagging::OpsMetadata:
            return "OpsMetadata";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeForTaggingMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
