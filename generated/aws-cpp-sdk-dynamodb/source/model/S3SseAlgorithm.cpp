/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/S3SseAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace S3SseAlgorithmMapper
      {

        static const int AES256_HASH = HashingUtils::HashString("AES256");
        static const int KMS_HASH = HashingUtils::HashString("KMS");


        S3SseAlgorithm GetS3SseAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AES256_HASH)
          {
            return S3SseAlgorithm::AES256;
          }
          else if (hashCode == KMS_HASH)
          {
            return S3SseAlgorithm::KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3SseAlgorithm>(hashCode);
          }

          return S3SseAlgorithm::NOT_SET;
        }

        Aws::String GetNameForS3SseAlgorithm(S3SseAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case S3SseAlgorithm::AES256:
            return "AES256";
          case S3SseAlgorithm::KMS:
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

      } // namespace S3SseAlgorithmMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
