/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CloudWatchEncryptionMode.h>
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
      namespace CloudWatchEncryptionModeMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int SSE_KMS_HASH = HashingUtils::HashString("SSE-KMS");


        CloudWatchEncryptionMode GetCloudWatchEncryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return CloudWatchEncryptionMode::DISABLED;
          }
          else if (hashCode == SSE_KMS_HASH)
          {
            return CloudWatchEncryptionMode::SSE_KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudWatchEncryptionMode>(hashCode);
          }

          return CloudWatchEncryptionMode::NOT_SET;
        }

        Aws::String GetNameForCloudWatchEncryptionMode(CloudWatchEncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case CloudWatchEncryptionMode::DISABLED:
            return "DISABLED";
          case CloudWatchEncryptionMode::SSE_KMS:
            return "SSE-KMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudWatchEncryptionModeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
