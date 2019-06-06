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
