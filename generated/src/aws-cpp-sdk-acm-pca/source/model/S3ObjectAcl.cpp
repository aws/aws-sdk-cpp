/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/S3ObjectAcl.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace S3ObjectAclMapper
      {

        static const int PUBLIC_READ_HASH = HashingUtils::HashString("PUBLIC_READ");
        static const int BUCKET_OWNER_FULL_CONTROL_HASH = HashingUtils::HashString("BUCKET_OWNER_FULL_CONTROL");


        S3ObjectAcl GetS3ObjectAclForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC_READ_HASH)
          {
            return S3ObjectAcl::PUBLIC_READ;
          }
          else if (hashCode == BUCKET_OWNER_FULL_CONTROL_HASH)
          {
            return S3ObjectAcl::BUCKET_OWNER_FULL_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3ObjectAcl>(hashCode);
          }

          return S3ObjectAcl::NOT_SET;
        }

        Aws::String GetNameForS3ObjectAcl(S3ObjectAcl enumValue)
        {
          switch(enumValue)
          {
          case S3ObjectAcl::NOT_SET:
            return {};
          case S3ObjectAcl::PUBLIC_READ:
            return "PUBLIC_READ";
          case S3ObjectAcl::BUCKET_OWNER_FULL_CONTROL:
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

      } // namespace S3ObjectAclMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
