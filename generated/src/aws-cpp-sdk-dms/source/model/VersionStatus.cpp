/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/VersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace VersionStatusMapper
      {

        static constexpr uint32_t UP_TO_DATE_HASH = ConstExprHashingUtils::HashString("UP_TO_DATE");
        static constexpr uint32_t OUTDATED_HASH = ConstExprHashingUtils::HashString("OUTDATED");
        static constexpr uint32_t UNSUPPORTED_HASH = ConstExprHashingUtils::HashString("UNSUPPORTED");


        VersionStatus GetVersionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UP_TO_DATE_HASH)
          {
            return VersionStatus::UP_TO_DATE;
          }
          else if (hashCode == OUTDATED_HASH)
          {
            return VersionStatus::OUTDATED;
          }
          else if (hashCode == UNSUPPORTED_HASH)
          {
            return VersionStatus::UNSUPPORTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VersionStatus>(hashCode);
          }

          return VersionStatus::NOT_SET;
        }

        Aws::String GetNameForVersionStatus(VersionStatus enumValue)
        {
          switch(enumValue)
          {
          case VersionStatus::NOT_SET:
            return {};
          case VersionStatus::UP_TO_DATE:
            return "UP_TO_DATE";
          case VersionStatus::OUTDATED:
            return "OUTDATED";
          case VersionStatus::UNSUPPORTED:
            return "UNSUPPORTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VersionStatusMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
