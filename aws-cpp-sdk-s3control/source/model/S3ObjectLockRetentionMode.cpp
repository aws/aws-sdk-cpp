/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3ObjectLockRetentionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace S3ObjectLockRetentionModeMapper
      {

        static const int COMPLIANCE_HASH = HashingUtils::HashString("COMPLIANCE");
        static const int GOVERNANCE_HASH = HashingUtils::HashString("GOVERNANCE");


        S3ObjectLockRetentionMode GetS3ObjectLockRetentionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLIANCE_HASH)
          {
            return S3ObjectLockRetentionMode::COMPLIANCE;
          }
          else if (hashCode == GOVERNANCE_HASH)
          {
            return S3ObjectLockRetentionMode::GOVERNANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3ObjectLockRetentionMode>(hashCode);
          }

          return S3ObjectLockRetentionMode::NOT_SET;
        }

        Aws::String GetNameForS3ObjectLockRetentionMode(S3ObjectLockRetentionMode enumValue)
        {
          switch(enumValue)
          {
          case S3ObjectLockRetentionMode::COMPLIANCE:
            return "COMPLIANCE";
          case S3ObjectLockRetentionMode::GOVERNANCE:
            return "GOVERNANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3ObjectLockRetentionModeMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
