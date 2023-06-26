/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SchemaStatus.h>
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
      namespace SchemaStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        SchemaStatus GetSchemaStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return SchemaStatus::AVAILABLE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return SchemaStatus::PENDING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return SchemaStatus::DELETING;
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
          case SchemaStatus::AVAILABLE:
            return "AVAILABLE";
          case SchemaStatus::PENDING:
            return "PENDING";
          case SchemaStatus::DELETING:
            return "DELETING";
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
  } // namespace Glue
} // namespace Aws
