/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JobBookmarksEncryptionMode.h>
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
      namespace JobBookmarksEncryptionModeMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int CSE_KMS_HASH = HashingUtils::HashString("CSE-KMS");


        JobBookmarksEncryptionMode GetJobBookmarksEncryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return JobBookmarksEncryptionMode::DISABLED;
          }
          else if (hashCode == CSE_KMS_HASH)
          {
            return JobBookmarksEncryptionMode::CSE_KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobBookmarksEncryptionMode>(hashCode);
          }

          return JobBookmarksEncryptionMode::NOT_SET;
        }

        Aws::String GetNameForJobBookmarksEncryptionMode(JobBookmarksEncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case JobBookmarksEncryptionMode::DISABLED:
            return "DISABLED";
          case JobBookmarksEncryptionMode::CSE_KMS:
            return "CSE-KMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobBookmarksEncryptionModeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
