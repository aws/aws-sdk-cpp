﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/SchemaStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace SchemaStatusMapper
      {

        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");


        SchemaStatus GetSchemaStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROCESSING_HASH)
          {
            return SchemaStatus::PROCESSING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return SchemaStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return SchemaStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SchemaStatus::FAILED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return SchemaStatus::SUCCESS;
          }
          else if (hashCode == NOT_APPLICABLE_HASH)
          {
            return SchemaStatus::NOT_APPLICABLE;
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
          case SchemaStatus::PROCESSING:
            return "PROCESSING";
          case SchemaStatus::ACTIVE:
            return "ACTIVE";
          case SchemaStatus::DELETING:
            return "DELETING";
          case SchemaStatus::FAILED:
            return "FAILED";
          case SchemaStatus::SUCCESS:
            return "SUCCESS";
          case SchemaStatus::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
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
  } // namespace AppSync
} // namespace Aws
