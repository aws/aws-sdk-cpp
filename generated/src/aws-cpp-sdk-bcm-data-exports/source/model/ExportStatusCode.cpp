/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/ExportStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDataExports
  {
    namespace Model
    {
      namespace ExportStatusCodeMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");


        ExportStatusCode GetExportStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return ExportStatusCode::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return ExportStatusCode::UNHEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportStatusCode>(hashCode);
          }

          return ExportStatusCode::NOT_SET;
        }

        Aws::String GetNameForExportStatusCode(ExportStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ExportStatusCode::NOT_SET:
            return {};
          case ExportStatusCode::HEALTHY:
            return "HEALTHY";
          case ExportStatusCode::UNHEALTHY:
            return "UNHEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportStatusCodeMapper
    } // namespace Model
  } // namespace BCMDataExports
} // namespace Aws
