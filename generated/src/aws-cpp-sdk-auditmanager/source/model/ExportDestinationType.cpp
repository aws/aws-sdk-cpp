/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ExportDestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace ExportDestinationTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");


        ExportDestinationType GetExportDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return ExportDestinationType::S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportDestinationType>(hashCode);
          }

          return ExportDestinationType::NOT_SET;
        }

        Aws::String GetNameForExportDestinationType(ExportDestinationType enumValue)
        {
          switch(enumValue)
          {
          case ExportDestinationType::NOT_SET:
            return {};
          case ExportDestinationType::S3:
            return "S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportDestinationTypeMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
