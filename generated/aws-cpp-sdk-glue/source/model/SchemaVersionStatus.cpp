/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SchemaVersionStatus.h>
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
      namespace SchemaVersionStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILURE_HASH = HashingUtils::HashString("FAILURE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        SchemaVersionStatus GetSchemaVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return SchemaVersionStatus::AVAILABLE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return SchemaVersionStatus::PENDING;
          }
          else if (hashCode == FAILURE_HASH)
          {
            return SchemaVersionStatus::FAILURE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return SchemaVersionStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaVersionStatus>(hashCode);
          }

          return SchemaVersionStatus::NOT_SET;
        }

        Aws::String GetNameForSchemaVersionStatus(SchemaVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case SchemaVersionStatus::AVAILABLE:
            return "AVAILABLE";
          case SchemaVersionStatus::PENDING:
            return "PENDING";
          case SchemaVersionStatus::FAILURE:
            return "FAILURE";
          case SchemaVersionStatus::DELETING:
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

      } // namespace SchemaVersionStatusMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
