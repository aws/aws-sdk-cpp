/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/IngestionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppFabric
  {
    namespace Model
    {
      namespace IngestionTypeMapper
      {

        static const int auditLog_HASH = HashingUtils::HashString("auditLog");


        IngestionType GetIngestionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == auditLog_HASH)
          {
            return IngestionType::auditLog;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionType>(hashCode);
          }

          return IngestionType::NOT_SET;
        }

        Aws::String GetNameForIngestionType(IngestionType enumValue)
        {
          switch(enumValue)
          {
          case IngestionType::NOT_SET:
            return {};
          case IngestionType::auditLog:
            return "auditLog";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionTypeMapper
    } // namespace Model
  } // namespace AppFabric
} // namespace Aws
