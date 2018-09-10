﻿/*
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

#include <aws/glue/model/S3EncryptionMode.h>
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
      namespace S3EncryptionModeMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int SSE_KMS_HASH = HashingUtils::HashString("SSE-KMS");
        static const int SSE_S3_HASH = HashingUtils::HashString("SSE-S3");


        S3EncryptionMode GetS3EncryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return S3EncryptionMode::DISABLED;
          }
          else if (hashCode == SSE_KMS_HASH)
          {
            return S3EncryptionMode::SSE_KMS;
          }
          else if (hashCode == SSE_S3_HASH)
          {
            return S3EncryptionMode::SSE_S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3EncryptionMode>(hashCode);
          }

          return S3EncryptionMode::NOT_SET;
        }

        Aws::String GetNameForS3EncryptionMode(S3EncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case S3EncryptionMode::DISABLED:
            return "DISABLED";
          case S3EncryptionMode::SSE_KMS:
            return "SSE-KMS";
          case S3EncryptionMode::SSE_S3:
            return "SSE-S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace S3EncryptionModeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
