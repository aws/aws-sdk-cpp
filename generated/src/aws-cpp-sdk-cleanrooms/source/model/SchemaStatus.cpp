/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SchemaStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace SchemaStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int NOT_READY_HASH = HashingUtils::HashString("NOT_READY");


        SchemaStatus GetSchemaStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return SchemaStatus::READY;
          }
          else if (hashCode == NOT_READY_HASH)
          {
            return SchemaStatus::NOT_READY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaStatus>(hashCode);
          }

          return SchemaStatus::NOT_SET;
        }

        Aws::String GetNameForSchemaStatus(SchemaStatus enumValue)
        {
          switch(enumValue)
          {
          case SchemaStatus::NOT_SET:
            return {};
          case SchemaStatus::READY:
            return "READY";
          case SchemaStatus::NOT_READY:
            return "NOT_READY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
