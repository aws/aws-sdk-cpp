/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/S3AclOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace S3AclOptionMapper
      {

        static const int BUCKET_OWNER_FULL_CONTROL_HASH = HashingUtils::HashString("BUCKET_OWNER_FULL_CONTROL");


        S3AclOption GetS3AclOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUCKET_OWNER_FULL_CONTROL_HASH)
          {
            return S3AclOption::BUCKET_OWNER_FULL_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3AclOption>(hashCode);
          }

          return S3AclOption::NOT_SET;
        }

        Aws::String GetNameForS3AclOption(S3AclOption enumValue)
        {
          switch(enumValue)
          {
          case S3AclOption::NOT_SET:
            return {};
          case S3AclOption::BUCKET_OWNER_FULL_CONTROL:
            return "BUCKET_OWNER_FULL_CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3AclOptionMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
