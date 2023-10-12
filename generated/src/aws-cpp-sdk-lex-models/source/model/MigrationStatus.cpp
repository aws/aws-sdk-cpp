/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/MigrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace MigrationStatusMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        MigrationStatus GetMigrationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return MigrationStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return MigrationStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MigrationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MigrationStatus>(hashCode);
          }

          return MigrationStatus::NOT_SET;
        }

        Aws::String GetNameForMigrationStatus(MigrationStatus enumValue)
        {
          switch(enumValue)
          {
          case MigrationStatus::NOT_SET:
            return {};
          case MigrationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case MigrationStatus::COMPLETED:
            return "COMPLETED";
          case MigrationStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MigrationStatusMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
