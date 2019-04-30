/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
