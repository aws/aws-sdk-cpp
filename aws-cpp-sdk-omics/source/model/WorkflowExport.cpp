/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/WorkflowExport.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace WorkflowExportMapper
      {

        static const int DEFINITION_HASH = HashingUtils::HashString("DEFINITION");


        WorkflowExport GetWorkflowExportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFINITION_HASH)
          {
            return WorkflowExport::DEFINITION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowExport>(hashCode);
          }

          return WorkflowExport::NOT_SET;
        }

        Aws::String GetNameForWorkflowExport(WorkflowExport enumValue)
        {
          switch(enumValue)
          {
          case WorkflowExport::DEFINITION:
            return "DEFINITION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowExportMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
