/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/S3ServerSideEncryptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace S3ServerSideEncryptionTypeMapper
      {

        static const int SERVER_SIDE_ENCRYPTION_S3_HASH = HashingUtils::HashString("SERVER_SIDE_ENCRYPTION_S3");
        static const int SERVER_SIDE_ENCRYPTION_KMS_HASH = HashingUtils::HashString("SERVER_SIDE_ENCRYPTION_KMS");


        S3ServerSideEncryptionType GetS3ServerSideEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVER_SIDE_ENCRYPTION_S3_HASH)
          {
            return S3ServerSideEncryptionType::SERVER_SIDE_ENCRYPTION_S3;
          }
          else if (hashCode == SERVER_SIDE_ENCRYPTION_KMS_HASH)
          {
            return S3ServerSideEncryptionType::SERVER_SIDE_ENCRYPTION_KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3ServerSideEncryptionType>(hashCode);
          }

          return S3ServerSideEncryptionType::NOT_SET;
        }

        Aws::String GetNameForS3ServerSideEncryptionType(S3ServerSideEncryptionType enumValue)
        {
          switch(enumValue)
          {
          case S3ServerSideEncryptionType::SERVER_SIDE_ENCRYPTION_S3:
            return "SERVER_SIDE_ENCRYPTION_S3";
          case S3ServerSideEncryptionType::SERVER_SIDE_ENCRYPTION_KMS:
            return "SERVER_SIDE_ENCRYPTION_KMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3ServerSideEncryptionTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
