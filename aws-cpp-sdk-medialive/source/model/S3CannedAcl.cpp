/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/S3CannedAcl.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace S3CannedAclMapper
      {

        static const int AUTHENTICATED_READ_HASH = HashingUtils::HashString("AUTHENTICATED_READ");
        static const int BUCKET_OWNER_FULL_CONTROL_HASH = HashingUtils::HashString("BUCKET_OWNER_FULL_CONTROL");
        static const int BUCKET_OWNER_READ_HASH = HashingUtils::HashString("BUCKET_OWNER_READ");
        static const int PUBLIC_READ_HASH = HashingUtils::HashString("PUBLIC_READ");


        S3CannedAcl GetS3CannedAclForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTHENTICATED_READ_HASH)
          {
            return S3CannedAcl::AUTHENTICATED_READ;
          }
          else if (hashCode == BUCKET_OWNER_FULL_CONTROL_HASH)
          {
            return S3CannedAcl::BUCKET_OWNER_FULL_CONTROL;
          }
          else if (hashCode == BUCKET_OWNER_READ_HASH)
          {
            return S3CannedAcl::BUCKET_OWNER_READ;
          }
          else if (hashCode == PUBLIC_READ_HASH)
          {
            return S3CannedAcl::PUBLIC_READ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3CannedAcl>(hashCode);
          }

          return S3CannedAcl::NOT_SET;
        }

        Aws::String GetNameForS3CannedAcl(S3CannedAcl enumValue)
        {
          switch(enumValue)
          {
          case S3CannedAcl::AUTHENTICATED_READ:
            return "AUTHENTICATED_READ";
          case S3CannedAcl::BUCKET_OWNER_FULL_CONTROL:
            return "BUCKET_OWNER_FULL_CONTROL";
          case S3CannedAcl::BUCKET_OWNER_READ:
            return "BUCKET_OWNER_READ";
          case S3CannedAcl::PUBLIC_READ:
            return "PUBLIC_READ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3CannedAclMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
