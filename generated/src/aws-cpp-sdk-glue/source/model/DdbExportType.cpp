/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DdbExportType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace DdbExportTypeMapper
      {

        static const int ddb_HASH = HashingUtils::HashString("ddb");
        static const int s3_HASH = HashingUtils::HashString("s3");


        DdbExportType GetDdbExportTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ddb_HASH)
          {
            return DdbExportType::ddb;
          }
          else if (hashCode == s3_HASH)
          {
            return DdbExportType::s3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DdbExportType>(hashCode);
          }

          return DdbExportType::NOT_SET;
        }

        Aws::String GetNameForDdbExportType(DdbExportType enumValue)
        {
          switch(enumValue)
          {
          case DdbExportType::NOT_SET:
            return {};
          case DdbExportType::ddb:
            return "ddb";
          case DdbExportType::s3:
            return "s3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DdbExportTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
