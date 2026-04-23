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
