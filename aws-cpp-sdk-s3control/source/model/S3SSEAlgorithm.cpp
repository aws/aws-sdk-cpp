/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3SSEAlgorithm.h>
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
      namespace S3SSEAlgorithmMapper
      {

        static const int AES256_HASH = HashingUtils::HashString("AES256");
        static const int KMS_HASH = HashingUtils::HashString("KMS");


        S3SSEAlgorithm GetS3SSEAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AES256_HASH)
          {
            return S3SSEAlgorithm::AES256;
          }
          else if (hashCode == KMS_HASH)
          {
            return S3SSEAlgorithm::KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3SSEAlgorithm>(hashCode);
          }

          return S3SSEAlgorithm::NOT_SET;
        }

        Aws::String GetNameForS3SSEAlgorithm(S3SSEAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case S3SSEAlgorithm::AES256:
            return "AES256";
          case S3SSEAlgorithm::KMS:
            return "KMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3SSEAlgorithmMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
