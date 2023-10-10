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

        static const int UP_TO_DATE_HASH = HashingUtils::HashString("UP_TO_DATE");
        static const int OUTDATED_HASH = HashingUtils::HashString("OUTDATED");
        static const int UNSUPPORTED_HASH = HashingUtils::HashString("UNSUPPORTED");


        VersionStatus GetVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
