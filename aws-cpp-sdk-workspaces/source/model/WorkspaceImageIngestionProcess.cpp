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
