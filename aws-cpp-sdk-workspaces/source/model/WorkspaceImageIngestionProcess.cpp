/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceImageIngestionProcess.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace WorkspaceImageIngestionProcessMapper
      {

        static const int BYOL_REGULAR_HASH = HashingUtils::HashString("BYOL_REGULAR");
        static const int BYOL_GRAPHICS_HASH = HashingUtils::HashString("BYOL_GRAPHICS");
        static const int BYOL_GRAPHICSPRO_HASH = HashingUtils::HashString("BYOL_GRAPHICSPRO");
        static const int BYOL_GRAPHICS_G4DN_HASH = HashingUtils::HashString("BYOL_GRAPHICS_G4DN");
        static const int BYOL_REGULAR_WSP_HASH = HashingUtils::HashString("BYOL_REGULAR_WSP");
        static const int BYOL_REGULAR_BYOP_HASH = HashingUtils::HashString("BYOL_REGULAR_BYOP");
        static const int BYOL_GRAPHICS_G4DN_BYOP_HASH = HashingUtils::HashString("BYOL_GRAPHICS_G4DN_BYOP");


        WorkspaceImageIngestionProcess GetWorkspaceImageIngestionProcessForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BYOL_REGULAR_HASH)
          {
            return WorkspaceImageIngestionProcess::BYOL_REGULAR;
          }
          else if (hashCode == BYOL_GRAPHICS_HASH)
          {
            return WorkspaceImageIngestionProcess::BYOL_GRAPHICS;
          }
          else if (hashCode == BYOL_GRAPHICSPRO_HASH)
          {
            return WorkspaceImageIngestionProcess::BYOL_GRAPHICSPRO;
          }
          else if (hashCode == BYOL_GRAPHICS_G4DN_HASH)
          {
            return WorkspaceImageIngestionProcess::BYOL_GRAPHICS_G4DN;
          }
          else if (hashCode == BYOL_REGULAR_WSP_HASH)
          {
            return WorkspaceImageIngestionProcess::BYOL_REGULAR_WSP;
          }
          else if (hashCode == BYOL_REGULAR_BYOP_HASH)
          {
            return WorkspaceImageIngestionProcess::BYOL_REGULAR_BYOP;
          }
          else if (hashCode == BYOL_GRAPHICS_G4DN_BYOP_HASH)
          {
            return WorkspaceImageIngestionProcess::BYOL_GRAPHICS_G4DN_BYOP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceImageIngestionProcess>(hashCode);
          }

          return WorkspaceImageIngestionProcess::NOT_SET;
        }

        Aws::String GetNameForWorkspaceImageIngestionProcess(WorkspaceImageIngestionProcess enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceImageIngestionProcess::BYOL_REGULAR:
            return "BYOL_REGULAR";
          case WorkspaceImageIngestionProcess::BYOL_GRAPHICS:
            return "BYOL_GRAPHICS";
          case WorkspaceImageIngestionProcess::BYOL_GRAPHICSPRO:
            return "BYOL_GRAPHICSPRO";
          case WorkspaceImageIngestionProcess::BYOL_GRAPHICS_G4DN:
            return "BYOL_GRAPHICS_G4DN";
          case WorkspaceImageIngestionProcess::BYOL_REGULAR_WSP:
            return "BYOL_REGULAR_WSP";
          case WorkspaceImageIngestionProcess::BYOL_REGULAR_BYOP:
            return "BYOL_REGULAR_BYOP";
          case WorkspaceImageIngestionProcess::BYOL_GRAPHICS_G4DN_BYOP:
            return "BYOL_GRAPHICS_G4DN_BYOP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspaceImageIngestionProcessMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
